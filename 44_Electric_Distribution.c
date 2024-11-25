#include<stdio.h>
int main(){
    printf("Enter units consumed by consumer :-");
    float n;
    scanf("%f", &n);
    if(n>=0 & n<=200){
        printf("The bill to be paid is Rs %f ", 0.5*n);
    }
    else if(n>=201 & n<=400){
        printf("The bill to be paid is Rs %f ", 100+(0.65*(n-200)));
    }
    else if(n>=401 & n<=600){
        printf("The bill to be paid is Rs %f ", 230+(0.80*(n-400)));
    }
    else if(n>600){
        printf("The bill to be paid is Rs %f ", 425+(125*(n-600)));
    }


}