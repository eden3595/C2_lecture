#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// A 두더지 잡기
/*
문제 A: 두더지 잡기숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：163
통과：59
문제 설명
20개의 구멍 중 몇 군데에 두더지가 나와있다.
두더지가 나온 곳은 1로, 빈 구멍은 0으로 표현한다.
내가 위치한 곳에서 바로 앞을 제외하고 좌우로 3칸씩 총 6개의 구멍에 손이 닿는 관계로
해당 구멍의 두더지는 바로 잡을 수 있다.

현재 구멍들의 상황과 나의 위치가 주어질 때, 내가 사정거리 내의 두더지를 잡고난 상황을 출력하시오.
입력 설명

 (정수) : 구멍의 상태, 대문자 16진수
 (정수) : 나의 위치

출력 설명
내가 칠 수 있는 범위 내에 있는 두더지를 전부 잡은 결과를 대문자 16진수로 출력하시오.
입력 예시 복사
FFFFF 3
출력 예시 복사
FFF88
*/

#if 0

int result(int num[]) {
	int n = 0;
	unsigned int k = 1;
	for (int i = 0; i <= 19; i++) {
		if (i == 0) {
			n += num[i] * 1;
		}
		else {
			k = k * 2;
			n += num[i] * k;

		}

	}
	return n;
}

int main() {

	int h, p;
	scanf("%X %d", &h, &p);

	int num[20];
	int k = h;
	for (int i = 0; i <=19; i++) {
		num[19-i] = k & 1;
		k = k >> 1;
	}
	

	for (int i = p + 1, round = 0; i < 20 && round < 3; i++) {
		if (num[i] == 1) {
			num[i] = 0; // 두더지 잡기
			round++;
		}
	}

	// 왼쪽 방향 처리 (p-1부터 3칸)
	for (int i = p - 1, round = 0; i >= 0 && round < 3; i--) {
		if (num[i] == 1) {
			num[i] = 0; // 두더지 잡기
			round++;
		}
	}

	printf("%X", result(num));

	return 0;
}

#endif

#if 0

#include <stdio.h>
int main() {
	int n = 0;
	scanf("%X", &n);
	int m = 0;
	scanf("%d", &m);
	for (int i = 0; i < 32; i++) {
		if (i == m + 1) {
			n &= ~(1 << i);
		}
		if (i == m + 2) {
			n &= ~(1 << i);
		}
		if (i == m + 3) {
			n &= ~(1 << i);
		}
		if (i == m - 1) {
			n &= ~(1 << i);
		}
		if (i == m - 2) {
			n &= ~(1 << i);
		}
		if (i == m - 3) {
			n &= ~(1 << i);
		}
	}
	printf("%X", n);
	return 0;
}
#endif



