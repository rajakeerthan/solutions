#include<stdio.h>
#include<stdlib.h>
int a[10];
int main(){
	int n,i;
	printf("enter no.of elements in the array\n");
	scanf("%d",&n);
	printf("enter elements in the array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	sort(n);
	return 0;
}
int sort(int n){
	int i,j,cost=0;
	for(i=0;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		cost=cost+min-i+1;
		rev(i,min,n);
	
	}
	printf("the array after reverse sort is\n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("the total cost is %d\n",cost);
}
int rev(int j,int n,int x){
	int b[10],m=0;
	int k,i;
	k=n-j;
	for(i=0;i<=k;i++){
		b[i]=a[n];
		n--;
	}
	for(i=0;i<=k;i++){
		a[j]=b[i];
		j++;
	}
	printf("the array %d th sort is\t",m);
	for(i=0;i<x;i++){
		printf("%d  ",a[i]);
	}
	printf("cost=%d\n",k+1);
	m++;
}
