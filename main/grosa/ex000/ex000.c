#include <stdio.h>


int gotATrafficTicket(float velocity){
	if (velocity > 80) {return 1;}
	return 0;
}

float trafficTicketValue(float velocity){
	int quantityAbove80 = velocity - 80;
	return  quantityAbove80 * 5.0;


}

void trafficInspectionMsg(float velocity){
	if (gotATrafficTicket(velocity)){
		printf("Você foi multado! Valor da multa R$%.2f\n", trafficTicketValue(velocity));
	}
}

int main()
{
	float user_velocity;

	printf("Velocidade do carro em km/h: \n");
	scanf("%f", &user_velocity);
	trafficInspectionMsg(user_velocity);
	return 0;
}
