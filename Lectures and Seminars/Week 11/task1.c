#include <stdio.h>
#include <stdlib.h>


void writeToFile(const char *filename, const char *text) {
    FILE *file = fopen(filename, "w");  
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }
    fprintf(file, "%s", text);  
    fclose(file); 
}

int main() {
    char text[256];

    printf("Digite uma linha de texto: ");
    fgets(text, sizeof(text), stdin); 


    writeToFile("output.txt", text);

    printf("Texto gravado com sucesso no arquivo 'output.txt'!\n");

    return 0;
}