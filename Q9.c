// Online C compiler to run C program online
#include <stdio.h>
void merge(int n[],int k[],int);

int main() {
    int size;
    printf("Enter size\n");
    scanf("%d",&size);
    int n[size];int k[size];
    printf("starting n\n");
    for(int i = 0; i < size;i++)
    {
        printf("enter element for index %d\t",i);
        scanf("%d",&n[i]);
    }
    printf("starting k\n");
    for(int i = 0; i < size;i++)
    {
        printf("enter element for index %d\t",i);
        scanf("%d",&k[i]);
    }
    merge(n,k,size);
    
    

    return 0;
}
void merge(int n[],int k[],int size)
{
    int temp[size*2];
    for(int i = 0; i < size-1;i++)
    {
        for(int j = 0; j < size-1;j++)
        {
            if(n[j] < n[j+1] )
            {
                int k = n[j];
                n[j] = n[j+1];
                n[j+1] = k;
            }
        }
    }
    for(int i = 0; i < size-1;i++)
    {
        for(int j = 0; j < size-1;j++)
        {
            if(k[j] < k[j+1] )
            {
                int f = k[j];
                k[j] = k[j+1];
                k[j+1] = f;
            }
        }
    }
    
    

    for(int i = 0;i < size;i++)temp[i]=n[i];
    int f = 0;
    for(int i = size;i<size*2;i++)
    {
       temp[i] = k[f];
       f++;
    }
    for(int i = 0; i<size*2;i++) printf("%d\n",temp[i]);
    
    
}
