#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 0

/*

배열과 포인터 변수의 이해


*/

int main() {

	char c1; // 메모리에 1바이트를 잡음.. 그리고 그 이름을 c1이라고 붙임
	char c2 = 'a'; // 초기화...문자 a의 아스키값
	char c4 = "abcd"; // "~" 문자열 - 주소 ... 왼,오 모두 숫자이기에 3바이트 짜름
	// 안쓰는게 좋음
	char c3 = "a"; // 안쓰는게 좋음.. 아무런 의미가 없다

	return 0;
}

#endif

#if 0

int main() {

	char c1=1;
	char c2 = 'a'; 
	char *c4 = "abcd"; 
	char c3 = "a";
	char* c5 = "ABCD", c6 = 1;

	c1 = "a"; // 돼 ... 의미는 없다.
	c4[4] = 1; // 안돼.. 실행할때 에러가 남.. 바꿀 수 없는 공간에 바꾸려고 시도하는 것이 잘못됨
	c5[1] = 'X'; // 안돼.. 모양 자체는 문제가 없지만 값을 바꾸려고 하는것 잘못됨
	// " " read only

	return 0;
}

#endif

#if 0
/*

텍스트 세그먼트 : 코드, 상수  -> "  "
데이터 세그먼트 : 전역변수, 정적변수 ->
스택 : 함수가 사용하는 메모리 ->
힙 : 포인터로 접근하는 메모리 ->


*/

int main() {

	char a[]  = "rose";
	char b[] = "rose";
	char* p = "grace";

	a[0] = 'n'; // rose는 스택으로 들어왔기에 바꿀 수 있는 갑시
	b[0] = 'n'; // 가능하다! 변수 영역이다.
	//p[0] = 't'; // 불가능하다! grace는 텍스트세그먼트에 있기에 바꿀 수 없음.

	printf("a=%s\n", a);
	printf("b=%s\n", b);
	//printf("p=%s\n", p);

	return 0;
}

#endif


// 배열의 초기화
#if 0

/*



*/

int main() {

	char ca1[5];
	char ca2[5] = { 'a','b','c','d','e' };
	//char ca3[5] = { 'a','b','c','d','e','f' };
	char ca4[]= { 'a','b','c','d','e' };
	char ca5[5] = "abcd";

	char ca6[] = "abcd";
	// char ca7[];  ->  안돼
	// char ca8[5] = "abcdef";  -> 안돼
	return 0;
}

#endif


// 포인터의 초기화
#if 0


int main() {

	char* cp1;
	char* cp2 = "abcde";
	// char *cp3= { 'a','b','c','d','e' };  -> 괄호가 나오면 안돼
	char* cp4 = "";  // NULL 값의 주소
	// char* cp5 = '';  -> 문자의 아스키이기 때문에 따옴표 안에 값이 없음
	
	// ----------------------------------------
	char* cp6 = 'a'; // 숫자 97로 해석 .. 따라서 97번지를 가리킨다.
	char* cp7 = 100; // 가능.. 위험하지만 허용
	return 0;
}

#endif


#if 0

// 함수 아규먼트는 무조건 복사본
// 따라서 영향을 안 받는다.
// 근데 넘겨지는 것이 주소라면... 달라진다.

void test(char a, char* aa, char* ab) {
	// char a,char *aa,char ab[] 이렇게 써도 돼
	printf("%c %s %s", a, aa, ab);
}

int main() {

	char a = 'a', b = 'b', c = 'c';
	char* aa = "aaa";
	char ab[] = "bbb";

	test(a, aa, ab);

	return 0;
}

#endif

#if 0

/*

string length 문자열의 길이를 return 시켜주는 거
입력은 문자열의 주소 .. 끝은 0

strlen()
strcpy() 만들어보기

-문자열의 길이 반환하는 함수 (리턴은 int로 설계)
-함수의 설계
함수 이름 결정, 함수 반환값 형태 결정, 함수 인자수와 형태 결정
함수인자 -> char *
프로토타입 strlen(char *) < 어떤 변수 형태가 들어가는지가 중요함 >
실제 함수 쓸때는 변수 이름 쓰기


*/


/*

str 은 char들을 가리키고 있음.
문자열 -> 끝이 null이어야함. 따라서 length 초기값 0
while문 사용!


*/

int strlen(char* str) {

	int length=0; // 문자열의 길이를가질 변수

	while (1) {
		if (*str != NULL) {
			length++;
		}
		else {
			break;
		}
		str++;
	}


	return length;
}

int strlen_new(char* str) {

	int length = 0; // 문자열의 길이를가질 변수

	// 연산자 우선순위
	// * ++ !=
	// ++ -> * -> !=
	// 우선순위 모르겠다면 괄호
	while (1) {
		if (*str++ != NULL) length++;
		else break;
	}

	// str++ str처리 한뒤 증가
	// ++str str증가시킨뒤 처리


	return length;
}

int main() {

	char* str = "abcde";
	int len = 0;
	len = strlen(str);

	printf("%d\n", len);

}

/*
변형
if 문장을 쓰지 말고해결
if 문장은 길이의 끝을 확인하는 중요한 부분

ex)
while(*str++ != NULL) length++ // while의 역할~


변형
int length 변수를 쓰지 말고, 다른 형태로 접근
즉 매번 길이값을 count 하지 말자.

char *str2 = str;
while(*str2!=NULL) str2++;
str2-str


*/
#endif

// strcpy -> 변형도 만들어보기


