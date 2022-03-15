#include <stdio.h>
/* Test */

void two()
{
    printf("2");
}

int main()
{
    char name[] = "Daniel";
    int age;
    age = 16;
    int num;
    num = 0;
    while (num < 5)
    {
        num = num + 1;
        printf("%d\n", num);
    }
    int num1, num2;
    num1 = 1;
    num2 = 2;

    two();

    printf("Hi!, my name is %s, num : %d\n", name, num);
    printf("And I'm %d!\n", age);
    printf("%d, %d!\n", num2, num1);
    printf("Hello World!\n");
    
    return 0;
}


