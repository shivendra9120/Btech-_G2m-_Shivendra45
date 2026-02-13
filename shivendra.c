#include <stdio.h>
int main(){
    int a,b;
    printf("Enter rwo numbers:");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("Greatest number is %d",a);
    }
    else if (b>a){
        printf("Greatest number is %d",b);
    }
    else{
        printf("Both numbers sre equal");
    }
       return 0;
    
    }
