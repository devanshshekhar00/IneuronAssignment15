#include <stdio.h>
int greatestElement(int [],int);
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
    int k = greatestElement(n,length);
    printf("Greatest element %d",k);
    

    return 0;
}
int greatestElement(int n [],int k)
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
    
    return n[0];
}
