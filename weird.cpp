#include <bits/stdc++.h>

int main(){
	long long int t,y,i,j;
	scanf("%lld",&t);
	for(i=0;i<t;i++){
		scanf("%lld",&y);
		long long int maxA = sqrt(y-1);
		long long int a=0,count=0;
		for(j=maxA;j>=1;j--){
			if((y-(j*j)) > 700){
				a=j;
				break;
			}
			count+=y-(j*j);
		}
		if(a!=0){
			count+=700*(a);
		}
		printf("lld\n",count);
	}
	return 0;
}