#include <stdio.h>


float calculateSalaryIncrease(float value){
	if (value > 1250) {
		return (value * 10) / 100;
	}

	return (value * 15) / 100;
}


int main(){
	float salary, new_salary;
	
	printf("Qual su salário? \n");
	scanf("%f", &salary);
	new_salary = salary + calculateSalaryIncrease(salary);
	printf("Seu novo salário é: R$%.2f\n", new_salary);

}
