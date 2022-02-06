#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter the number\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
   float a = n/2;
  float b;
  b = 0.5 * (a + (n/a));
  while( fabs(a - b) > 0.000001)
  {
     a = b;
    b = 0.5 * (a + (n/a));
  }
  return b;
}
void output(float n, float sqrt_result)
{
  printf("The square root is %f",sqrt_result);
}
float main()
{
  float x,y;
  x=input();
  y=my_sqrt(x);
  output(x,y);
  return 0;
}