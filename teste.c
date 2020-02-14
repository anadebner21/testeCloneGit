#include <stdlib.h>
#include <stdio.h>

int main(){
	int idade; 
	

	printf("Digite sua idade");
	scanf("%d", &idade);

	if (idade > 0){
		idade -= 1 ;
	}

	printf ("sua idade subtraida por 1 é: %d", idade);


    return 0;
}
