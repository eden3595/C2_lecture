#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*

변수와 상수 구분
-> 포인터를 들어갔을 때!!!

변수 디버깅하면서 변수마다 거리 알아보기

배열 - 일정한 형태의 데이터가 같은 크기로 계속 반복되어 연속으로 저장됨

*/


#if 0

int main() {

	int i = 257, j = 258;
	char a = 30, b = 'c', c = 255, d = 256, e = i,
		f = (char)j, g = *((char*)((char*)&j + 1));
	printf("%d\n", g);
	// g의 값은 1
	
	return 0;
}

#endif


// 알아보기
#if 0

int main() {
	
	char a = 0, b[12] = "I am a boy";
	char* c = "I am a boy";
	int i[12] = { "I am a boy" };

	if (a == b) printf("1");
	if (b == c) printf("2");
	if (b == i)printf("3");
	if (b == c)printf("4");
	if (c == i)printf("5");
	if (b[0] == i[0])printf("6");
	if (c == i[0])printf("7");
	if (b[0] == c[0])printf("8");
	else printf("9");

	return 0;
}

#endif
