# include <stdio.h>
int main()
{
    int age;

    printf("enter the age\n");
    scanf("%d", &age);
    printf("you have enter %d as your age\n",age );
if (age>=18)
{
    printf("you are eligible for vote!");

}
else if (age>10)
 {
    printf("you are b/w 10 to 18 and you can vote for kids only");
}
else{
    printf("you are not eligible for vote!");
}

    return 0;
}
