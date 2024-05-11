#include <stdio.h>

int main(){
	int ant = 1, suc = 1, suc2 = 0, x;
	
	printf("\nFibonacci");
	printf("\n\nInsert the size of the sequence.\n");
	scanf("%d", &x);
	
		for (int i = 0; i < x; i++){
			printf("%d ", ant);
			suc2 = ant + suc;
			ant = suc;
			suc = suc2;
		}	
}
