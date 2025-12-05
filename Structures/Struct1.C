/*
 A refresh on structs because its been a while


*/

#include <stdio.h>

int main (void){

	printf("Structs\n");

	struct flightType {
	char flightNum[10];
	int alt;
	int speed;

	};

	struct flightType plane;
	plane.speed = 600;
	plane.alt = 25000;

	printf("\n\n");	
	printf("Plane speed: %d, Plane alt: %d\n", plane.speed, plane.alt);

	return 0;
}
