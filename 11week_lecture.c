#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


#if 0


/*

이중 포인터
포인터의 배열
배열의 포인터
-> 기말!!!


이중 포인터 : 포인터를 가리키는 포인터

int i = 100; // i는 int형 변수
int *p = &i; // p는 i를 가리키는 포인터
int **q = &p; // q는 포인터 p를 가리키는 이중 포인터

-> 배열처럼 사용할 수 있음...



*/

/*


static -> 유지된다..
보호받지 않는 영역...


*/

void set_proberb(char** q) {
	static char* str1 = "A friend in need is a friend indeed";
	static char* str2 = "A little knowledge is a dangerous thing";

	*q = str1;
}

int main() {

	char* s = NULL;

	set_proverb(&s);
	printf("selected proverb = %s\n", s);
	return 0;


	return 0;
}

#endif


#if 0


/*

포인터의 배열

**포인터에 *3개를 할당하고, 각각에게 int 4개씩을 동적 할당하였다.
* 중간의 *3개는 결국 배열을 만들고 각각은 int 주소를 담은 것과 같다.
* 
* 그럼 처음부터 포인터를 저장하는 배열을 만들 수 없는 것인가> -> malloc
* 
* 

!!!!
int *pa[5]
int * 와 pa[5] 따로 보기
배열을 만드는데 그 안에는 int의 주소가 들어있다로 생각!!!

문자열 배열
- 가장 많이 사용되는 포인터 배열
- 문자열들을 효율ㅈㄱ으로 저장할 수 있다.
-


*/

int main() {


	// 포인터배열  : 포인터를 모아서 배열로 만든 것 
	// 배열이기에 같은 형태를 가져야함...
	int a = 10, b = 20, c = 30, d = 40, e = 50;
	int* pa[5] = { &a,&b,&c,&d,&e };

	// int 배열에는 값이 들어가있다.
	// int 포인터의 배열에는 주소가 들어있다.


	return 0;
}


#endif

#if 0

/*

문자열 배열
- 가장 많이 사용되는 포인터 배열
- 문자열들을 효율ㅈㄱ으로 저장할 수 있다.
- ** 무엇이 저장되고, 각 데이터는 어느 영역에 있을까?

*/


int main() {


	// 16바이트

	char* fruits[] = {
		"apple",
		"blueberry",
		"orange",
		"melon"
	};


	/*
	* 값 알아보기!!!!
	fruits
	&fruits
	&fruits[0]
	fruits[0]
	fruits[0][0]
	*/

	return 0;
}


#endif

#if 0

/*

문자열 포인터배열 vs 2차원 배열
문자열들을 저장하는 2차원 배열 : 공간의 낭비 발생할 수 있다.


위의 코드는 문자열 내용 못 바꾸지만
아래는 가능하다.



*/

int main() {

	char frame[][10] = {
		"apple",
		"blueberry",
		"orange",
		"melon"
	};


	return 0;
}

#endif

#if 0

/*
배열의 포인터 ... 복합 포인터
=> 포인터를 만드는 것

!!!!!

int arr[2][4]
int *(pArr)[4]

4 -> 안쪽에 있는 덩어리

arr 상수
pArr 변수


--------------------------------------------

int (*a)[10] 


----------------------------------------------

void show(int (*ptr)[4],int a)

void show(int ptr[][4],int a);  -> 아규먼트 쓸 때만 이렇게 작성


-------------------------------------------------
int (*pArr)[4] : 배열 포인터 --- 구조를 가리킨다!!

int* pArr[4] : 포인터 배열 --- 배열 생성!!

의 차이점!!!!



*/

int main() {



	return 0;
}

#endif


