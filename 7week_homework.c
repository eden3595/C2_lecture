#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




// E
/*
문제 E: C언어 배열 해부학 12숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：104
통과：31
문제 설명
배열의 시작 주소가 0x1000번지이며, char 자료형의
차원 배열 arr가 존재할 때,
특정 인덱스의 주소를 출력하는 프로그램을 작성하시오.
단, 계산한 주소는
 미만이다.
입력 설명

 (정수) : arr의 차원의 개수
 (정수) : 각 차원의 크기
 (정수) : 각 차원에 대입할 인덱스

출력 설명
arr[
][
]
[
]의 주소를 대문자 16진수로 출력한다.
입력 예시 복사
3
2 3 4
0 1 3
출력 예시 복사
1007
Hint
arr[
][
]
[
]

*/

#if 0

int main() {

	int n;
	scanf("%d", &n);

	int array[101];

	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	int num[101];

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	unsigned int address = 0x1000;

	for (int i = 0; i < n; i++) {
		int k = 1;
		for (int j = i+1; j < n; j++) {
			k = k * array[j];
		}
		address += num[i] * k;
	}

	printf("%X", address);
	return 0;
}

#endif

#if 0

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);  // 차원 수 입력

	int size[101];  // 각 차원의 크기를 저장
	for (int i = 0; i < n; i++) {
		scanf("%d", &size[i]);  // 각 차원의 크기 입력
	}

	int index[101];  // 각 차원의 인덱스를 저장
	for (int i = 0; i < n; i++) {
		scanf("%d", &index[i]);  // 각 차원의 인덱스 입력
	}

	unsigned int address = 0x1000;  // 기본 주소 설정

	// 주소 계산
	for (int i = 0; i < n; i++) {
		int k = 1;
		// 현재 차원의 크기에 따라 다음 차원의 크기를 곱합니다.
		for (int j = i + 1; j < n; j++) {
			k *= size[j];  // k를 다음 차원의 크기로 업데이트
		}
		// 주소를 업데이트합니다.
		address += index[i] * k;  // 해당 차원 인덱스를 곱하여 주소에 추가
	}

	printf("%X\n", address);  // 16진수 출력
	return 0;
}


#endif


// F 문자열 swap
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap_str(char* str1, char* str2)
{
	// 이 위로 수정 금지
	char tmp[104] = { 0 };
	for (int i = 0; str1[i] != '\0'; i++) {
		tmp[i] = str1[i];
	}
	for (int i = 0; str1[i] != '\0'; i++) {
		str1[i] = 0;
	}
	for (int i = 0; str2[i] != '\0'; i++) {
		str1[i] = str2[i];
	}
	for (int i = 0; str1[i] != '\0'; i++) {
		str2[i] = 0;
	}
	for (int i = 0; tmp[i] !=0; i++) {
		str2[i] = tmp[i];
	}
	// 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
	char str1[104] = { 0 };
	char str2[104] = { 0 };
	scanf("%[^\n]\n", str1);
	scanf("%[^\n]", str2);

	swap_str(str1, str2);

	printf("%s\n%s", str1, str2);
	return 0;
}


#endif


// I my_atoi
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int my_atoi(char* str)
{
	// 이 위로 수정 금지
	int cnt = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		cnt++;
	}
	int number = 0;
	for (int i = 0; i < cnt; i++) {
		number = number * 10 + (str[i] - '0');
	}
	return number;

	// 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
	char S[101] = { 0 };

	scanf("%s", S);

	printf("%d", my_atoi(S));

	return 0;
}



#endif

// J my_strstr

#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* my_strstr(char* str1, char* str2)
{
	// 이 위로 수정 금지
	int cnt = 0;
	int cnt1 = 0;
	for (int i = 0; str2[i] != '\0'; i++) {
		cnt++;
	}
	for (int i = 0; str1[i] != '\0'; i++) {
		cnt1++;
	}

	

	// 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
	char S1[104] = { 0 };
	char S2[104] = { 0 };

	fgets(S1, 100, stdin);
	fgets(S2, 100, stdin);

	char* p = my_strstr(S1, S2);

	if (p != NULL)
		printf("%ld", p - S1);
	else
		printf("-1");

	return 0;
}

#endif


