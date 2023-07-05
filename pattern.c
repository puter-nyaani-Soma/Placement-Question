#include <stdio.h>
int main(){
    int n=15,i,j,k=0;
    // scanf("%d",&n);
    // printf("%*d\n",n+1,0);
    // for(i=n;i>0;i--){
    //    for(k=0;k<i-1;k++){
    //     printf(" ");
    //    }
    //     for(j=i;j<=n;j++){
    //         printf("%d",j);
    //     }
    //     printf("0");
    //     for(j=i;j<=n;j++){
    //         printf("%d",j);
    //     }
    //     printf("\n");


    // }
    for(i=0;i<=n/2-1;i++){
        printf("%*s",n-i,"");
        for(j=0;j<i;j++){
             printf(" %d ",k);
            //printf(" %d ",k);
            k++;

    }
    printf("\n");
}
    for(i=n/2;i>=0;i--){
        printf("%*s",n-i,"");
        for(j=0;j<i;j++){
          printf(" %d ",k);
            k++;

    }
    printf("\n");
}
}