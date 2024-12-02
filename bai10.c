#include<stdio.h>
int main(){
    int x,y=0;
    do
    {
        printf("hay nhap vao so hang <lon hon 0>: ");
        scanf("%d",&x);
        printf("hay nhap vao so cot <hang va cot phai bang nhau>: ");
        scanf("%d",&y);
    } while (x != y || x < 1);
    int arr[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("hay nhap vao so hang %d cot %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }  
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < x ; j++)
        {
            if (arr[i][x - 1 - i]>arr[j][x - 1 - j])
            {
                int temp = arr[i][x - 1 -i];
                arr[i][x - 1 - i] = arr[j][x -1 - j];
                arr[j][x - 1 - j] = temp;
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