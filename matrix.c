#include<stdio.h>
int main(){
    int a[10][10],r,c,i,j,rs,cs;
    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    for(i=0;i<r;i++){
        rs=0;
        for(j=0;j<c;j++) rs+=a[i][j];
        printf("Row %d=%d\n",i+1,rs);
    }

    for(j=0;j<c;j++){
        cs=0;
        for(i=0;i<r;i++) cs+=a[i][j];
        printf("Col%d=%d\n",j+1,cs);
    }
}