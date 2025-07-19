#include <stdio.h>
int main(){
    int n, X=0;
    char s[4];
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s",s);
        if(s[1] == '+')
            X++;
        else
            X--;
    }
    printf("%d",X);
return 0;
}
