#include<stdio.h>
int main(){
    printf("Enter the no of terms:- ");
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("%d \n", i*i);
    }
}
