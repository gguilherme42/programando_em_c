#include <stdio.h>

float calculateTicket(float distance){
	if (distance <= 200) {return distance * 0.5;}
	return distance * 0.45;
}


int main(){
	float user_distance;
	printf("Distância qu desja percorrer em km: ");
	scanf("%f", &user_distance);
	printf("Valor da passagem: R$%.2f\n", calculateTicket(user_distance));

	return 0;
}

