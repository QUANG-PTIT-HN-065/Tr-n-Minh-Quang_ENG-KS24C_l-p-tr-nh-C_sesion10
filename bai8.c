#include<stdio.h>
int main(){
    int x,y=0;
    do
    {
        printf("hay nhap vao so hang <lon hon 0>: ");
        scanf("%d",&x);
        printf("hay nhap vao so cot <lon hon 0>: ");
        scanf("%d",&y);
    } while (x < 1 || y < 1);
    int arr[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("hay nhap vao so hang %d cot %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }  
    }
    for (int j = 0; j < y; j++)
    {
        for (int i = 0; i < x - 1; i++)
        {
            for (int k = i + 1; k < x; k++)
            {
                if (arr[i][j] > arr[k][j])
                {
                    int temp = arr[i][j];
                    arr[i][j] = arr[k][j];
                    arr[k][j] = temp;
                }
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
           printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}