#include<stdio.h>
int main(){
    printf("Enter the sales amount :- ");
    float n;
    scanf("%f", &n);
    if(n<=500){
        printf("The commision is %f", (0.05)*n);
    }
    else if(n>500 & n<=2000){
        printf("The commision is %f", 35+(0.1)*n);
    }
    else if(n>2000 & n<=5000){
        printf("The commision is %f", 185+(0.12)*n);
    }
    else if(n>5000){
        printf("The commision is %f", (0.125)*n);
    }
    
}