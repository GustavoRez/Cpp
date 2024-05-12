#include <stdio.h>

int main(){
	int num, big, low, count = 0, aver = 0;
	
	for (int i = 1; i <= 10; i++){
	    
		printf("Insert your %dº grade:\n", i);
		scanf("%d", &num);
		
		count = count + num;
		
		if (i == 1){
			big = num;
			low = num;
		}
		
		if(num > big) big = num;
		else if(num < low) low = num;
	}

	aver = count / 10;
	printf("Bigger %d\nLower %d\nAverage %d", big, low, aver);
}
