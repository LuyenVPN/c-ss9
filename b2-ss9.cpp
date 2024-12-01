#include<stdio.h>
int main() {
    int a[100];
    int n;
    printf("Nhap so phan tu muon nhap: ");
    scanf("%d", &n); 
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d la: ", i + 1);
        scanf("%d", &a[i]); 
    }
    printf("Phan tu cua mang la: ");
    for (int i = 0; i < n; i++) {
        printf(" %d ", a[i]); 
    }
    int so, vitri;
    printf("\nNhap phan tu muon sua: ");
    scanf("%d", &so);
    printf("Nhap vao vi tri muon sua: ");
    scanf("%d", &vitri);   
    if (vitri >= 1 && vitri <= n) {
        a[vitri - 1] = so;
    } else {
        printf("Vi tri khong hop le.\n");
        return 1;
    }
    printf("Mang sau khi sua: ");
    for (int i = 0; i < n; i++) {
        printf(" %d ", a[i]); 
    }

    return 0;
}

