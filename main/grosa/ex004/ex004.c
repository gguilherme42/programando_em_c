#include <stdio.h>


float my_sum(float n1, float n2){
	return n1 + n2;
}

float my_subtraction(float n1, float n2){
	return n1 - n2;
}

float my_multiplication(float n1, float n2){
	return n1 * n2;
}


float my_division(float n1, float n2){
	return n1 / n2;
}


void calculator(int choice, float n1, float n2){

	if (choice > 0 && choice < 5) {
		if (choice == 1) {
			printf("A soma de %.2f e %.2f é %.2f\n", n1, n2, my_sum(n1, n2));
		}
		else if (choice == 2) {
		
			printf("A subtração de %.2f e %.2f é %.2f\n", n1, n2, my_subtraction(n1, n2));
		}
		else if (choice == 3) {
			printf("A multiplicação de %.2f e %.2f é %.2f\n", n1, n2, my_multiplication(n1, n2));
		}
		else if (choice == 4) {
		
			printf("A divisão de %.2f e %.2f é %.2f\n", n1, n2, my_division(n1, n2));
		}
	} else {
	
		printf("Saindo.....");
	}
}


void menu(){
	printf("-------------- MENU -----------------\n");
	printf("1 - ADIÇÃO\n");
	printf("2 - SUBTRAÇÃO\n");
	printf("3 - MULTIPLICAÇÃO\n");
	printf("4 - DIVISÃO\n");
	printf("0 - SAIR \n");
	printf("-------------------------------------\n");
}


int main(){
	float number1, number2;
	int user_choice;	
	
	menu();
	scanf("%d", &user_choice);

	printf("Digite o primeiro número: \n");
	scanf("%f", &number1);
	printf("Digite o segundo número: \n");
	scanf("%f", &number2);

	calculator(user_choice, number1, number2);


	return 0;
}
