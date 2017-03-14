//variables

#include <stdio.h>

int main() {
	int x; //entero: 8, -9, 10 16bits -32768 hasta 32767 2^16
	float y;//flotante: 9.58, 10.69, 5 32bits 2^32
	double y2;//flotante: 64bits 2^64
	char z;//caracter: a,4
	
	x=5;
	y=10.5;
	y2=20.9;
	z='a';
	
	printf("valor de x: %i.\n",x);
	printf("valor de y: %f.\n",y);
	printf("valor de y2: %f.\n",y2);
	printf("valor de z: %c.\n",z);
	
	system("pause");
	return 0;
}
