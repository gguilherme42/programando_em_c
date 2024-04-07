#include <stdio.h>




float calculateResidentialPrice(float kwh){
	if (kwh <= 500) {return kwh * 0.4;}
	return kwh * 0.65;
}

float calculateComercialPrice(float kwh){
	if (kwh <= 1000) {return kwh * 0.55;}
	return kwh * 0.6;
}


float calculateIndustrialPrice(float kwh){
	if (kwh <= 5000) {return kwh * 0.35;}
	return kwh * 0.5;
}

float calculatePrice(char type, float kilowatts_hour){
	if (type == 'R'){return calculateResidentialPrice(kilowatts_hour);}
	if (type == 'C') {return calculateComercialPrice(kilowatts_hour);}
	return calculateIndustrialPrice(kilowatts_hour);
}

int isAValidInstallation(char user_input){
	return (user_input == 'C') || (user_input == 'R') || (user_input == 'I');
}


int main(){
	char installation_type;
	float consumed_kilowatts_hour;
	
	printf("Instalação (R, C, ou I): ");
	scanf("%c", &installation_type);
	printf("\n");
	
	printf("Cosumo de energia (KW/h): ");
	scanf("%f", &consumed_kilowatts_hour);
	printf("\n");

	if (isAValidInstallation(installation_type)){
		printf("O preço é de: R$%.2f\n", calculatePrice(installation_type, consumed_kilowatts_hour));
	}
	else {
		printf("Instalação inválida!\n");
	}
	
	return 0;
}
