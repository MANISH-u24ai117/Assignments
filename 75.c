#include <stdio.h>
#include <conio.h>
#include <limits.h>
int main()
{
    int r,maxsubmarks=INT_MIN,maxmarks=INT_MIN,maxmarksroll,totalmarks,temp;
    printf("Enter number of students: "); //Input of number of students
    scanf("%d", &r);
    int arr[r][4];
    printf("Roll no.  Subject1 marks  Subject2 marks  Subject3 marks\n");
    for(int i=0; i<r; i++) //Input of student data
    {
        printf("Enter data for student %d: ", i+1);
        for(int j=0; j<4; j++)
        {
        scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for(int j=1; j<4; j++)
    {
        maxsubmarks=INT_MIN;
        for(int i=0; i<r; i++)
        {
            if(arr[i][j]>maxsubmarks)
            {
                maxsubmarks=arr[i][j];
                temp=arr[i][0];
            }
        }
        printf("Maximum marks in subject %d is %d and scored by roll no. %d\n",j,maxsubmarks,temp);
    }
    printf("\n");
    for(int i=0; i<r; i++)
    {
        totalmarks=0;
        for(int j=1; j<4; j++)
        {
            totalmarks += arr[i][j];
            if(totalmarks>maxmarks)
            {
                maxmarks=totalmarks;
                maxmarksroll=arr[i][0];
            }
            if(j==1)
            {
                temp=arr[i][j-1];
            }
        }
        printf("Total marks of roll no. %d is %d\n",temp,totalmarks);
    }
    printf("\nMaximum marks obtained are %d and scored by roll no. %d",maxmarks,maxmarksroll);
    getch();
    return 0;
}