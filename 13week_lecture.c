#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 0

/*

중첩된 구조체
포인터 상식 몇가지
함수 포인터

OJT에서의 코드 작성 & 제출 규칙
- 수정 금지 부분 => 기말고사 엄격하게!!!
- 인자 개수 주어지는 To do 형태로 줄 수도
*/

/*

중첩된 구조체 nested structure
구조체의 원소가 도 다른 구조체인 경우
즉, 하나의 구조체가 또 다른 구조체를 포함하고 있는 경우
이와 같은 구조체의 참조는 멤버의 연산자를 반복 사용하여 참조 가능하다.
중첩된 구조체에서는 가장 바깥에서 참조를 시작하여 가장 안쪽에서 끝난다.


*/

// 구조체의. 또는 -> 연산자 뒤에는 반드시 구조체 필드 이름이 와야한다.
struct score {
	char name[20];

}a,*b;

int main() {

	char* p = a.name; // a.name 은 주소!!!
	b = &a;

	p[1] = 'A'; // p는 배열이 아니지만 배열처럼 사용 가능 []연산만 되면 가능
	a.name[1] = 'B';
	b->name[1] = 'C'; // b는 주소라 하더라도 최종으로 가면 char이다. (b->name[1]) == char


	// 구조체의. 또는 -> 연산자 뒤에는 반드시 구조체 필드 이름이 와야한다!!!!
	// a.p[1] = 'D' 불가능  ... p는 구조체 필드 이름이 아니기에
	// a.(name+2) = 'E' 불가능
	// a.(*(name+2)) 불가능
	// 구조체가 나와있는 형태로만 써야함


	return 0;
}

#endif

#if 0

/*

자기 참조 구조체
 구조체의 자신의 구조체를 다시 넣어 사용

 ** linked list 만들 수 있음 ( 연결해서 만들 수 있음)
 * 같은 모양의 데이터를 서로 연결할 수 있기에 붙어 있는 것으로 생각할 수 있음
 * 구조체의 배열과 비슷함

*/

struct list {
	char name[20];
	char address[80];
	int age;
	struct list* next;  // struct list next => 잡을 수 없음
	// struct list* next -> 4바이트짜리 포인터
};

// 자기 참조, list 구조체 정의도 안 끝났는데 사용을 어떻게???


int main() {
	
	struct list* ptr, x;

	return 0;
}

#endif

#if 0

/*

비트 필드 구조체
기억 공간을 절약하는 프로그램이나 하드웨어 등의 제어에 많이 이용돠ㅣㄴ다.
구조체의 원소들을 비트들로 지정한다.
따라서 on/off 정보를 유지하는 플래그로 많이 사용된다.

struct 구조체명칭{
	데이터형 비트변수 1: 비트 길이;
	데이터형 비트변수2 : 비트 길이;
	}

비트 필드에 포함하는 구조체 내애 일반적인 변수를 포함할 수도 있다.

1비트를 할당해놓고 값을 크게 주면 (에러 안남) LSB 1비트 값만 할당된다.
*/
struct bit_field {
	unsigned p : 1;
	unsigned none : 1;
	unsigned ov : 1;
	unsigned rs : 2;
	unsigned f : 1;
	unsigned ac : 1;
	unsigned cy : 1;
	unsigned dummy : 8;
}PSW;


int main() {

	PSW.dummy = 0;
	PSW.p = 1;
	PSW.none = 1;
	PSW.rs = 3;


	return 0;
}

#endif

#if 0

/*

함수의 인수로 구조체를 전달 가능

- 구조체 멤버 데이터의 전달
func1(man.kor);

- 구조체 변수의 전달
func5(man);

- 구조체 변수의 주소 전달
func6(&man);

- 피호출 함수의 형식의 예
func1(int data);

*/

struct score {
	char name[20];
	int kor;
	int math;
}man;

int main() {



	return 0;
}

#endif

#if 0

struct s_type {
	int i;
	double d;
}var1;

// 인자는 항상 복사본으로 넘어간다.
void f(struct s_type temp);

void main(void) {
	var1.i = 99;
}
#endif

#if 0

/*

공용체
두개 이상의 변수들이 같은 메모리를 공유하게 하는 것으로
변수들이 서로 다른 자료형을 가질 수 있다. 주소를 공유한다!!!

공용체의 정의방법과 선언방법은 구조체와 유사하다.
단 구조체 모든 자료가 별개의 기억 장소를 할당 받지만
공용체의 경우 공유되는 여러 자료형 중에서 가장 크기가 큰 자료형 만큼의 메모리가 확보된다.

구조체처럼 도트 연산자와 화살표 연산자를 사용

*/

union data {
	char a;
	short int b;
	int c;
};

// 위치에 어떤 것 바꾸면 그 영향으로 바뀔 수도 있음..

int main() {
	// 4바이트 little 엔디안
	union data value;
	value.c = (int)0x12345678;

	// a : 78
	// b : 78 56  -> 5678
	// c : 78 56 34 12 -> 12345678

	return 0;
}

#endif

#if 0

/*
함수 포인터 function pointer
: 함수를 가리키는 포인터

반환형 (*함수포인터이름)(매개변수1, 매개변수2,...);

함수도 메모리에 코드 형태로 존재하고, 따라서 함수도 주소를 가짐
함수를 실행한다는 것은 해당 함수의 주소로 위치를 옮겨 실행한 뒤, 원래 위치로 돌아오는 것임

int main(){

	int result;
	int (*pf)(int, int); // 함수의 포인터이다.

	pf = add; // 함수의 포인터이기에 함수의 이름이 나와야 함
	// 호출이 아닌 할당!!!!
	result = pf(10,20);
	-> result = 30


	pf = sub;
	result = pf(10,20);
	-> result = -10

	// 
}

int add(int x,int y);
int sub(int x,int y);

*/

/*

!!!! ( 포인터배열인지 배열포인터인지 확실하게 구분!!) !!!!
int (*pf[4])(int, int) = { add, sub,mul,div};  -> 함수 포인터 배열을 선언하고 초기화한다.
// 함수 이름이 나와야함
// 한 학기 내용 전부 포함하는 한 줄이니 중요함

result = pf[choice](x,y);


*/

/*

void 포인터
순수하게 메모리의 주소만 가지고 있는 포인터
가리키는 대상물은 아직 정해지지 않음
ex ) void *vp;

다음과 같은 연산은 모두 오류이다.
*vp;
vp++;
vp--;

----------------------------------------------------------------------
사용할 때는 *(int*)vp = 35; // 캐스팅 순서를 잘 봐야함 -> 4바이트 if char : 1바이트
// 캐스팅의 대상이 값이 아닌 주소!!!
(int*) *vp 는 안돼!!


*/

/*

main 함수의 인수

- 보통
int main(void) 

- 외부로부터 입력을 받는 main
int main(int argc, char *argv[])
char * argv[] 포인터의 배열


*/


#endif
