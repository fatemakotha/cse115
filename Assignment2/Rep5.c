int getSeriesSum(int a, int n)
{
  int sum=0, i=1, dividend=1;

  while(i<=n)
  {
    for(int j=1; j<=i; j++)
    {
      dividend = dividend * a;
    }
    sum = sum + (i / dividend);
    i++;
  }
  return sum;
}