#include <stdio.h>
#include <math.h>

int main()
{

    double farenheit, celsius, temp;
    char choice;

    printf("What temperature scale you want to use (c/f): \n");
    scanf(" %c", &choice);

    printf("the input temp is: \n");
    scanf(" %lf", &temp);

    if (choice == 'c' && temp >= 0 && temp <= 100)
    {
        printf("this is celsius scale \n");
        celsius = temp;
        farenheit = (9 * celsius) / 5 + 32;
        printf("the temp in celsius is : %.3lf \n", farenheit);
    }
    else if (choice == 'f' && temp >= 32 && temp <= 212)
    {
        printf("this is farenheit scale \n");
        farenheit = temp;
        celsius = 5 *(farenheit - 32) / 9;
        printf("the temp in farenheit is : %.3lf \n", celsius);
    }
    else
    {
        printf("you have put an unknown scale");
    }
    return 0;
}
