
#include <stdio.h>
void frequency(int n[],int);
int main() {
    int size;
    printf("Enter size\n");
    scanf("%d",&size);
    int n[size];
    
    for(int i = 0; i < size;i++)
    {
        printf("enter element for index %d\t",i);
        scanf("%d",&n[i]);
    }
    frequency(n,size);
    
    

    return 0;
}
void frequency(int n[],int size)
{
    for(int i=0;i< size;i++)
    {
        int k = 0;
        for(int j = 0; j < size;j++)
        {
            
            if(n[i] == n[j] && j>0) k++;
            
        }
        printf("Frequency element of %d is %d\n",i,k);
    }
}
