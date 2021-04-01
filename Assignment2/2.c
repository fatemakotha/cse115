#include <stdio.h>

int main()
{
  printf("Enter your weight (in pound): ");;
  float wt_lb;
  scanf("%f", &wt_lb);
  
  printf("Enter your height (in inches): ");;
  float ht_in;
  scanf("%f", &ht_in);

  float bmi = 703 * wt_lb / (ht_in * ht_in);

  printf("Your BMI is %f.\n", bmi);

  if (bmi < 18.5) {
    printf("And you're underweight.\n");
  }
  else if (bmi < 24.9) {
    printf("And you're normal.\n");
  }
  else if (bmi < 29.9) {
    printf("And you're overweight.\n");
  }
  else
    printf("And you're obese.\n");
}