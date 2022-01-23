#include<stdio.h>

int main()
{ 
  int f1=0;
  int f2=1;
  int f3;
  printf("%d %d ", f1,f2);
  int i=0;
  for (int i;i<100;i++)
     {f3=(f2+f1);
     printf("%d ", f3);
      f1=f2;
      f2=f3;
     }    
return 0;
}


 
