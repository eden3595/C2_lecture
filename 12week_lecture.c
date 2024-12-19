#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#if 0


/*

구조체 : 두개 이상의 원소들로 구성된 통합 자료형

서로 연관된 데이터 형들을 묶어서 하나의 단위로 취급할 수 있도록 묶어놓은 구조화된 데이터형

구주체 정의란 구조체의 명칭과 구조체 멤버 변수들을 선언해주는 것을 의미


struct 구조체명칭{
	멤버변수 1
	멤버변수 2
	}구조체변수명;

구조체명칭, 변수만 먼저 쓰고 나중에 변수 정할 수 있음.



*/

struct address {
	int number;
	char name[20];
	char* addr;
	int tel;
}a,b;

struct score {
	int kor;
	int math;
};


// 구조체 멤버변수의 참조 ( 접근 )
// 도트 연산자를 사용하여 구조체 멤버 변수를 참조
// 형식 : 구조체변수명, 멤버변수

struct card {
	int x;
	int y;
}one;

struct card two;


int main() {

	one.x = 50;
	one.y = 100;
	two.x = one.x;
	two.y = one.y;

	return 0;
}

// c언어는 메모리에 써놓고 그것을 바라보는 관점으로 이해

#endif

#if 0

struct s_type {
	int a;
	float f;

}var1,var2;

int main() {

	var1.a = 10;
	var1.f = 100.23;

	var2 = var1; // 구조체끼리의 치환, 한꺼번에 전달 가능
	// 복사가 가능 --- 함수 인자로 사용 가능하다
	// 통째로 가능하다
	/*
	
	if(var2==var1)  -> 구조체끼리의 비교 안됨.!!!!
	// 멤버 각각을 비교해야함!!!!

	*/

	return 0;
}

#endif


#if 0

/*

구조체 원소의 이름과 다른 변수의 이름이 같더라도 문제가 되지 않는다.

*/

struct Test {
	char a, b, c, d;
	int i;
	char str[100];
}varA;


int main() {

	varA.a = 65;
	varA.b = 66;
	varA.c = 67;
	varA.d = 0;

	// 코딩할 때 아래와 같이 사용하면 안돼
	printf("%d\n", varA); 
	printf("%s\n", varA);
	printf("%s\n", &varA);


	return 0;
}


#endif

// 과정 이해하기
#if 0

struct s_type {
	int a;
	float f;
}var1,var2,var11[5];

struct s_type2 {
	float f;
	int  a;

};

typedef struct {
	char a, b, c, d;
	int i;
}s_type3;

struct s_type4 {
	int a;
	int b;
}var7,var8;

int main() {

	struct s_type2 var3, var4;
	s_type3 var5, var6;

	var1.a = 10;
	var1.f = 100.23;

	var11[0] = var1; // 같은 structure 일때만 할당 가능
	var3.a = 11;
	var4.f = 111.23;

	var5.a = 65;
	var5.b = 66;
	var5.c = 67;
	var5.d = 0;

	var6 = var5;
	//var3 = var1; // 사용 불가
	memcpy(&var3, &var1, sizeof(var3)); // 메모리 카피 ... 형태는 따지지 않고 1에서 3으로 size만큼
	memcpy(&var7, &var5, sizeof(var5));
	
	// 추측 후 디버깅 해보기
	printf("%d\n", var5);
	printf("%d\n", var7);
	printf("%s\n", &var5);
	printf("%s\n", var5);

	return 0;
}


#endif

#if 0
// 구조체 변수의 초기화
/*

특정한 값으로 초기화할 수 있음
struct 구조체 명칭 구조체변수 명 = {초기값1, 초기값2};
*/

