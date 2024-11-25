#include<stdio.h>
int main(){
    printf("Enter the number:- ");
    int n;
    scanf("%d", &n);
    if(n<2){
        printf("Not a prime number");
    }
    else{
    for(int a=2; a<=n-1; a++){
        if(n%a==0){
            printf("composite Number ");
            return 0;
        }
        else{

        }
    }
    printf("Prime");
    }

}