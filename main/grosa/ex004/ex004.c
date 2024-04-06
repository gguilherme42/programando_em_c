#include <stdlib.h>


float my_sum(float n1, float n2){
	return n1 + n2;
}

float function my_subtraction(float n1, float n2){
	return n1 - n2;
}

float my_multiplication(float n1, float n2){
	return n1 * n2;
}


float my_division(float n1, float n2){
	return n1 / n2;
}


int main(){
	float number1, number2;
	int user_choice;	

	printf("-------------- MENU -----------------\n");
	printf("1 - ADIÇÃO\n");
	printf("2 - SUBTRAÇÃO\n");
	printf("3 - MULTIPLICAÇÃO\n");
	printf("4 - DIVISÃO\n");
	printf("0 - SAIR \n");
	scanf("%d", &user_choice);

	printf("Digite o primeiro número: \n");
	scanf("%f", &number1);
	printf("Digite o segundo número: \n");
	scanf("%f", &number2);
	printf("-------------------------------------\n");

	if (user_choice > 0 && user_choice < 5) {
		if (user_choice == 1) {
			printf("A soma de %f e %f é %f", number1, number2, my_sum(number1, number2));
		}
		else if (user_choice == 2) {
		
			printf("A subtração de %f e %f é %f", number1, number2, my_subtraction(number1, number2));
		}
		else if (user_choice == 3) {
			printf("A multiplicação de %f e %f é %f", number1, number2, my_multiplication(number1, number2));
		}
		else if (user_choice == 4) {
		
			printf("A divisão de %f e %f é %f", number1, number2, my_division(number1, number2));
		}
	} else {
	
		printf("Saindo.....");
	}

	return 0;
}
