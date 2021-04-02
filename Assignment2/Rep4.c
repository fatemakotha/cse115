// while

int getSeriesSum(int n)
{
  int x=1, i=2, sum=0;

  while(i<=n)
  {
    if (x%2==0)
    {
      sum = sum + i;
    } 
    else
    {
      sum = sum - i;
    }
    x++;
    i=i+2;
  }
  return sum;
}

// for

int getSeriesSum(int n)
{
  int x=1, sum=0;

  for(int i=2; i<=n; i=i+2)
  {
    if (x%2==0)
    {
      sum = sum + i;
    } 
    else
    {
      sum = sum - i;
    }
    x++;
  }
  return sum;
}