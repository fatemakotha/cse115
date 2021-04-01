#include <stdio.h>

int main(){
  char option;
  printf("Choose your option: ");
  scanf("%c", &option);

  int a;

  if ((option=='a') || (option=='A')){
    a = 20+10;
    printf("Addition process result: %d\n", a);
  }
  else if ((option=='b') || (option=='B')){
    a = 20-10;
    printf("Substraction process result: %d\n", a);
  }
  else if ((option=='c') || (option=='C')){
    a = 20*10;
    printf("Multiplication process result: %d\n", a);
  }
  else if ((option=='d')|| (option=='D')){
    a = 20/10;
    printf("Division process result: %d\n", a);
  }
  else {
    printf("Invalid option.");
  }
  return 0;
}