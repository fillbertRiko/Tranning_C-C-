#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    //khai bao biens
    int n;
    
    //Nhap vao do dai mang 
    printf("Chuong trinh tinh tong doi mot so trong mang");
    printf("\n\nNhap vao gia tri do dai mang n: ");
    scanf("%d",&n);

    int a[n];
    if(a == NULL)
    {
        printf("\nKo du bo nho cap phat");
    }
    else
    {
        printf("Nhap cac phan tu trong day\n");
        for(int i =0;i<n;i++)
        {
            scanf("a%d = ",&a[i]);
        }
        printf("Cac phan tu trong day luc dau la\n");
        for(int i=0;i<n;i++) printf("%d ",a[i]);
        
    }
    return 0;
}
