#include<stdio.h>
int main(){
    int n;
    int arr[5]={9,2,4,7,1};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        int max = arr[i];
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j]>max)
            {
                max = arr[j];
                arr[j] = arr[i];
                arr[i] = max;
            }
            
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("hay nhap vao 1 so bat ky: ");
    scanf("%d",&n);
    int vitri=0;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i] == n )
        {
            printf("%d co trong mang va o vi tri %d\n",n,i + 1);
            vitri++;
        }
    }
    if (vitri == 0)
    {
        printf("phan tu %d ko co trong mang",n);
    }
    return 0;
}