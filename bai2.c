#include<stdio.h>
int main(){
    int mang[10]={2,6,1,8,0,5,6,3,7,9};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            int tmep = mang[j];
            if(mang[j]>mang[j +1])
            {
                mang[j] = mang[j+1];
                mang[j + 1] = tmep;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",mang[i]);
    }
    
    return 0;
}