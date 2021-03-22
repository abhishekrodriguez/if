#include <stdio.h>
int main()
{
    int a;
    printf("Enter the age: \n");
    scanf("%d",&a);

    printf("The age you have entered is %d \n",a);

    if (a>18)
    {          
        printf("You can vote");
    }
    else 
    {
        printf("You can not vote");
    }
    
}