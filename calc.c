#include <stdio.h>
#include "calc.h"
#include <stdlib.h>

int main()
{
  char sym[2],num1[12],num2[12];
  float chislo1,chislo2;
  while (sym[0]!='5')
  {
    printf("1)Add\n2)Sub\n3)Mult\n4)Div\n5)Quite\n");
    fgets(sym, 2, stdin);
    if(sym[0] == '5')
        exit(0);
    printf("please ente the first number");
     while(getchar()!='\n');
        fgets(num1,12,stdin);
    printf("please ente the second number");
    fgets(num2,12,stdin);
    chislo1 = atof(num1);
    chislo2 = atof(num2);
    switch (sym[0])
    {
     case '1':
     {
         printf("the result is %f\n\n",add(chislo1,chislo2));
         break;
     }
     case '2':
     {
         printf("the result is %f\n\n",sub(chislo1,chislo2));
         break;
     }
     case '3':
     {
         printf("the result is %f\n\n",mult(chislo1,chislo2));
         break;
     }
     case '4':
     {
         printf("the result is %f\n\n",divd(chislo1,chislo2));
         break;
     }
     default:{
         break;
     }
    }


  }
  return 0;
}