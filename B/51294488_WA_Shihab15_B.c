#include<stdio.h>

int main(){

    int n;
    
    scanf("%d",&n);
    
    if(n>=1 && n<=500){
        if(n%2!=0){
            printf("YES");
        }else{
            printf("NO");
        }
    }else{
        return;
    }


return 0;
}