// G
/*
문제 G: 유사도 검사숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：93
통과：49
문제 설명
두 문자열을 인자로 받고, 두 문자열의 유사도를 반환하는 함수strSimilarity를 작성하시오.

유사도를 구하는 방법은 다음과 같다.
1. 같은 위치(인덱스)에 있는 문자가 일치하는 개수를 센다.
2. 더 긴 문자열의 길이를 센다.
3. 1의 결과에 100을 곱하고, 2의 결과로 나눈다. 단, 정수의 나눗셈을 한다. (소수점 아래를 버림)

반환하는 유사도의 자료형은 제공하는 템플릿을 보고 유추할 것.

**주의**
수정 가능한 부분만 수정할 것.
입출력 함수를 제외한 모든 함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지

// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
	char str1[101] = {0}, str2[101] = {0};
	scanf("%[^\n]\n", str1);
	scanf("%[^\n]", str2);

	unsigned int similarity = strSimilarity(str1, str2);
	printf("%u%%", similarity);

	return 0;
}
입력 설명

(문자열): 처리할 문장

출력 설명
문자열
와
의 유사도를 소수점 없이 출력한다.
입력 예시 복사
WAKE
MAKE
출력 예시 복사
75%

*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지
int strSimilarity(char *str1, char *str2) {

	int count = 0;
	int what = 0;
	int small = 0;
	int a = 0;
	int b = 0;
	for (int i = 0; str1[i] != '\0'; i++) {
		a++;
	}
	for (int i = 0; str2[i] != '\0'; i++) {
		b++;
	}
	if (a > b) {
		what = a;
		small = b;
	}
	else {
		what = b;
		small = a;
	}
	for (int i = 0; i < small; i++) {
		if (str1[i] == str2[i]) {
			count++;
		}
	}
	int answer = 0;
	answer = count * 100 / what;
	return answer;
}
// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
	char str1[101] = { 0 }, str2[101] = { 0 };
	scanf("%[^\n]\n", str1);
	scanf("%[^\n]", str2);

	unsigned int similarity = strSimilarity(str1, str2);
	printf("%u%%", similarity);

	return 0;
}



#endif

// D my_strchr
/*
문제 D: my_strchr숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：237
통과：88
문제 설명
strchr는 C언어의 표준 라이브러리인 <string.h>에 선언되어 있는 함수이다.

이 함수는 char *로 받은 문자열 str에서 가장 먼저 나타나는 특정 문자(character)의 주소를 반환한다.
만약 문자열에 특정 문자가 없다면, null 포인터를 반환한다.
이 함수를 직접 구현하시오.

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
	char S[101] = {0};
	char C;

	scanf("%[^\n]", S);
	scanf(" %c", &C);

	char *p = my_strchr(S, C);

	if (p != NULL)
		printf("%ld", p - S);
	else
		printf("-1");

	return 0;
}




입력 설명

 (문자열) : 처리할 문장
 (문자) : 특정 문자

출력 설명
검색된 문자의 인덱스를 출력한다.
만약 해당 문자가 없으면, -1을 출력한다.
입력 예시 복사
My name is EMD.
M
출력 예시 복사
0
*/
#if 0


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지
char* my_strchr(char* S, char c) {

	
	for (int i = 0; S[i] != '\0'; i++) {
		if (S[i] == c) {
			return &S[i];
		}
	}

	return NULL;

}
// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
	char S[101] = { 0 };
	char C;

	scanf("%[^\n]", S);
	scanf(" %c", &C);

	char* p = my_strchr(S, C);

	if (p != NULL)
		printf("%ld", p - S);
	else
		printf("-1");

	return 0;
}

#endif


// J
/*

문제 J: my_strstr숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：179
통과：53
문제 설명
strstr은 C언어의 표준 라이브러리인 <string.h>에 선언되어 있는 함수이다.
이 함수는 char *로 받은 문자열 str1에서 가장 먼저 나타나는 특정 문자열(str2)의 주소를 반환한다.
만약 문자열에 특정 문자열이 온전히 포함되지 않았다면, null 포인터를 반환한다.
이 함수를 직접 구현하시오.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char *my_strstr(char *str1, char *str2)
{
	// 이 위로 수정 금지

	// 이 아래로 수정 금지
}

int main(int argc, char const *argv[])
{
	char S1[104] = {0};
	char S2[104] = {0};

	fgets(S1, 100, stdin);
	fgets(S2, 100, stdin);

	char *p = my_strstr(S1, S2);

	if (p != NULL)
		printf("%ld", p - S1);
	else
		printf("-1");

	return 0;
}
입력 설명

 (문자열) : 처리할 문장
 (문자열) : 검색할 문장

출력 설명
검색된 문자열의 인덱스를 출력한다.
만약 해당 문자열이 없으면, -1을 출력한다.
입력 예시 복사
My name is EMD.
is
출력 예시 복사
8
*/
#if 0


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* my_strstr(char* str1, char* str2)
{
	// 이 위로 수정 금지
	int cnt = 0;
	for (int j = 0; str2[j] != '\0' && str2[j] != '\n'; j++) {
		cnt++;
	}
	for (int i = 0; str1[i] != '\0'; i++) {
		if (str2[0] == str1[i]) {
			int right = 0;
			for (int k = 0; k < cnt; k++) {
				if (str2[k] != str1[i + k]) {
					right = 1;
					break;
				}
			}
			if (right == 0) {
				return &str1[i];
			}
		}
	}

	return NULL;
	// 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
	char S1[104] = { 0 };
	char S2[104] = { 0 };

	fgets(S1, 100, stdin);
	fgets(S2, 100, stdin);

	char* p = my_strstr(S1, S2);

	if (p != NULL)
		printf("%ld", p - S1);
	else
		printf("-1");

	return 0;
}

