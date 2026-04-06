#include <stdio.h>
#include <stdbool.h>

int main() {
    char grade = 'F';
    char symbol = '!';
    char name[] = "Rodrigo";

    printf("A sua nota no exame foi: %c\n", grade);
    printf("Que vista linda%c\n", symbol);
    printf("Oi, meu nome eh %s\n", name);

    bool is0nline = true;

    printf("%d", is0nline);

    return 0;
}