#include <stdio.h>


int main(){
	float list[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	float *pointer_of_list;
	int i;

	pointer_of_list = list;

	printf("\tContador\t|\tValor\t|\tValor\t|\tEndereço\t|\tEndereço\t|\n");
	for (i = 0; i < 5; i++){
		printf("\ti = %d\t", i);
		printf("\tlist[%d] = %f\t", i, list[i]);
		printf("\t*(pointer_of_list + %d) = %f \t", i, *(pointer_of_list + i));
		printf("\t&list[%d] = %X\t", i, &list[i]);
		printf("\t(pointer_of_list + %d) = %X\t", i, (pointer_of_list + i));
		printf("\n");
	}

	

	return 0;
}
