#include <stdio.h>
#include <stdlib.h>

int main() {
    int number,i,sum=0;
    printf("Enter a number");
    scanf("%d",&number);
    
    for(i=1;i<=number;i++){
        if(i%2!=0){
        sum=sum+i;
      }
    }
    printf("Result=%d",sum);

    return 0;
 }
