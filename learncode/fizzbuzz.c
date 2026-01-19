/*fizzbuzz concept with showing how many times number is divided*/



#include <stdio.h>

int main()
{
    int i;
    printf("Enter the number = ");
    scanf("%d", &i);

    if (i % 3 == 0 && i % 5 == 0)
    {
        printf("Number is FizzBuzz\n");
        printf("Divided by 3 = %d times\n", i / 3);
        printf("Divided by 5 = %d times\n", i / 5);
    }
    else if (i % 3 == 0)
    {
        printf("Number is Fizz\n");
        printf("Divided by 3 = %d times\n", i / 3);
    }
    else if (i % 5 == 0)
    {
        printf("Number is Buzz\n");
        printf("Divided by 5 = %d times\n", i / 5);
    }
    else
    {
        printf("Number is NOT FizzBuzz\n");
        printf("Divided by 3 = %d times\n", i / 3);
        printf("Divided by 5 = %d times\n", i / 5);
    }

    return 0;
}
