# include <stdio.h>
int main() { 
    int age;
    printf(" Enter your age\n");
    scanf("%d",&age);
    if (age<=70&& age>=16)
    {
        printf("you can drive and you are able to get liciense \n",age);

    }
    else
    {
        printf("you can't drive and you are not able to get liciense\n");

    }
    
    // getting citizenship cateria
    if (age>=16)
    {
        printf("you are able get citizenship\n");

    }
    else
    {
        printf("you are not able to get citizenship\n");
    }
    // age cateria to open types of bank account

    if (age>=18)
    {
        printf("you are able to open bank account\n");
    }
    else
    {
        printf("you are able to get minor bank account\n");
    }
    //pension geting age

    if (age>=70)
    {
        printf("you will get pension\n");
        
    }
    else
    {
        printf("you will not get pension\n");
    }
    
    //codebysushant
    
    return 0;
}
