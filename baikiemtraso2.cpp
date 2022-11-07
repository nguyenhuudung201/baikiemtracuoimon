#include<stdio.h>
int travemin(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}
int main(){
	int n;
	printf("nhap so phan tu trong mang:");
	scanf("%d",&n);
	int arr[n];
	for(int i;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int a=travemin(arr,n);
	printf("so tra ve la:%d",a);
}