#endif

// H 햄버거
/*
문제 H: 햄버거숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：78
통과：48
문제 설명
입력받은 문자열에서 앞뒤로 가장 인접한 문자가 서로 같을 경우, 가운데 문자를 'x'로 바꾸는 코드를 작성하시오.
단, 위의 과정을 문자열의 모든 위치에서 동시에 실행한다.
입력 설명

 (문자열) : 처리할 문장

출력 설명
변형한 문자열을 출력한다.
입력 예시 복사
aaabaaaa
출력 예시 복사
axaxaxxa
*/

#if 0

int main() {

	char word[101];
	gets(word);

	int prev = word[0];
	int next = word[2];
	for (int i = 1; word[i] != '\0'; i++) {
		if (prev == next) {
			prev = word[i];
			next = word[i + 2];
			word[i] = 'x';
		}
		else {
			prev = word[i];
			next = word[i + 2];
		}
		
	}

	for (int i = 0; word[i] != '\0'; i++) {
		printf("%c", word[i]);
	}

	return 0;
}

#endif

#if 0

int check(char s[]) {

	for (int i = 0; i < 12; i++) {
		if (s[i] == '@') {
			return i;
		}
	}
	return 13;
}

int main() {

	char s1[13], s2[13], s3[13], s4[13], s5[13];
	char s6[13], s7[13], s8[13], s9[13], s10[13], s11[13];


	gets(s1);
	gets(s2);
	gets(s3);
	gets(s4);
	gets(s5);
	gets(s6);
	gets(s7);
	gets(s8);
	gets(s9);
	gets(s10);
	gets(s11);

	int a = -1;  // 찾은 위치의 문자열을 저장
	int b = -1;  // 찾은 위치에서 '@'의 인덱스를 저장

	// '@'가 포함된 문자열을 찾음
	for (int i = 0; i < 12; i++) {
		int currentCheck = check(s1 + i); // 각 문자열에 대해 check 함수 호출
		if (currentCheck < 12) {
			a = i;
			b = currentCheck;
			break;  // 첫 번째 발견된 '@' 위치에서 종료
		}
	}

	// '@' 문자가 발견되었을 경우에만 실행
	if (b != -1) {
		b = b / 2;  // '@' 위치를 2로 나눔

		// 범위에 따른 점수 계산
		int score = 0;
		if ((1 <= a && a <= 9) && (1 <= b && b <= 9)) {
			score = 1;
		}
		if (2 <= a && a <= 8 && 2 <= b && b <= 8) {
			score = 2;
		}
		if (3 <= a && a <= 7 && 3 <= b && b <= 7) {
			score = 3;
		}
		if (4 <= a && a <= 6 && 4 <= b && b <= 6) {
			score = 4;
		}
		if (a == 5 && b == 5) {
			score = 5;
		}

		printf("%d", score);
	}



	return 0;
}

#endif

// A 양궁 채점 1
/*

문제 A: 양궁 채점1숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：171
통과：71
문제 설명
11x11 크기의 양궁 과녁과 과녁에 꽂힌 화살의 위치가 주어졌을 때,

선수가 얻은 점수를 계산하는 프로그램을 작성하시오.

과녁은 다음과 같은 방식으로 점수가 매겨진다.
 과녁은 11x11 크기의 격자판으로 이루어져 있으며, 각 위치는 특정한 점수를 가진다.
 점수는 과녁의 중심에서 멀어질수록 낮아진다.
 과녁의 점수 분포는 아래와 같다.





꽂히지 않은 부분은 'O'으로, 화살이 꽂힌 부분은 '@'로 표현한다.
단, 화살은 하나만 꽂혀있다.
입력 설명


 (문자): 11*11 행렬의 요소, 'O' 또는 '@'이다.

출력 설명
선수가 얻은 점수를 출력한다.
입력 예시 복사
O O O O O O O O O O O
O O O O O O O O O O O
O O O O O O O O O O O
O O O O O O O O O O O
O O O O O O O O O O O
O O O O O @ O O O O O
O O O O O O O O O O O
O O O O O O O O O O O
O O O O O O O O O O O
O O O O O O O O O O O
O O O O O O O O O O O
출력 예시 복사
5

*/

#if 0

