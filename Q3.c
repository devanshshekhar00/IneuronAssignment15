#include <stdio.h>
void greatestElement(int [],int);
int main() {
    int length;
    printf("Enter array length\t");
    scanf("%d",&length);
    int n[length];
    printf("Enter elements\n");
    for(int i = 0; i < length;i++)
    {
        printf("Enter element\t");
        scanf("%d",&n[i]);
       
    }
    greatestElement(n,length);
   

    return 0;
}
void greatestElement(int n [],int k)
{
    for(int i = 0; i < k-1;i++)
    {
        for(int j = 0; j < k-1 ; j++)
        {
            if(n[j] > n[j+1])
            {
                int q = n[j];
                n[j] = n[j+1];
                n[j+1] = q;
            }
        }
    }
    
   printf("Sorted array\n");
   for(int i = 0; i < k;i++)
    {
        printf("%d\n",n[i]);
    }
   
}
