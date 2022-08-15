#include <stdio.h>
int adjacent(int n[],int size);
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
  int adjacentno = adjacent(n,size);
  printf("First adjacent %d",adjacentno);
   

    return 0;
}
int adjacent(int n[],int size)
{
    int k;
    for(int i = 0;i < size;i++)
    {
        if(n[i] == n[i+1])
        {
            k = n[i];
            break;
        }
    }
    return k;
}
