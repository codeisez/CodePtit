#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	while(a-->0){
		int b;
		scanf("%d",&b);
		printf("%.15f\n",(double)1/b);
	}
	return 0;
}
