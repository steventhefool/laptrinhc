#include <stdio.h>
using namespace std;
int main (){
	float temperature_C, temperature_f;
	printf ("nhap do c vao: ");
	scanf ("%f", &temperature_C);
	temperature_f = (temperature_C*1.8)+32;
	printf ("doi %f c thanh do f la: %f", temperature_C, temperature_f);
	return 0;
}
