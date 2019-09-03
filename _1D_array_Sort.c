#include <stdio.h>
void printa(int a[],int b);
void assend(int a[]);
void dessend(int a[]);

int main()
{
    int a[5]={10,18,45,14,9};
    char b;
    printf("Enter any of the following\nAssending = A or a\nDessending = D or d \n");
    scanf("%c",&b);
    if(b=='A'||b=='a')
    {
        assend(a);
    }
    else if(b=='D'||b=='d')
    {
        dessend(a);
    }
    else
    {
        printf("Input is not valid");
    }
    return 0;
}

void assend(int a[])
{
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\nassending order= ");
    printa(a,5);
    
}

void dessend(int a[])
{
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\ndessending order= ");
    printa(a,5);
   
}

void printa(int a[],int b)
{
    for(int k=0;k<b;k++)
    {
        printf("%d ",a[k]);
    }
}
