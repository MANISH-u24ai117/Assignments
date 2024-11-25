#include<stdio.h>
int main(){
    printf("Enter the no of terms:- ");
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("%d \n", 2*i-1);
    }
}