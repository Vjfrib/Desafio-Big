#include <stdio.h>
#include <stdlib.h>

typedef struct big {
  int start, end;
} big;

//signatures
void sum(big fator1, big fator2, big *result);
void sub(big minuendo, big subtraendo, big *resto);
void divi(big dividendo, big divisor, big *quoc);
void mult(big fator1, big fator2, big *prod);

int main(void) {
  
  big var1, var2, result;
  char index;
  printf("\n1 = soma; 2 = sub; 3 = div; 4 = mul;\n");
  index = getchar();
  
MENU:
  switch(index) {

    case '1': {
      sum(var1, var2, &result);
      break;
    }

    case '2': {
      sub(var1, var2, &result);
      break;
    }

    case '3': {
      divi(var1, var2, &result);
      break;
    }

    case '4': {
      mult(var1, var2, &result);
      break;
    }

    default: {
      goto MENU;
    }
  }
  
  return 0;
}

void sum(big fator1, big fator2, big *result) {
  printf("1");
}

void sub(big minuendo, big subtraendo, big *resto) {
printf("2");}

void divi(big dividendo, big divisor, big *quoc) {
printf("3");}

void mult(big fator1, big fator2, big *prod) {
printf("4");
}
