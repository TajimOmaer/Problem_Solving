#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int n = 5, m = 5;
    int Total_moves, arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
            
            if(arr[i][j] == 1){
                Total_moves = abs(i-2) + abs(j-2);
            }
        }
    }
    printf("%d", Total_moves);  
return 0;
}
