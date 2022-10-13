#include <stdio.h>

int main(int argc, char *argv[]){
	float x; 
	int i=0, pe;
	printf("Entrer x: ");
	scanf("%f", &x);
	if(x==0)
		pe = 0;
	else if(x>0){
		while(i<=x)
			i++;
		pe = i-1;
	}else{
		while(i>x)
			i--;
		pe = i;
	}
	printf("la partie entiere de %.2f est %d\n", x, pe);
	return 0;
}