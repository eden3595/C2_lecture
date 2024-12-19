#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 0

/*

포인터 - 데이터가 필요함
배열 - 주소관점 / 데이터 관점

char c[5]; [ ] 연산자
[ ] ==  *(+)

c[3] = *(c+3) -> 그 주소의 값

c 첫번째 덩어리의 주소 &c[0]

- 교환 법칙
*(3+c)  3[c] ---> 맞다!!
*(c+(-1))  c[-1] --> 맞음   -1[c] 된다.

int *score == score[]


*/

int main() {

	int grade[5];
	int score[5];

	// grade=score -> grade가 포인터 상수이기에 안돼
	// 복사하려면 하나씩해야함


	return 0;
}

#endif

#if 0

/*

함수 argu에 const -> 읽을 수는 있지만 쓰지는 못함
=> 원래 데이터 보호할 수 있음



*/

int main() {

	char a[] = "rose";
	char* p = "%s \n";

	a[0] = 'n';

	printf(p, a);


	return 0;
}

#endif

#if 0

/*

int * a  -> 주소 ... int 값이 있음
이 주소는 int를 가리키는 주소 +1하면 값 +4

int ** b -> 주소 ... 주소가 또 있음 ... int 값이 있음
처음 주소는 다음 주소를 가리키는 주소...

int *** c -> 주소 ... 주소 ... 주소... int 값

배열이랑 다른 점 : 위에는 연속이 아닐 수 있음. 갯수만 맞으면

3차원 배열 - int *** p 이렇게 사용하지 못함..


*/

int main() {



	return 0;
}

#endif

