#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 0


#endif


#if 0

int main() {

	char c[100];
	int a, b;
	scanf("%s arr[%d][%d];",c,&a,&b);

	int k;
	scanf("%d", &k);

	int t = 0;
	if (c[0] == 'c') {
		t = 1;
	}
	else if (c[0] == 'i') {
		t = 4;
	}
	else if (c[0] == 's') {
		t = 2;
	}
	
	printf("%X", 0x1000 + a * b * t * k);

	return 0;
}

#endif

#if 01//J
#include <stdio.h>

int main() {
	char type[10];
	int size1, size2, I;
	unsigned int address = 0x1000;
	unsigned int type_size = 0;

	scanf("%s arr[%d][%d];", type, &size1, &size2);
	scanf("%d", &I);

	if (type[0] == 'i') {
		type_size = 4; // int의 크기
	}
	else if (type[0] == 's') {
		type_size = 2; // short의 크기
	}
	else if (type[0] == 'c') {
		type_size = 1; // char의 크기
	}

	unsigned int result = address + (type_size * I * size2);
	printf("%X\n", result);

	return 0;
}

#endif

