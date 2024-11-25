#include<stdio.h>
int main(){
    printf("Start Entering NUmbers:- ");
    int x=0;
    for(int a=1; a>=1; a++){
        int c;
        scanf("%d", &c);
        if(c<0){
            break;
        }
        else{
            x=x+c;
        }
    }
    printf("The sum of the positive numbers is %d", x);
}