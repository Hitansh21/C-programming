#include <stdio.h>
void main(){
    int n,limit;
    printf("Enter the limit till you want to check the natural numbers = ");
    scanf("%d",&limit);
    for(n=limit;n;n--){
        printf("Natural Numbers %d\n",n);
    }
}