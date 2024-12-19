#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// A 비트 1의 개수1
#if 0

int main() {

	unsigned int n;
	scanf("%u", &n);

	unsigned int cnt = 0;
	unsigned int k = n;

	while (1) {
		if (n == 0) {
			break;
		}

		if (n % 2 == 1) {
			cnt++;
		}
		n = n / 2;
	}

	printf("%u", cnt);

	return 0;
}

#endif



// B 2가지 NOT
#if 0

int main() {

	int n;
	scanf("%d", &n);

	int no = ~n;
	for (int i = 31; i >= 0; i--) {
		printf("%d", (no >> i) & 1);
	}

	printf("\n");

	int k = !n;
	printf("%d", k);


	return 0;
}

#endif

#if 0

int main() {
	unsigned int A = 0;
	char c;

	// 32비트 이진수 입력 받기
	for (int i = 0; i < 32; i++) {
		c = getchar();
		A = (A << 1) | (c - '0');  // 이진수를 정수로 변환
	}

	// 첫째 줄: A의 비트 NOT 연산 결과 출력
	unsigned int k = ~A;
	for (int i = 31; i >= 0; i--) {
		printf("%d", (k >> i) & 1);  // 각 비트를 출력
	}
	printf("\n");

	// 둘째 줄: A의 논리 NOT 연산 결과 출력 (0이면 1, 그 외는 0)
	printf("%d\n", !A);

	return 0;
}

#endif

// C 파형 그리기
#if 0

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int k;
		scanf("%d", &k);

		for (int j = 7; j >= 0; j--) {
			if (((k >> j) & 1) == 0) {
				printf("_");
			}
			else{
				printf("-");
			}
		}
	}

	return 0;
}

#endif

// D 4등분
#if 0

int main() {

	unsigned int n;
	scanf("%X", &n);

	for (int i = 0; i < 4; i++) {
		unsigned int k = (0xFF & n);
		printf("%X ", k);
		n >>= 8;
	}

	return 0;
}

#endif

// E qwerty
#if 0

void qwerty(int n) {

	if (n == 1) {
		printf("q");
	}
	else if (n == 2) {
		printf("w");
	}
	else if (n == 3) {
		printf("e");
	}
	else if (n == 4) {
		printf("r");
	}
	else if (n == 5) {
		printf("t");
	}
	else if (n == 6) {
		printf("y");
	}
	else if (n == 7) {
		printf("u");
	}
	else if (n == 8) {
		printf("i");
	}
	else if (n == 9) {
		printf("o");
	}
	else if (n == 0) {
		printf("p");
	}
	else if (n == '*') {
		printf("");
	}

}


int main() {


	unsigned int n;
	scanf("%u", &n);

	if (n == 0) {
		// 입력이 0일 때 'p' 출력
		printf("p\n");
		return 0;
	}

	unsigned int num[11];

	for (int i = 0; i < 11; i++) {
		num[i] = 10;
	}

	int index = 10;
	if (n == 0) {
		num[index] = 0;  // 입력이 0인 경우 처리
	}
	else {
		while (n > 0) {
			num[index] = n % 10;
			n /= 10;
			index--;
		}
	}

	for (int i = index+1; i < 11; i++) {
		qwerty(num[i]);
	}

	return 0;
}


#endif

// F 컴퓨터의 삶
#if 0

