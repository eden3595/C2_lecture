#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

char a[4],b
변수 5개
상수는 a

scanf("%c",&a[0]);
=> 하나씩 바꿔서 해보기

*/

#if 0

/*



*/

int main() {

	unsigned char a[4] = { 0, }, b;

	// casting
	scanf("%d", (int*)&a[0]);

	b = a[0] + a[3];

	printf("%d\n", b);

	return 0;
}

#endif

#if 0

/*

100번지의 값 얼마인가
-> 자료형이 무엇인지 알아봐야함...

*/


/*

비트 / 바이트/ 워드 / 더블워드

10진수 / 2진수 / 16진수

메모리에 저장된 데이터는 다양하게 표현하고 나타낼 수 있다. 


비트 : 0 또는 1 로 표현하는 2진수 값을 저장할 수 있는 메모리 공간
비트 연산자 : 데이터의 각 비트 단위로 수행되는 연산자
왼쪽 시프트 -> 0
오른쪽 시프트 -> 0 또는 1


비트 연산자와 논리 연산자
-> 구분해야함..

& 와 &&
| 와 ||
~ 와 !


- 값도 논리로 처리될 수 있다.

if(c==1) d=3;

if(c) d=3; => c에 값이 있느냐
if(c!=0) d=3;

- 이건 다름.
if(c==2) d=3;
if(c) d=3;

바이트 : 비트가 연속적으로 8개 모인 정보 단위를 바이트라 한다.
총 256가지의 정보 종류를 저장할 수 있다. 
 

*/

int main() {

	

	return 0;
}

#endif

#if 0


int main() {

	unsigned char a = 0xf0, b = 0x0f, c = ~(a & b);

	int d = 0x80000000;



	c = ~a;			// c에는 무엇이 저장될까

	c = ~(~a & ~b);		// c에는 무엇이 저장될까

	c = ~(!a & !b);		// c에는 무엇이 저장될까



	printf("%x\n", ~a);		// ffffff0f

	printf("%x\n", ~(~a));		// f0

	printf("%x\n", (a & b));	// 0

	printf("%x\n", (a && b));	// 1

	printf("%x\n", ~(a & b));	// fffffffff

	printf("%x\n", !(a & b));	// 1

	printf("%x\n", ~(!a & !b));	// ffffffff

	printf("%x\n", ~a & ~b);	// ffffff00

	printf("%x\n", (~a & ~b));	// ffffff00

	printf("%x\n", ~(~a & ~b));	// ff

	printf("%x\n", (unsigned int)~(~a & ~b));	// ff

	printf("%x\n", !(~a & ~b));	// 0


	return 0;
}

#endif
