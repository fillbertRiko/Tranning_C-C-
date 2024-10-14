//De: Nhap vao day so nguyen co n phan tu. Chen themphan tu x vao cuoi dayy. Yeu cau su dung mang dong chua day so
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    //khai bao bien
    int n,i,j,x;
    int *a;

    //Nhap vao so luong so
    printf("Chuong trinh nhap vao day so nguyen, chen them phan tu x vao cuoi day.\nSu dung mang dong de chua day so do\n\n");
    printf("Nhap vao so luong so trong day: ");
    scanf("%d",&n);

    //tao mang dong a co kich thuoc n
    a = (int*)calloc(n, sizeof(int));

    //nhap vao day so
    printf("Nhap vao gia tri cac so trong day: \n");
    for(i=0;i<n-1;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    
    //Hien thi day so ban dau
    printf("\nDay so ban dau la: \n");
    for(i=0;i<n;i++) printf("%d ",a[i]);

    //chen them so vao day so
    printf("\nNhap gia tri x cua so can chen: ");
    scanf("%d",&x);

    
    for(i=0;i>n;i--) a[i+1]=x;

    //Day sosau khi chen them la
    printf("\nDay so sau khi chen them phan tu x vao cuoi la: ");
    for(i=0;i<n;i++) printf("%d ",a[i]);

    //giai phong a
    free(a);

    cout<<endl;
    return 0;
}