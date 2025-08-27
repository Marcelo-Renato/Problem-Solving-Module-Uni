#include <stdio.h>


void printFibonacci(){

int n1 = 0, n2 = 1, next, i;
int terms = 10; // First 10 terms
  
printf("Fibonacci Series: ");
for (i = 0; i < terms; ++i) {
  printf("%d ", n1);
  next = n1 + n2;
  n1 = n2;
  n2 = next;
}
printf("\n");
}
int main() {
  printFibonacci();
    

    return 0;

}


