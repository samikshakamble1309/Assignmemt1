#include <stdio.h> 

int main(){
    int n; 
    scanf("%d", &n) ;
    int f1,f2,i;
    f1 = 0; 
    f2 = 1;
    for (i=0; i<n; i++){
        printf("%d ", f2);
        int f = f2;
        f2 = f1+f2;
        f1 = f; 
        
    }
    return 0;
}
