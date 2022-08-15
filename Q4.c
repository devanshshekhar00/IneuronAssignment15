#include <stdio.h>
void greatest(int n[],int size,int place,int d);
int main()
{
   int size,place, d;
   printf("Enter size\n");
   scanf("%d",&size);
   printf("Enter place\n");
   scanf("%d",&place);
   printf("Enter direction, 0 for left and 1 for right\n");
   scanf("%d",&d);
   
   int n[size];
   for(int i = 0; i < size; i ++)
   {
       printf("Enter element %d\t",i);
       scanf("%d",&n[i]);
   }
   greatest(n,size,place,d);
   

    return 0;
}
void greatest(int n[],int size,int place,int d)
{
    if(d == 0)
    {
     int temp[size];
    for(int i = 0; i < size-place;i++)
    {
        temp[i] = n[i+place];
    }
    for(int j = 0; j < place;j++)
    {
            temp[size-place + j] = n[j];
    }
    for(int i = 0; i < size; i++) n[i] = temp[i];
    
    
    printf("Array is sorted\n");
    for(int i = 0 ; i < size;i++) printf("%d\n",n[i]);
    }
    else if(d == 1){
      int temp[size];
      for(int i = 0; i < place;i++)
      {
          int k = size - place;
          temp[i] = n [i+1+place];
      }
      for(int i = place; i < size;i++)
      {
          temp[i] =n[i-place];
      }
       //for(int i = 0; i < size; i++) n[i] = temp[i];
    
    
      printf("Array is sorted\n");
      for(int i = 0 ; i < size;i++) printf("%d\n",temp[i]);
    }
    
}
