#include <stdio.h>
#include <math.h>

#define MAX_ITERATION 100

int main(int argc, char *argv[]){
	float deux_sur_pi=1, racines=0;
	int i;
	for(i=0; i<MAX_ITERATION; i++){
		racines = sqrt(racines+2);
		deux_sur_pi *= racines/2;
	}
	printf("pi = %.2f\n", 2/deux_sur_pi);
	return 0;
}