// E 허수 계산기
/*
문제 E: 허수 계산기숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：60
통과：56
문제 설명 템플릿 복사
struct complexNum
{
	int real;
	int imaginary;
};

위 구조체를 사용하여 복소수의 덧셈과 뺄셈을 하는 함수를 작성하시오.
함수 파라미터의 구성은 템플릿을 보고 유추할 것.

복소수를 더하거나 뺄 때는 실수는 실수끼리 허수는 허수끼리 계산한다.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct complexNum
{
	int real;
	int imaginary;
};

// 이 위로 수정 금지

// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
	struct complexNum com1, com2, sum, sub;
	scanf("%d %d", &com1.real, &com1.imaginary);
	scanf("%d %d", &com2.real, &com2.imaginary);

	sum = sum_complex(&com1, &com2);
	sub = sub_complex(&com1, &com2);

	printf("%d + %di\n", sum.real, sum.imaginary);
	printf("%d + %di\n", sub.real, sub.imaginary);

	return 0;
}
입력 설명

 (정수) :
의 실수와 허수
 (정수) :
의 실수와 허수

출력 설명
두 복소수를 더한 결과와 뺀 결과를 출력한다.
입력 예시 복사
1 2
3 4
출력 예시 복사
4 + 6i
-2 + -2i
*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct complexNum
{
	int real;
	int imaginary;
};

// 이 위로 수정 금지
struct complexNum sum_complex(struct complexNum* a, struct complexNum* b) {

	struct complexNum sum;
	sum.real = a->real + b->real;
	sum.imaginary = a->imaginary + b->imaginary;

	return sum;
}

struct complexNum sub_complex(struct complexNum* a, struct complexNum* b) {

	struct complexNum sub;
	sub.real = a->real - b->real;
	sub.imaginary = a->imaginary - b->imaginary;

	return sub;
}
// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
	struct complexNum com1, com2, sum, sub;
	scanf("%d %d", &com1.real, &com1.imaginary);
	scanf("%d %d", &com2.real, &com2.imaginary);

	sum = sum_complex(&com1, &com2);
	sub = sub_complex(&com1, &com2);

	printf("%d + %di\n", sum.real, sum.imaginary);
	printf("%d + %di\n", sub.real, sub.imaginary);

	return 0;
}

#endif


// J 콜백함수
/*
문제 J: 콜백함수숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：cu29
제출：35
통과：26
문제 설명 템플릿 복사
두 정수 a, b와 두 정수로 연산할 함수를 함수포인터로 넘겨받아
연산을 한 결과를 반환하는 함수 `calc`를 작성하시오.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지

// 이 아래로 수정 금지

unsigned int add(unsigned int a, unsigned int b)
{
	return a + b;
}

int main(int argc, char const *argv[])
{
	unsigned int a, b;
	scanf("%u %u", &a, &b);

	printf("%u", calc(a, b, add));

	return 0;
}
입력 설명

 (정수) : 처리할 정수

출력 설명
add(A, B)의 결과를 출력한다.
입력 예시 복사
4 2
출력 예시 복사
6
*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지

unsigned int calc(int a, int b, unsigned int (*result)(unsigned int, unsigned int)) {

	return result(a, b);
}

// 이 아래로 수정 금지

unsigned int add(unsigned int a, unsigned int b)
{
	return a + b;
}

int main(int argc, char const* argv[])
{
	unsigned int a, b;
	scanf("%u %u", &a, &b);

	printf("%u", calc(a, b, add));

	return 0;
}

#endif


// I 아파트 입주
/*
문제 I: 아파트 입주숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：cu29
제출：60
통과：23
문제 설명 템플릿 복사
이차원 배열로 아파트의 입주 상황을 체크하려고 한다.
0 또는 1로 입주 상황을 기록한 이차원 배열과,
새로 입주하려는 층, 호수를 파라미터로 받아
입주 상황을 업데이트하면서 입주 가능 여부를 반환하는 함수
`moving_into_apartment`를 작성해 코드를 완성하시오.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지

// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
	int state[50][3] = {0};
	int N = 0;
	int f[100] = {0};
	int h[100] = {0};

	scanf("%d", &N);
	for (size_t i = 0; i < N; i++)
	{
		scanf("%d %d", f + i, h + i);
	}

	for (size_t i = 0; i < N; i++)
	{
		printf("%d\n", moving_into_apartment(state, f[i], h[i]));
	}

	return 0;
}
입력 설명

 (정수) : 입주 요청 횟수
 (정수) : 입주하려는 층
 (정수) : 입주하려는 호수

출력 설명
각 입주 요청마다 입주가 가능하면 0을, 입주가 불가능하면 1을 출력한다.
입력 예시 복사
3
1 1
2 1
1 1
출력 예시 복사
0
0
1
Hint
입주가 불가능한 상황은 이미 해당 층 해당 호수에 입주한 사람이 있는 경우이다.
*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지

int moving_into_apartment(int state[50][3], int f, int h) {

	if (state[f-1][h-1] == 0) {
		state[f-1][h-1] = 1; // 입주 처리
		return 0;        // 입주 가능
	} 
	else if (state[f-1][h-1] == 1) {
		return 1;
	}
	
}

// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
	int state[50][3] = { 0 };
	int N = 0;
	int f[100] = { 0 };
	int h[100] = { 0 };

	scanf("%d", &N);
	for (size_t i = 0; i < N; i++)
	{
		scanf("%d %d", f + i, h + i);
	}

	for (size_t i = 0; i < N; i++)
	{
		printf("%d\n", moving_into_apartment(state, f[i], h[i]));
	}

	return 0;
}

#endif


// H 시간 계산기
/*
문제 H: 시간 계산기숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：cu29
제출：34
통과：29
문제 설명 템플릿 복사
struct time 구조체 변수 두 개를 인자로 받아, 두 시간의 합을 struct time 변수로 반환하는 함수
`sum_time`을 작성하시오.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.

단, 각 시간 성분은 다음 규칙을 만족한다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct time
{
	int hour;
	int minute;
	int second;
};

// 이 위로 수정 금지

// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
	struct time t1, t2;
	scanf("%d:%d:%d", &t1.hour, &t1.minute, &t1.second);
	scanf("%d:%d:%d", &t2.hour, &t2.minute, &t2.second);

	struct time sum = sum_time(t1, t2);

	printf("%02d:%02d:%02d\n", sum.hour, sum.minute, sum.second);

	return 0;
}
입력 설명

 (정수) : 시
 (정수) : 분
 (정수) : 초

출력 설명
입력한 두 시간을 더한 결과를 출력한다.
입력 예시 복사
14:50:23
10:31:21
출력 예시 복사
25:21:44
*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct time
{
	int hour;
	int minute;
	int second;
};

// 이 위로 수정 금지

struct time sum_time(struct time t1, struct time t2) {

	struct time new;
	int total_seconds = t1.second + t2.second;
	new.second = total_seconds % 60;  // 초의 나머지
	int carry_minutes = total_seconds / 60;  // 초에서 발생한 올림

	// 분 계산
	int total_minutes = t1.minute + t2.minute + carry_minutes;
	new.minute = total_minutes % 60;  // 분의 나머지
	int carry_hours = total_minutes / 60;  // 분에서 발생한 올림

	// 시간 계산
	int total_hours = t1.hour + t2.hour + carry_hours;
	new.hour = total_hours;  // 24시간 형식
	return new;
}

// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
	struct time t1, t2;
	scanf("%d:%d:%d", &t1.hour, &t1.minute, &t1.second);
	scanf("%d:%d:%d", &t2.hour, &t2.minute, &t2.second);

	struct time sum = sum_time(t1, t2);

	printf("%02d:%02d:%02d\n", sum.hour, sum.minute, sum.second);

	return 0;
}

#endif

// B 2차원 배열 동적할당
/*
문제 B: 2차원 배열 동적할당숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：79
통과：49
문제 설명 템플릿 복사
 배열을 동적할당 받아 입력한 배열을 모두 저장하고 다시 출력하는 프로그램을 완성하시오.

**주의**
작성 허용한 부분 안에만 작성할 것.
제공한 템플릿에 수정이 있으면 오답처리.
위 사항을 준수하지 않을 경우 부정행위로 간주함.

적절한 동적할당 코드가 아니거나 해제하지 않으면 오답 또는 감점 처리함.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	unsigned int **data = NULL;
	unsigned int N, M;
	scanf("%u %u", &N, &M);

	// 이 사이에 코드 작성 1

	// 이 사이에 코드 작성 1

	for (size_t i = 0; i < N; i++)
	{
		for (size_t ii = 0; ii < M; ii++)
		{
			scanf("%u", &data[i][ii]);
		}
	}

	for (size_t i = 0; i < N; i++)
	{
		for (size_t ii = 0; ii < M; ii++)
		{
			printf("%u%c", data[i][ii], ii == M - 1 ? '\n' : ' ');
		}
	}

	// 이 사이에 코드 작성 2

	// 이 사이에 코드 작성 2

	return 0;
}
입력 설명


 (정수) : 입력할 배열의 행의 개수
 (정수) : 입력할 배열의 열의 개수
 (정수) : 입력하는 배열의 요소

출력 설명
입력한 배열을 그대로 출력한다.
입력 예시 복사
1 1
10
출력 예시 복사
10
*/
#if 0r

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const* argv[])
{
	unsigned int** data = NULL;
	unsigned int N, M;
	scanf("%u %u", &N, &M);

	// 이 사이에 코드 작성 1

	data = (unsigned int**)malloc(N * sizeof(unsigned int*));
	for (size_t i = 0; i < N; i++) {
		data[i] = (unsigned int*)malloc(M * sizeof(unsigned int)); // 열 메모리 할당
	}

	// 이 사이에 코드 작성 1

	for (size_t i = 0; i < N; i++)
	{
		for (size_t ii = 0; ii < M; ii++)
		{
			scanf("%u", &data[i][ii]);
		}
	}

	for (size_t i = 0; i < N; i++)
	{
		for (size_t ii = 0; ii < M; ii++)
		{
			printf("%u%c", data[i][ii], ii == M - 1 ? '\n' : ' ');
		}
	}

	// 이 사이에 코드 작성 2

	for (size_t i = 0; i < N; i++) {
		free(data[i]); // 각 행 메모리 해제
	}
	free(data);

	// 이 사이에 코드 작성 2

	return 0;
}

