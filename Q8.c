#include <stdio.h>
void unique(int n[],int);

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
    unique(n,size);
    
    

    return 0;
}
void unique(int n[],int size)
{
    for(int i = 0; i < size-1;i++)
    {
        for(int j = 0; j < size-1;j++)
        {
            if(n[j] > n[j+1] )
            {
                int k = n[j];
                n[j] = n[j+1];
                n[j+1] = k;
            }
        }
    }
    
    for(int i = 0; i < size;i++) 
    {
        if(n[i] == n[i+1] ) i++;
        else printf("%d\n",n[i]);
    }
}
