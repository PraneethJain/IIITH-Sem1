#include <stdio.h>

int main()
{
    float celsiusValue;
    scanf("%f", &celsiusValue);

    float fahrenheitValue = 9*celsiusValue/5 + 32;
    printf("%f celsius = %f fahrenheit\n", celsiusValue, fahrenheitValue);
    
    return 0;
}