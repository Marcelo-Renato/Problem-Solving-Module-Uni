#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void generateRandom(){
    
    int randomNum = rand() % 100 + 1; 
    printf("Random number: %d\n", randomNum);
};

int main() {
    srand(time(NULL)); 
    generateRandom();
    generateRandom();
    generateRandom();
    return 0;
}


