#include <stdio.h>

int soma(int n){
	
	if(n <= 1){
		return(1);
	}
	
	return n + soma(n-1);
}

int main(){
	
	int num;
	
	scanf("%d", &num);
	
	printf("%d", soma(num));
	
	return 0;
}
