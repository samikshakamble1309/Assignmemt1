
#include <stdio.h>
int Fibonacci_recursion(int n){

     if(n== 0) {
        return 0;
     } else if(n == 1) { 
        return 1;
     } else {
     return (Fibonacci_recursion(n-1) + Fibonacci_recursion(n-2));
     } 
}
 
int main()
{ for(int i = 0; i < 100; i++) 
       printf(" %d ",Fibonacci_recursion(i));
   }
 