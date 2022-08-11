#include<stdio.h>
int main(){
	int n,i,a[10];
	printf("enter n0.of arrays\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	trouble_sort(a,n);
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
int trouble_sort(int a[],int n){
	int even[10],odd[10],i,k=0,l=0;
	for(i=0;i<n;i++){
		if(i%2==0){
			even[k]=a[i];
			k++;
		}
		else{
			odd[l]=a[i];
			l++;
		}
	}
	for(i=0;i<k;i++){
		printf("%d",even[i]);
	}
	printf("\n");
	sort(even,k);
	for(i=0;i<l;i++){
		printf("%d",odd[i]);
	}
	printf("\n");
	
	sort(odd,l);
	merge(even,odd,k,l,a,n);
}
sort(int b[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(b[j]>b[j+1]){
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	printf("after sorting\n");
	for(i=0;i<n;i++){
		printf("%d",b[i]);
	}
	printf("\n");
}
int merge(int even[],int odd[],int k,int l,int a[],int n){
	int x=0,y=0,i=-1;
	while(x<k && y<l){
		if(even[x]>odd[y]){
			a[++i]=odd[y];
			a[++i]=even[x];
			x++;
			y++;
		}
		else{
			a[++i]=even[x];
			a[++i]=odd[y];
			x++;
			y++;
		}
	}
	while(x<k){
		a[++i]=even[x];
		x++;
	}
	if(y<l){
		a[++i]=odd[y];
		y++;
	}
}
