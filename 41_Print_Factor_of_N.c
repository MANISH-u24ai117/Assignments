#include<stdio.h>
int main(){
    printf("Enter the number :- ");
    int n;
    scanf("%d", &n);
    for(int a=1; a<=n-1; a++){
        if(n%a==0){
            printf("%d,",a);
        }
        else{

        }
    }
    printf("%d.", n);
}