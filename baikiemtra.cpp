#include<stdio.h>
int main(){
	int arr[10];
	printf("nhap 10 so nguyen\n");
	for(int i=0;i<10;i++){
		printf("a[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("day so khi duoc in nguoc lai la:\n");
	for(int i=9;i>=0;i--){
		printf("%d\n",arr[i]);
	}
}

