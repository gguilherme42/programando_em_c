#include <stdio.h>


float max_number(float n1, float n2, float n3){
	if (n1 > n2 && n1 > n3) {return n1;}
	if (n2 > n1 && n2 > n3) {return n2;}
	return 3;

}

float minor_number(float n1, float n2, float n3){
	if (n1 < n2 && n1  < n3) {return n1;}
	if (n2 < n1 && n2 < n3) {return n2;}
	return n3;
}




int main(){
	float number1, number2, number3;

	printf("Número 1: \n");
	scanf("%f", &number1);
	printf("Número 2: \n");
	scanf("%f", &number2);
	printf("Número 3: \n");
	scanf("%f", &number3);
	
	printf("Maior: %f\n", max_number(number1, number2, number3));
	printf("Menor: %f\n", minor_number(number1, number2, number3));
	return 0;
}
