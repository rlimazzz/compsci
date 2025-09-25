char str[] = "BEBAMUITOCAFE";


void process()

{

   char *ptr = str;

   while (*ptr) {
        *ptr += 32;
        ptr++;
   }

}