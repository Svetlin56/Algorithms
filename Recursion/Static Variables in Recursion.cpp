#include <stdio.h>
//Static Variables in Recursion
int fun(int n)
{
 static int x=0;
 if(n>0)
 {
 x++;
 return fun(n-1)+x;
 }
 return 0;
}
int main() {
  int r;
  r=fun(5);
  printf("%d\n",r);
  r=fun(5);
  printf("%d\n",r);

  return 0;
}

//Global Variabels in Recursion 
int x=0;
int fun(int n)
{
 if(n>0)
 {
 x++;
 return fun(n-1)+x;
 }
 return 0;
}
int main() {
 int r;
 r=fun(5);
 printf("%d\n",r);
 r=fun(5);
 printf("%d\n",r);

 return 0;
}