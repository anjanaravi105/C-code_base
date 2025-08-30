#include <stdio.h>
#include <stdlib.h>

int main(){
    int limit,i,values[1000],sum=0;
    printf("Enter limit");
    scanf("%d",&limit);
    printf("Enter values");
    for(i=0;i<limit;i++){
        scanf("%d",&values[i]);
    }

    for(i=0;i<limit;i++){
        sum=sum+values[i];
    }

    printf("SUM = %d",sum);
    return 0;
}