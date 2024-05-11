#include <stdio.h>
#include <math.h>

int main(){
	
	float a, b, c, d, r1, r2;
	
	printf("\n  Bhaskara!\n\n");
	printf(" Insert the letters:\nA: ");
	scanf("%f", &a);
	printf("B: ");
	scanf("%f", &b);
	printf("C: ");
	scanf("%f", &c);
	
	d = (pow (b, 2)) - (4 * a * c);
	
	r1 = (-b + (sqrt(d))) / (2 * a);
	r2 = (-b - (sqrt(d))) / (2 * a);
	
	printf("The anwser made  with '+' is: %.2f\nThe anwser made with '-' is: %.2f\n\nThis one was easy!\n", r1, r2);
	
}
