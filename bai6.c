#include<stdio.h>
int main(){
    int mang[5]={1,4,3,4,5};
    int vitri,a = 0;
    printf("hay nhap vao 1 so bat ky: ");
    scanf("%d",&a);
    for (int i = 0; i < 5; i++)
    {
        if(mang[i] == a )
        {
          printf("phan tu %d co trong mang va o vi tri %d\n",a,i +1);
          vitri++;
        }
    }
    if (vitri == 0)
    {
        printf("%d ko co trong mang",vitri);
    }
    
    return 0;
}