#include<stdio.h>
int main(){
    int mang[5]={9,6,5,8,7};
     for (int i = 0; i < 5; i++)
    {
        printf("%d\t",mang[i]);
    }
    printf("\n");
    for (int i = 1; i < 5; i++)
    {
        int key = mang[i];
        int j = i - 1;
        while (j >=0 && key<mang[j])
        {
            mang[j+1] = mang[j];
            j = j - 1;
        }
        mang[j + 1] = key;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",mang[i]);
    }
    
    return 0;
}