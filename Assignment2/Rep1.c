void sumOfDigits(int n)
{
  int sum = 0;
  while (n > 10) {
    sum = sum + n;
    n = n%10;
  }
  printf("%d", sum);
}
