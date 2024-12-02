#include<stdio.h>
int main(){
    int mang[5]={9,6,5,8,7};
     for (int i = 0; i < 5; i++)
    {
        printf("%d\t",mang[i]);
    }
    printf("\n");
    for (int i = 0 ; i < 5; i++)
    {
        int min = mang[i];
        for (int j = i + 1; j < 5; j++)
        {
            if (mang[j]<min)
            {
                min = mang[j];
                mang[j] = mang[i];
                mang[i] = min;
                
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",mang[i]);
    }
    
    return 0;
}