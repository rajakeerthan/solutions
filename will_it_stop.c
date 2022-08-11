//will it stop
#include<stdio.h>
int main(){
	int n;
	printf("enter n");
	scanf("%d",&n);
	while(n>1){
		if(n%2==0)
			n=n/2;
		else
			break;
	}
	if(n==1){
		printf("it will stop\n");
	}
	else{
		printf("no it wont stop\n");
	}
	return 0;
}
