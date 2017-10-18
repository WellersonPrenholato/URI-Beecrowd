#include<stdio.h>
#include<strings.h>

int main(){
	char carac1[30], carac2[30], carac3[30];

	gets(carac1);
	gets(carac2);
	gets(carac3);
	
	if (strcmp(carac1,"vertebrado")==0){
		if (strcmp(carac2,"ave")==0){
			if (strcmp(carac3,"carnivoro")==0){
				printf("aguia\n");
			}
			if (strcmp(carac3,"onivoro")==0){
				printf("pomba\n");
			}
		}
		if (strcmp(carac2,"mamifero")==0){
			if (strcmp(carac3,"onivoro")==0){
				printf("homem\n");
			}
			if (strcmp(carac3,"herbivoro")==0){
				printf("vaca\n");
			}
		}
	}
	if (strcmp(carac1,"invertebrado")==0){
		if (strcmp(carac2,"inseto")==0){
			if (strcmp(carac3,"hematofago")==0){
				printf("pulga\n");
			}
			if (strcmp(carac3,"herbivoro")==0){
				printf("lagarta\n");
			}
		}
		if (strcmp(carac2,"anelideo")==0){
			if (strcmp(carac3,"hematofago")==0){
				printf("sanguessuga\n");
			}
			if (strcmp(carac3,"onivoro")==0){
				printf("minhoca\n");
			}
		}
	}
	return 0;
}
