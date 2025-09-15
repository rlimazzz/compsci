#include <stdio.h>

#include <math.h>

#include <limits.h>


#define getsig(x)        ((x)>>31 & 1)

#define getexp(x)        ((x)>>23 & 0xff)

#define getfrac(x)       ((x) & 0x7fffff)

#define makefloat(s,e,f) ((s & 1)<<31 | (((e) & 0xff) << 23) | ((f) & 0x7fffff))


typedef union {

  float f;

  unsigned int i;

} U; 


int float2int(float value)
{
    U u;
    u.f = value;
    
    unsigned int bits = u.i;
    int sign = getsig(bits);
    int exp = getexp(bits);
    int frac = getfrac(bits);
    
    // Handle special cases
    if (exp == 0) return 0; // Zero or denormalized numbers
    if (exp >= 158) { // Overflow: too large for int
        return sign ? INT_MIN : INT_MAX;
    }
    if (exp < 127) return 0; // Less than 1.0, truncates to 0
    
    // Add implicit leading 1 to fraction
    frac = frac | (1 << 23);
    
    // Calculate the shift amount
    int shift = 150 - exp; // 150 = 127 + 23
    
    if (shift > 0) {
        frac = frac >> shift;
    } else if (shift < 0) {
        frac = frac << (-shift);
    }
    
    // Apply sign
    return sign ? -frac : frac;
}



int main() {

   float f;


   printf("\n******** float2int ****************\n");


   f = 0.0;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = -0.0;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = 0.5;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = -0.5;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = 0.125;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = -0.125;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = 1.0;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = -1.0;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = 1.5;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = -1.5;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = 2.5;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = -2.5;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = 5.4;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = -5.4;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = 12345.0;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = -12345.0;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = 14690064.0;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = -14690064.0;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = 167788544.0;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = -167788544.0;

   printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));


   f = (float) pow(2,31);

   printf(" %+10.4f (2^31) = overflow -> %d %d\n", f, (int)f, float2int(f));


   f = -f;

   printf(" %+10.4f (-2^31) -> %d %d\n", f, (int)f, float2int(f));


   f = -((float) pow(2,32));

   printf(" %+10.4f (-2^32 = overflow) -> %d %d\n", f, (int)f, float2int(f));


   return 0;

}