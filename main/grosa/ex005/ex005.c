#include <stdio.h>




int loanAllowed(float salary, float monthly_installment) {
	int is_salary_greater = salary > monthly_installment;
	int is_installment_lesser_or_equal_30 = ((monthly_installment * 100) / salary) <= 30.0;
	return (is_salary_greater && is_installment_lesser_or_equal_30);
}


float calculateMonthInstallment(float value, int years){
	return (value / years) / 12;
}

int main(){
	float house_value, salary;
	int years_to_pay;
	
	printf("------------------- Banco ComeCu Brasilience (BCCB)------------------------\n");

	printf("Valor da casa: R$");
	scanf("%f", &house_value);
	printf("\n");

	printf("Salário: R$");
	scanf("%f", &salary);
	printf("\n");

	printf("Quantidade de anos para pagar: ");
	scanf("%d", &years_to_pay);
	printf("\n");

	printf("---------------------------------------------------------------------------\n");
	
	printf("Solicitação de empréstimo: ");
	if (loanAllowed(salary, calculateMonthInstallment(house_value, years_to_pay))){
		printf("APROVADA!\n");
	} else {
		printf("REPROVADA! Pobre!\n");
	}

	
	return 0;
}
