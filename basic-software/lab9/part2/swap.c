long last = 0;

long values[5] = {50,-10,60,-20,70};


void swap()

{

  int i;

  int j = 4;


  for (i = 0; i < j; i++, j--)

  {

     long tmp = values[i];

     values[i] = values[j];

     values[j] = tmp;

  }


  last = values[4];

}