#endif

// C 포인터 배열 like 2차원 배열
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지

void set_ptrarr(unsigned int arr[], unsigned int* parr[]) {
	for (size_t i = 0; i < 3; i++) {
		parr[i] = arr + (i * 3); // 각 행의 시작 주소를 저장
	}
}

// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
	unsigned int arr[9] = { 0 };
	unsigned int* parr[3] = { 0 };

	set_ptrarr(arr, parr);

	for (size_t i = 0; i < 9; i++)
		scanf("%u", arr + i);

	for (size_t i = 0; i < 3; i++)
		for (size_t ii = 0; ii < 3; ii++)
			printf("%u%c", parr[i][ii], ii == 2 ? '\n' : ' ');

	return 0;
}


#endif

// D 문자열 정렬 2
/*
문제 D: 문자열 정렬 2숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：62
통과：31
문제 설명 템플릿 복사
주어진 여러 개의 문자열을 사전 순서대로 정렬하여 출력하는 함수
`sort_str`을 작성하시오.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지

// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
	unsigned int N;
	char data[100][100] = {0};
	scanf("%u", &N);
	for (size_t i = 0; i < N; i++)
		scanf("%s", data[i]);

	sort_str(data, N);

	for (size_t i = 0; i < N; i++)
		printf("%s\n", data[i]);

	return 0;
}
입력 설명

 (정수) : 입력할 문자열의 개수
 (문자열) : 사전순으로 정렬할 문자열

단, 알파벳으로 이루어진 문자열만 입력한다.
출력 설명
입력한 문자열들을 사전순으로 정렬한 결과를 줄바꿈으로 구분하여 출력한다.
입력 예시 복사
5
a
A
z
B
BS
출력 예시 복사
A
B
BS
a
z
Hint
모든 대문자가 모든 소문자보다 아스키값이 작기 때문에 앞에 위치한다.
*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지


void sort_str(char data[100][100], unsigned int n) {
	char temp[100];  // 문자열 교환을 위한 임시 변수

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			int k = 0;
			// 문자열 비교
			while (data[i][k] == data[j][k] && data[i][k] != '\0' && data[j][k] != '\0') {
				k++;
			}
			// 비교 결과가 data[i]가 더 크면 두 문자열을 교환
			if (data[i][k] > data[j][k]) {
				// 문자열 교환
				for (int m = 0; m < 100; m++) {
					temp[m] = data[i][m];
					data[i][m] = data[j][m];
					data[j][m] = temp[m];
				}
			}
		}
	}
}

// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
	unsigned int N;
	char data[100][100] = { 0 };
	scanf("%u", &N);
	for (size_t i = 0; i < N; i++)
		scanf("%s", data[i]);

	sort_str(data, N);

	for (size_t i = 0; i < N; i++)
		printf("%s\n", data[i]);

	return 0;
}


#endif

// F 문자열 정렬 3
/*
문제 F: 문자열 정렬 3숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：cu29
제출：31
통과：21
문제 설명 템플릿 복사
주어진 여러 개의 문자열을 사전 순서대로 정렬하는 함수
`sort_str`을 작성하시오.

단, 문자열을 저장한 방식에 유의할 것.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 이 위로 수정 금지

// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
	unsigned int N;
	char *data[100] = {0};
	scanf("%u", &N);
	for (size_t i = 0; i < N; i++)
	{
		int tmp = 0;
		scanf("%d", &tmp);
		data[i] = (char *)malloc((tmp + 1) * sizeof(char));
		scanf(" %s", data[i]);
	}

	sort_str(data, N);

	for (size_t i = 0; i < N; i++)
		printf("%s\n", data[i]);

	for (size_t i = 0; i < N; i++)
	{
		free(data[i]);
		data[i] = (char *)NULL;
	}

	return 0;
}
입력 설명

 (정수) : 입력할 문자열의 개수
 (문자열) : 사전순으로 정렬할 문자열
 (정수) :
의 길이

단, 알파벳으로 이루어진 문자열만 입력한다.
출력 설명
입력한 문자열들을 사전순으로 정렬한 결과를 줄바꿈으로 구분하여 출력한다.
입력 예시 복사
5
1 a
1 A
1 z
1 B
2 BS
출력 예시 복사
A
B
BS
a
z
Hint
모든 대문자가 모든 소문자보다 아스키값이 작기 때문에 앞에 위치한다.
*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 이 위로 수정 금지

void sort_str(char* data[], unsigned int n) {
	char* temp; // 문자열 교환을 위한 임시 변수

	for (unsigned int i = 0; i < n - 1; i++) {
		for (unsigned int j = i + 1; j < n; j++) {
			int k = 0;
			// 문자열 비교 (사전순으로 비교)
			while (data[i][k] == data[j][k] && data[i][k] != '\0' && data[j][k] != '\0') {
				k++;
			}
			// 비교 결과가 data[i]가 더 크면 두 문자열을 교환
			if (data[i][k] > data[j][k]) {
				// 문자열 교환
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
}

// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
	unsigned int N;
	char* data[100] = { 0 };
	scanf("%u", &N);
	for (size_t i = 0; i < N; i++)
	{
		int tmp = 0;
		scanf("%d", &tmp);
		data[i] = (char*)malloc((tmp + 1) * sizeof(char));
		scanf(" %s", data[i]);
	}

	sort_str(data, N);

	for (size_t i = 0; i < N; i++)
		printf("%s\n", data[i]);

	for (size_t i = 0; i < N; i++)
	{
		free(data[i]);
		data[i] = (char*)NULL;
	}

	return 0;
}

#endif

// G 많은 패리티 비트 2
/*
문제 G: 많은 패리티 비트 2숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：cu29
제출：72
통과：32
문제 설명 템플릿 복사
unsigned char 4칸을 인자로 받아, 각 바이트의 패리티 비트를 SET 또는 CLEAR하는 함수
`set_parityBit_arr`를 작성하시오.

각 바이트의 7번 비트를 홀수 패리티 비트로 설정한다.
다시 말해, 각 바이트에 비트 1은 홀수개 존재해야한다.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지

// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
	unsigned char data[4] = {0};

	scanf("%hhu %hhu %hhu %hhu", data, data + 1, data + 2, data + 3);

	set_parityBit_arr(data);

	printf("%u %u %u %u", data[0], data[1], data[2], data[3]);

	return 0;
}
입력 설명

 (정수) : 처리할 데이터

출력 설명
각 바이트의 패리티 비트를 수정한 결과를 10진수로 출력한다.
입력 예시 복사
1 3 7 15
출력 예시 복사
1 131 7 143
*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지


int result(int a, int b, int c, int d, int e, int f, int g, int h) {
	int n = a * 128 + b * 64 + c * 32 + d * 16 + e * 8 + f * 4 + g * 2 + h;
	return n;
}

void set_parityBit_arr(unsigned char data[]) {

	int n[8];
	int num[8];

	for (int i = 0; i < 4; i++) {
		n[i] = data[i] - '0';
	}

	for (int i = 0; i < 4; i++) {
		int cnt = 0;
		int k = n[i];
		for (int j = 7; j >= 0; j--) {
			if ((k & 1) == 1) {
				cnt++;
			}
			num[j] = k & 1;
			k = k >> 1;
		}

		if (cnt % 2 == 0) {
			data[i] = result(1, num[6], num[5], num[4], num[3], num[2], num[1], num[0]) + '0';
			//data[i] = result(1, num[1], num[2], num[3], num[4], num[5], num[6], num[7]) + '0';
		}
		else if (cnt % 2 != 0) {
			//data[i] = result(num[0], num[1], num[2], num[3], num[4], num[5], num[6], num[7]) + '0';
			data[i] = result(num[7], num[6], num[5], num[4], num[3], num[2], num[1], num[0]) + '0';
		}

	}
}


// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
	unsigned char data[4] = { 0 };

	scanf("%hhu %hhu %hhu %hhu", data, data + 1, data + 2, data + 3);

	set_parityBit_arr(data);

	printf("%u %u %u %u", data[0], data[1], data[2], data[3]);

	return 0;
}

#endif

// G 답
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지

// 패리티 비트를 설정하는 함수
void set_parityBit_arr(unsigned char data[]) {
	for (int i = 0; i < 4; i++) {
		unsigned char byte = data[i];
		int cnt = 0;

		// 바이트에서 1의 개수를 셈
		for (int j = 0; j < 8; j++) {
			if ((byte & 1) == 1) {
				cnt++;
			}
			byte = byte >> 1;
		}

		// 만약 1의 개수가 짝수라면 7번 비트를 반전시킴
		if (cnt % 2 == 0) {
			data[i] ^= 0x80;  // 0x80은 1000 0000, XOR을 사용해 7번 비트를 반전
		}
		// 만약 1의 개수가 홀수라면 7번 비트는 그대로 둠
	}
}


// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
	unsigned char data[4] = { 0 };

	scanf("%hhu %hhu %hhu %hhu", data, data + 1, data + 2, data + 3);

	set_parityBit_arr(data);

	printf("%u %u %u %u", data[0], data[1], data[2], data[3]);

	return 0;
}

#endif

