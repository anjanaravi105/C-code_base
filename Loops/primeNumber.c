#include<stdio.h>
#include<stdlib.h>

int main() {
    int n,i,flag=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("PRIME NUMBER");
    }else{
        printf("NOT A PRIME NUMBER");
    }
    return 0;
}