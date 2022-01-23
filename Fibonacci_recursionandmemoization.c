#include<stdio.h>
int F[500];
int Fibonacci_randm(int n){
    if (n<=1)
      {F[n]=1;
      return 1;}

   else{
        if (F[n]!= 0)
         {return F[n];
         }
        else {
      F[n]= Fibonacci_randm(n-1)+ Fibonacci_randm(n-2);
      return F[n];
      }
  }
}
int main(){  
    for (int i=0; i<100; i++){
        printf("%d ", Fibonacci_randm(i));
    }
    return 0;
}


