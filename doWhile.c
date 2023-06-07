// Program to add numbers until the user enters zero

#include <stdio.h>
int main() {
  int temp = 0, number, i = 0;

  // the body of the loop is executed at least once
  do {
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number < temp){
        temp = number;
    }
    i++;
  }while(i < 10);
    printf("least number is %d", temp);

}