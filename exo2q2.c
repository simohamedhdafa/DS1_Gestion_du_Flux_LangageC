#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
	float deux_sur_pi=1, racines=0, epsilon=1E-4;
	int i=0;
	while(fabs(2/deux_sur_pi-M_PI)>epsilon){
		racines = sqrt(racines+2);
		deux_sur_pi *= racines/2;
		i++;
	}
	printf("apres %d iterations, pi = %f, M_PI = %f, epsilon = %f\n", i, 2/deux_sur_pi, M_PI, epsilon);
	return 0;
}