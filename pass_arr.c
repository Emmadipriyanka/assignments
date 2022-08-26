#include<stdio.h>
void reverse_arr(int []);//reverse_arr function prototype whose parameter is array
void print_rev_arr(int []);//print_rev_arr function prototype whose parameter is array
#define len 6//macro as len whose value is 6
int main()
{
    int arr[len],i;//declaring arr with len and i as a integer 
    printf("enter array elements:");
    for(i=0;i<len;i++)//for loop for scanning the elements
    {
        scanf("%d",arr+i);
    }
    printf("array elements before reverse:");
    for(int i=0;i<len;i++)//for loop to print array elements before reversing
    {
        printf("%d \t",arr[i]);
    }
    reverse_arr(arr);//calling fun by passing array as a parameter 
    print_rev_arr(arr);//calling fun by passing array as a parameter
}
void reverse_arr(int x[])
{
    int temp,i;//declaring temp and i as a integer
    for(int i=0;i<len/2;i++)//for loop for reverse array elements which run only half-half of the length of the array
    {
        temp=x[i];
        x[i]=x[len-(i+1)];
        x[len-(i+1)]=temp;
    }
}
void print_rev_arr(int y[])
{
    printf("\narray elements after reverse :");
    for(int i=0;i<len;i++)//for loop to print array elements after reverse
    {
        printf("%d \t",y[i]);
    }
}

