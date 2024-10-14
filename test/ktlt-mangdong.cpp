/*Chuong trinh nhap vao mot so nguyen. Tim vi tri phan tu co gia tri lon nhat. Y/c su dung mang dong de chua day so
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    //khai bao bien
    int n,i,max,vtmax;
    int *a;

    //nhap vao so luong so
    printf("Chuong trinh tim vi tri phan tu co gia tri lon nhat\n\n");
    printf("Nhap vao so luong so: ");
    scanf("%d",&n);

    //tao mang dong co kich thuoc n
    a = (int*)calloc(n,sizeof(int));

    //nhap day so mang dong 
    printf("Nhap vao day so:\n");
    for(i=0;i<n;i++)
    {
        printf("Nhap so thu %d: ",i+1);
        scanf("%d",&a[i]);
    }

    //Dua ra day so 
    printf("\nDay so da nhap la:\n");
    for(i=0;i<n;i++) printf("%d ",a[i]);

    //tim vi tri cua so lon nhat
    max=a[0];
    vtmax = 0;
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
            vtmax = 1;
        }
    }

    //Dua ra ket qua
    printf("\n\nVi tri cua so lon nhat la: %d",vtmax+1);

    //Huy mang dong 
    free(a);

    cout<<endl;
    return 0;
}