#include <stdio.h>

int main(int argc, char *argv[]){
	int j, m;
	
	// la date saisie est valide
	
	printf("Entrer le jour et le mois :\n");
	scanf("%d%d", &j, &m);
	
	switch(m){
		case 9:
			if(j<23){
				printf("Ete\n");
				break;
			}
		case 10:
		case 11:
			printf("Automne\n");
			break;
		case 12:
			if(j<21){
				printf("Automne\n");
				break;
			}
		case 1:
		case 2:
			printf("Hiver\n");
			break;
		case 3:
			if(j<20){
				printf("Hiver\n");
				break;
			}
		case 4:
		case 5:
		case 6:
			if(m==6 && j>20){
				printf("Ete");
				break;
			}
			printf("Printemps\n");
			break;
		default:
			printf("Ete\n");		
	}
	
	return 0;
}