#include <stdio.h>
void greatest(int n[],int size);
int main()
{
   int size;
   printf("Enter size\n");
   scanf("%d",&size);
   int n[size];
   for(int i = 0; i < size; i ++)
   {
       printf("Enter element %d\t",i);
       scanf("%d",&n[i]);
   }
   greatest(n,size);
   

    return 0;
}
void greatest(int n[],int size)
{
    for(int i = 0; i < size-1;i++)
    {
        for(int j = 0; j < size-1;j++)
        {
            if(n[j] > n[j+1])
            {
                int k = n[j];
                n[j] = n[j+1];
                n[j+1] = k;
            }
        }
    }
    
    printf("Array is sorted\n");
    for(int i = 0 ; i < size;i++) printf("%d\n",n[i]);
}
