#include <bits/stdc++.h>

int main(){
	unsigned long long a, b, dif;
	
	while(scanf("%llu %llu", &a, &b) != EOF){
		if(b>a){
			if(b <0 && a <0){
				b*=-1;
				a*=-1;
				dif = (a-b);
			} else if(a<0){
				b*=-1;
				dif = (b+a)*-1;
			} else 
				dif = (b-a);
		} else {
			if(b <0 && a <0){
				b*=-1;
				a*=-1;
				dif = (b-a);
			} else if(b<0){
				a*=-1;
				dif = (a+b)*-1;
			} else{
				dif = (a-b);
			}
		}
		printf("%llu\n", dif);
	}
	return 0;
}