void print_binary(unsigned int num) {
	for (int i = 31; i >= 0; i--) {
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
}

void print_logical_result(int result) {
	printf("%d\n", result);
}


int main() {

	unsigned int a;
	unsigned int b; 
	scanf("%u", &a);
	scanf("%u", &b);

	unsigned int bitand = a & b;
	print_binary(bitand);
	unsigned int bitor = a | b;
	print_binary(bitor );
	unsigned int bitxor = a ^ b;
	print_binary(bitxor);
	unsigned int bitand1 = a && b;
	print_logical_result(bitand1);
	unsigned int bitor1 = a || b;
	print_logical_result(bitor1);

	return 0;
}

#endif

#if 0


int main() {
	


	return 0;
}

#endif

#if 0
#include <stdio.h>

void print_binary(unsigned int num) {
	// 32비트 2진수로 출력
	for (int i = 31; i >= 0; i--) {
		printf("%d", (num >> i) & 1);  // 해당 비트가 1인지 0인지 확인하여 출력
	}
	printf("\n");
}

int main() {
	unsigned int a, b;

	// 두 개의 32비트 숫자를 입력받음
	scanf("%u", &a);  // 32비트 정수 A 입력
	scanf("%u", &b);  // 32비트 정수 B 입력

	// 1. 비트 AND 결과 출력
	print_binary(a & b);

	// 2. 비트 OR 결과 출력
	print_binary(a | b);

	// 3. 비트 XOR 결과 출력
	print_binary(a ^ b);

	// 4. 논리 AND 결과 출력 (0이 아니면 참(1), 둘 다 참이어야만 1)
	printf("%d\n", (a && b));

	// 5. 논리 OR 결과 출력 (둘 중 하나라도 0이 아니면 참(1))
	printf("%d\n", (a || b));

	return 0;
}

#endif

#if 0

#include <stdio.h>

#define BITS 32  // 32비트

// 이진수 문자열을 정수로 변환하는 함수
unsigned int binary_to_int(char binary_str[]) {
	unsigned int result = 0;
	for (int i = 0; i < BITS; i++) {
		result = result * 2 + (binary_str[i] - '0');
	}
	return result;
}

// 32비트 정수를 2진수로 출력하는 함수
void print_binary(unsigned int num) {
	for (int i = BITS - 1; i >= 0; i--) {
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
}

int main() {
	char a[BITS + 1], b[BITS + 1];  // 32비트 이진수 문자열 + 널 문자

	// 이진수 문자열 입력
	scanf("%s", a);
	scanf("%s", b);

	// 이진수 문자열을 정수로 변환
	unsigned int A = binary_to_int(a);
	unsigned int B = binary_to_int(b);

	// 1. 비트 AND 결과 출력
	print_binary(A & B);

	// 2. 비트 OR 결과 출력
	print_binary(A | B);

	// 3. 비트 XOR 결과 출력
	print_binary(A ^ B);

	// 4. 논리 AND 결과 출력 (0이 아니면 참(1), 둘 다 참이어야만 1)
	printf("%d\n", (A && B));

	// 5. 논리 OR 결과 출력 (둘 중 하나라도 0이 아니면 참(1))
	printf("%d\n", (A || B));

	return 0;
}


#endif




// G 최소 공배수
#if 0


#include <stdio.h>

// 최대공약수(GCD)를 구하는 함수
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

// 최소공배수(LCM)를 구하는 함수
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	// LCM 계산 및 출력
	printf("%d",lcm(num1, num2));

	return 0;
}

#endif

// H 문자열 검색 2
#if 0

int main() {

	char word[101];
	gets(word);

	char search[101];
	gets(search);

	int count = 0;

	int len_word = 0, len_search = 0;

	// Calculate the length of word
	while (word[len_word] != '\0') {
		len_word++;
	}

	// Calculate the length of search
	while (search[len_search] != '\0') {
		len_search++;
	}

	for (int i = 0; i <= len_word - len_search; i++) {
		int j;
		for (j = 0; j < len_search; j++) {
			if (word[i + j] != search[j]) {
				break;
			}
		}
		if (j == len_search) {
			count++;
		}
	}

	// Output the count
	printf("%d", count);


	return 0;
}

#endif

// I 파형 읽어내기
#if 0

int main() {

	int n;
	scanf("%d", &n);
	int round = 1;

	while (1) {
		if (round == n) {
			break;
		}

		char c[81];
		for (int i = 0; c[i]!='\0'; i++) {
			scanf("%c", &c[i]);
		}

		int decimal = 0;

		// 이진수 변환
		for (int i = 0; i<8; i++) {
			if (c[i] == '-') {
				decimal = decimal * 2 + 1;
			}
			else if (c[i] == '_') {
				decimal = decimal * 2 + 0;
			}
		}

		// 결과 출력
		printf("Decimal value: %d\n", decimal);

		char copy[80];
		for (int i = 0; i < 80; i++) {
			for (int j = 8; j < 80; j++) {
				copy[i] = c[j];
			}
		}

		for (int i = 0; i < 80; i++) {
			c[i] = copy[i];
		}


		round++;
	}
	
	return 0;
}

#endif

#if 0
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	 // 개행 문자를 소비 (scanf 후에 남아있는 개행 문자를 처리)

	for (int round = 0; round < n; round++) {
		char c[9]; // 8개의 문자 + NULL 문자
		for (int i = 0; i < 8; i++) {
			scanf("%c", &c[i]); // 한 문자씩 입력받기
		}
		c[8] = '\0'; // 문자열의 끝을 명시

		int decimal = 0;

		// 앞의 8개 문자만 이진수로 변환
		for (int i = 0; i < 8; i++) {
			if (c[i] == '-') {
				decimal = decimal * 2 + 1;
			}
			else if (c[i] == '_') {
				decimal = decimal * 2 + 0;
			}
		}

		// 결과 출력
		printf("%d ", decimal);
	}

	printf("\n");

	return 0;
}


#endif


// J 비트 1의 개수 2
#if 0
int count_ones_in_byte(int byte) {
	int count = 0;
	for (int i = 0; i < 8; i++) {  // 한 바이트(8비트)를 검사
		if (byte & (1 << i)) {
			count++;
		}
	}
	return count;
}

int main() {

	unsigned int n;
	scanf("%u", &n);

	for (int i = 3; i >=0; i--) {
		int current_byte = (n >> (i * 8)) & 0xFF;  // 오른쪽으로 i*8 비트 이동하여 현재 바이트 추출
		printf("%d ",count_ones_in_byte(current_byte));
	}

	return 0;
}

#endif






