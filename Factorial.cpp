#include<stdio.h>

int main(){
	
	int x, y = 1;
	
	printf("Insert a number: ");
	scanf("%d", &x);
	
	for (int i = 1; i <= x; i++){
		y = y * i;
		printf("%d ", y);
		
	}
	printf("\nThe factorial of %d is: %d", x, y);
}
