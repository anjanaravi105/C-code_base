#include <stdio.h>
#include <stdlib.h>

int main(){
    int limit=10,i,j;

    for(i=limit;i>0;i--){
       for(j=0;j<i;j++){
          printf("* ");
       }
       printf("\n");
}
return 0;
}