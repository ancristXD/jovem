#include <stdio.h>

int main() {
	char nome[50];
	int idade;

	printf("seu nome:");
	scanf("%s", nome);
	printf("sua idade: ");
	scanf("%d", &idade);

    if(idade <= 13){
        printf("seu nome é %s \nvc é crianca. ", nome);
    } else if(idade <=20){
        printf("seu nome é %s \n vc é adolescente", nome);
    }else{
        printf("seu nome é %s \n vc é adulto", nome);
    }
}