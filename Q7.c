#include <stdio.h>
int duplicates(int n[],int size);
int main()
{
   int size,place, d;
   printf("Enter size\n");
   scanf("%d",&size);
 
   
   int n[size];
   for(int i = 0; i < size; i ++)
   {
       printf("Enter element %d\t",i);
       scanf("%d",&n[i]);
   }
   int g = duplicates(n,size);
   printf("no. od duplicates are %d",g);
   

    return 0;
}
int duplicates(int n[],int size)
{
    int k  = 0;
    for(int i = 0;i <size-1;i++)
    {
        for(int j = 0; j<size-1;j++)
        {
            if(n[j]>n[j+1])
            {
                int f = n[j];
                n[j] = n[j+1];
                n[j+1] = f;
            }
        }
    }
    
    for(int i = 0; i < size;i++)
    {
        if(n[i] == n[i+1])
        {
            k++;
        }
    }
    
    return k;
}
