#include <stdio.h>

int main() {
    
    int age = 0;
    float gpa = 0.0;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("Qual seu nome completo: ");
    fgets(name, sizeof(name), stdin);


    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}