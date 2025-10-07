short vet[4] = {50, 10, 67, 42};

short max = 0;


void ex01()

{

  char i;

  for (i = 0; i < 4; i++) {

     if (vet[i] > max)

        max = vet[i];

  }

}