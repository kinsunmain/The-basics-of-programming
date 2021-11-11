#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

void main()
{
	float distance, speed, time;

	printf("Please type in the distance to travel: ");
	scanf("%f", &distance);
	printf("Please type in the average speed: ");
	scanf("%f", &speed);

	time = distance / speed;
	printf("time = %f", time);
}
