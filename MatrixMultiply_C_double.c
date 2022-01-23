#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
    int n; 
    scanf("%d", &n); 
    int i,j,k;

    double A[n][n]; 
    double B[n][n]; 
    
    for (int i=0; i<n; i++){
        for (int j= 0; j<n; j++){
            A[i][j] = rand();  
            B[i][j] = rand();
        }
    }

    double C[n][n];
    for ( i = 0; i < n; i++) {
      for (j = 0; j <n; j++) {
         C[i][j] = 0;
      }
   }
    for ( i=0; i<n; i++){
        for ( j=0; j<n; j++){
            for (k=0; k<n; k++){
                C[i][j] += A[i][k] * B[k][j];
            
            }
        }
    }

     for ( i=0 ;i<n; i++){
        for (j=0; j<n; j++){
            if (j != n-1){
                printf("%d ", C[i][j]);
            }  
            else{
                printf("%d\n", C[i][j]);
            }
        }
    }


    return 0; 
}
 