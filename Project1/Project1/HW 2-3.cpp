#include <stdio.h>
int main() {
	float weight, height, bmi;

	printf("TYPE weight, height\n");
	scanf_s("%f %f", &weight, &height);

	bmi = weight / (height * height);
	printf("%f\n", bmi);

	if (bmi > 30) {
		printf("Obese");
	}
	else if (bmi > 25) {
		printf("Overweight");
	}
	else if (bmi > 18.5) {
		printf("Nomal");
	}
	else {
		printf("Underweight");
	}


}