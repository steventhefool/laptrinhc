#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	char name[50];
	printf ("nhap ten cua ban: ");
	fgets (name, sizeof(name), stdin);
	printf ("xin chao %s", name);
	return 0;
}

