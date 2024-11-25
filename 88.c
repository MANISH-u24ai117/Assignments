#include<stdio.h>
int main(){
    int arr_1[] = {1,2,3,4,5};
    int arr_2[5];
    int* ptr_1 = arr_1;
    int* ptr_2 = arr_2;
    for(int i=0;i<5;i++){
        *(ptr_2 + i) = *(ptr_1 + i);
    }
    printf("Array after copying : ");
    for(int i=0;i<5;i++){
        printf("%d ",arr_2[i]);
    }
    return 0;
}
