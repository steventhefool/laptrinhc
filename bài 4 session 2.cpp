#include <iostream>
using namespace std;
int main (){
	int edge, chu_vi, dien_tich;
	printf ("nhap vao canh hinh vuong: ");
	scanf ("%d", &edge);
	chu_vi = edge*4;
	dien_tich = edge*edge;
	printf ("chu vi hinh vuong la: %d\n", chu_vi);
	printf ("dien tich hinh vuong la: %d\n", dien_tich);
	return 0;
}
