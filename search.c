#include<stdio.h>
int  frequency(char *cptr, char *search,int);
int main()
{
    char carr[10];
    int len=sizeof(carr)/sizeof(char);
   puts("enter the string");
i    for(int i=0;i<10;i++)
    scanf("%c",&carr[i]);
    char search;
    puts("enter the character ");
    scanf("%c",&search);
    int holder=frequency(carr,&search,len);

    if(holder!=0)
    {
        printf("%c has appreared %d times ",search,holder);
    }
}
int  frequency(char *cptr, char *search,int len)
{
    int count=0;
      for(int i=0;i<len;i++)
    {
        if(*search==*cptr++)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("element not found ");
    }
    return count;
}

