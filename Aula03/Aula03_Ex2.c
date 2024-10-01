#include <stdio.h>

int somar(int m, int n){
	
	if(n == m){
		return n;
	}
	
	if(n < m){
		return m + somar(n , m-1);
	}else{
		return n + somar(m , n-1);
	}
	
}

int main(){
	
	int m,n;
	
	scanf("%d %d", &m, &n);
	
	printf("%d", somar(m,n));
	
	return 0;
}
