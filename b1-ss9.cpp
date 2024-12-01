#include<stdio.h>
int main(){
	int a[100];
	int n; 
	printf("nhap so phan tu muon nhap: ");
	scanf("%d", &n); 
	for (int i=0 ; i< n ; i++){
		printf("phan tu thu %d la: ", i+1);
		scanf("%d", &a[i]); 
	} 
	printf("phan tu cua mang la: ");
		for (int i=0 ; i< n ; i++){
    	printf(" %d ", a[i]); 
    }
	int so, vitri;
	printf("\nnhap phan tu muon them: ");
	scanf("%d", &so);
	printf("nhap vao vi tri muon them: ");
	scanf("%d", &vitri);
	if (vitri < 1 || vitri > n + 1) {
        printf("khong hop le!\n");
        return 1; 
    }
	 for (int i = n; i >= vitri; i--) {
        a[i] = a[i - 1];
    }
    a[vitri - 1] = so;
    n++;
    printf("Mang sau khi them la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
	
	
	
	return 0; 
} 
