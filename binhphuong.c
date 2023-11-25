#include<stdio.h>
#include<math.h>

int main(){
	int a;
	scanf("%d",&a);
	while(a-->0){
		long long b;
		scanf("%lld",&b);
		printf("%lld\n",(long long)pow(b,2));
	}
	return 0;
}