/*

항상 그런것은 아니겠지만
4*3 + 1 = 13이 아닐 수 잇다. 설정에 따라 다ㅡㄹ다.

16 나올 수 있음... char도 4바이트로 칠 수 있음

sizeof(kim)해보면 설정 알 수 있음.


컴퓨터는 4바이트가 편안하다
한바이트 읽으려면 4바이트 읽고 다른거 버리기에...
컴퓨터는 따라서 char를 4바이트로 읽는게 편함 ... 최적화


보통 구조체에서 가장 큰 단위를 기준으로 메모리를 할당해 나간다. 역시 효율적으로 처리하기 위해
속도의 효율과 공간의 효율
32비트 컴퓨터는 4바이트가 속도최적


----------------------------------------------
최적화를 막으려면
1. visual studio 설정에서 최적화 설정 x
2. #pragma pack(n) 로 하면 기준 바이트의 메모리 단위를 조절할 수 있다.

----------------------------------------------


*/

struct birthday {
	int year;
	int month;
	int day;
	char calendar;
}kim;

int main() {




	return 0;
}

#endif

#if 0

struct tmp {
	char a;
	char b;
	char c;
	char d;
	double w;
	double x;
	double y;
	double z;
}; // 최적화를 안한다면 40 .. 어딘가에 빈 공간
// pedding


struct tmp1 {
	char a;
	double w;
	char b;
	double x;
	char c;
	double y;
	char d;
	double z;
}; // 최적화를 안한다면 64 ... 불필요한 패딩이 생김... 공간의 낭비 생김

int main() {




	return 0;
}

#endif

#if 0

/*
구조체 배열
: 구조체가 배열의 요소, 즉 배열의 각 원소가 구조체이다.
구조체 변수는 매개변수로서 함수에 전달될 수 있다.



*/

struct book {
	char title[5];
	int year;
	int price;
}room[10];

int main() {


	room[2].title[1] = 'a';


	return 0;
}

#endif


#if 0

/*

구조체 원소의 이름과 다른 변수의 이름이 같더라도 문제가 되지 않는다.

*/

struct Test {
	char a, b, c, d;
	int i;
	char str[100];
}varA[2];


int main() {

	varA[0].a = 65;
	varA[0].b = 66;
	varA[0].c = 67;
	varA[0].d = 0;

	// 코딩할 때 아래와 같이 사용하면 안돼
	printf("%d\n", varA); // 주소가 되어서 주소를 출력
	printf("%s\n", varA); // 틀렷었는데 이게 정상출력돼
	printf("%s\n", &varA); // 맞앗엇는데 이게 의미없게


	return 0;
}


#endif

#if 0

/*
* 
구조체 포인터 : 구조체에 대한 포인터를 선언한 것 ( 단지 주소만 만든다. 4바이트 )
포인터 변수를 이용하여 배열과 동일하게 사용할 수 있듯이 
구조체의 포인터 변수를 이용하여 구조체 배열과 동일하게 사용할 수 있다.

그 자리에 가면 구조체가 있다고 생각... 구조체가 몇 바이트이던 전체 다 읽을 수 있다.

*/

/*

간접 멤버 참조 연산자 ->

구조체포인터변수명->멤버변수;

*p.i=10; => 오류 ... 연산자의 우선순위 *<. 따라서 .을 먼저생각 따라서 괄호를 해야함
(*p).i=10;

*/

struct book {
	char title[10];
	char* author[7];
	unsigned int price;
}*room1;

struct book* room2;

// 구조체 book 형태의 포인터 변수 room을 선언

int main() {

	struct book* room; // 주소이다. 그 주소에 구조체가 있다는 것
	struct book class;
	room = &class;

	return 0;
}


#endif

#if 0

struct s_type {
	int i;
	char str[80];
}s,*p;

int main() {

	p = &s;
	s.i = 10; // 아래의 문장과 동일한 동작
	p->i = 10;
	// p->str 은 str이 상수이기에 못 사용
	strcpy(p->str, "Why Clang!!");
	
	printf("%d %d %s", s.i, p->i, p->str);

	return 0;
}

#endif