int check(char s[]) {

	for (int i = 0; i < 24; i++) {
		if (s[i] == '@') {
			return i;
		}
	}
	return 25;
}

int main() {

	char s1[24], s2[24], s3[24], s4[24], s5[24];
	char s6[24], s7[24], s8[24], s9[24], s10[24], s11[24];


	gets(s1);
	gets(s2);
	gets(s3);
	gets(s4);
	gets(s5);
	gets(s6);
	gets(s7);
	gets(s8);
	gets(s9);
	gets(s10);
	gets(s11);

	int a = 0;
	int b = 0;

	if (check(s1) < 25) {
		a = 0;
		b = check(s1);
	}
	else if (check(s2) < 25) {
		a = 1;
		b = check(s2);
	}
	else if (check(s3) < 25) {
		a = 2;
		b = check(s3);
	}
	else if (check(s4) < 25) {
		a = 3;
		b = check(s4);
	}
	else if (check(s5) < 25) {
		a = 4;
		b = check(s5);
	}
	else if (check(s6) < 25) {
		a = 5;
		b = check(s6);

	}
	else if (check(s7) < 25) {
		a = 6;
		b = check(s7);
	}
	else if (check(s8) < 25) {
		a = 7;
		b = check(s8);
	}
	else if (check(s9) < 25) {
		a = 8;
		b = check(s9);
	}
	else if (check(s10) < 25) {
		a = 9;
		b = check(s10);
	}
	else if (check(s11) < 25) {
		a = 10;
		b = check(s11);
	}

	int score = 0;
	b = b / 2;

	if ((1 <= a && a <= 9) && (1 <= b && b <= 9)) {
		score = 1;
	}
	if (2 <= a && a <= 8 && 2 <= b && b <= 8) {
		score = 2;
	}
	if (3 <= a && a <= 7 && 3 <= b && b <= 7) {
		score = 3;
	}
	if (4 <= a && a <= 6 && 4 <= b && b <= 6) {
		score = 4;
	}
	if (a == 5 && b == 5) {
		score = 5;
	}
	printf("%d", score);


	return 0;
}

#endif

// B 알파벳 카운트 with bit
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int buildBitmask(char* str)
{
	unsigned int bitmask = 0;
	// 이 위로 수정 금지
	
	for (int i = 0; str[i] != '\0'; i++) {
		bitmask |= (1 << (str[i] - 'a'));
	}

	// 이 아래로 수정 금지
	return bitmask;
}

int main(int argc, char const* argv[])
{
	char str[104] = { 0 };
	unsigned int bitmask = 0;
	scanf("%s", str);
	bitmask = buildBitmask(str);
	printf("%X", bitmask);
	return 0;
}


#endif


#if 0


int main() {

	int bitmask = 0;
	char word[81];
	scanf("%s", word);

	int n;
	scanf("%d", &n);
	
	for (int i = 0; word[i] != '\0'; i++) {
		if (word[i] >= 'A') {
			bitmask |= (1 << (word[i] - 'A'));
		}
		else bitmask |= (1 << (word[i]-48));
	}

	printf("%X", bitmask);
	return 0;
}


#endif

// C 큰 비트 시프트 2

/*
문제 C: 큰 비트 시프트 2숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：146
통과：64
문제 설명
기존의 비트 연산은 한 자료형 내에서 이루어지며,
1, 2, 4, 8바이트 단위로만 비트 시프트 연산이 가능하다.

10바이트 배열에 저장된 모든 비트를 오른쪽으로 시프트 연산을 할 수 있도록 구현하려고 한다.
이때, 각 바이트간 비트 이동이 연속되어야 한다.

예를 들어,  2바이트 10101010 11110000를 오른쪽으로 2비트 시프트하면
00101010 10111100이 된다.
입력 설명

 (정수) : 처리할 정수, 대문자 16진수
 (정수) : 비트 시프트 횟수

출력 설명
시프트 연산을 한 결과를 대문자 16진수로 출력한다.
입력 예시 복사
1 2 3 4 5 6 7 8 9 A
9
출력 예시 복사
0 0 81 1 82 2 83 3 84 4

*/

#if 0

	int main() {

		unsigned char arr[10] = { 0, };
		for (int i = 0; i < 10; i++) {
			scanf("%hhX", &arr[i]);
		}

		int N = 0;
		scanf("%d", &N);

		for (int j = 0; j < N; j++) {
			unsigned char next = (arr[0] & 0x1) << 7;
			arr[0] = arr[0] >> 1;
			for (int i = 1; i < 10; i++) {
				unsigned char next2 = (arr[i] & 0x1) << 7;
				arr[i] = (arr[i] >> 1) | next;
				next = next2;
			}
		}

		for (int i = 0; i < 10; i++) {
			printf("%X ", arr[i]);
		}

		return 0;
	}




#endif

