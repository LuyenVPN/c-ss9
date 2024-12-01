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
    int vitri;
	printf("\nnhap vao vi tri muon xoa: ");
	scanf("%d", &vitri);
	for(int i=vitri-1;i<n;i++){
     a[i]=a[i+1];
    }
	    n--;
    printf("mang sau khi xoa la: ");
    for(int i=0; i<n;i++){
    	printf("%d ",a[i]);
	}
	return 0;
}
