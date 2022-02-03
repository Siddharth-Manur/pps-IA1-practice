#include<stdio.h>
int input()
{
  int a;
  printf("Enter the number\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a, int b, int c)
{
  if(a>b && a>c)
   return a;
  else if(b>c)
   return b;
  else 
   return c;  
}
void output(int a, int b, int c, int largest)
{
  largest = cmp(a,b,c);
  printf("The greatest number among %d,%d and %d is %d",a,b,c,largest);
}
int main()
{
  int x,y,z,lar;
  x=input();
  y=input();
  z=input();
  cmp(x,y,z);
  lar = cmp(x,y,z);
  output(x,y,z,lar);
  return 0;
}