#include <stdio.h>

float celsius_at_depth(float depth)
{
  float celsius = 10 * depth + 20;
  return celsius; 
}

float fahrenheit(float celsius)
{
  float fahrenheit = 1.8 * celsius + 32;
  return fahrenheit;
}

int main()
{
  float depth;
  printf("Enter depth: ");
  scanf("%f", &depth);
  printf("The temperature in %.2f is %.2f degree celsius and %.2f degree fahrenheit.\n", depth, celsius_at_depth(depth), fahrenheit(celsius_at_depth(depth)));
  return 0;
}