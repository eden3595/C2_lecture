#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// A : C언어 배열 해부학 2
#if 0

int main() {

	int num[200];
	int prev;
	num[0] = 0x1000;
	prev = num[0];
	for (int i = 1; i < 200; i++) {
		num[i] = prev + 4;
		prev = num[i];
	}

	int n;
	scanf("%X", &n);

	int result = 0;

	for (int i = 0; i < 200; i++) {
		if (num[i] <= n && n < num[i + 1]) {
			result = i;
			break;
		}
	}

	printf("%d", result);
	return 0;
}


#endif

// B : C언어 배열 해부학 3
#if 0

int main() {

	int a, b;
	scanf("%d %d", &a, &b);

	int arr[6][5];

	arr[0][0] = 0x1000;
	int prev = arr[0][0];
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0 && j == 0) {
				arr[i][j] = 0x1000;
			}
			else {
				arr[i][j] = prev + 4;
				prev = arr[i][j];
			}
			
		}
	}

	printf("%X", arr[a][b]);

	return 0;
}


#endif

// C : C언어 배열 해부학 4
#if 0

int main() {

	int arr[6][5];

	arr[0][0] = 0x1000;
	int prev = arr[0][0];
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0 && j == 0) {
				arr[i][j] = 0x1000;
			}
			else {
				arr[i][j] = prev + 4;
				prev = arr[i][j];
			}

		}
	}

	int n;
	scanf("%X", &n);

	int k = 0;
	int l = 0;

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			if (j == 4) {
				if (arr[i][j] <= n && arr[i+1][j] > n) {
					k = i;
					l = j;
					
				}
			}
			else {
				if (arr[i][j] <= n && arr[i][j+1] > n) {
					k = i;
					l = j;
					
				}

			}
		}
	}

	printf("%d %d", k, l);

	return 0;
}


#endif


// D : C언어 배열 해부학 5
#if 0

int main() {

	int N;
	int M;
	int A;
	int B;

	int arr[101][101];

	scanf("%d %d %d %d", &N, &M, &A, &B);

	arr[0][0] = 0x1000;
	int prev = arr[0][0];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (i == 0 && j == 0) {
				arr[i][j] = 0x1000;
			}
			else {
				arr[i][j] = prev + 4;
				prev = arr[i][j];
			}

		}
	}


	printf("%X", arr[A][B]);



	return 0;
}

#endif

// E : C언어 배열 해부학 6
#if 0

int main() {

	char T[10];
	gets(T);

	int key;

	if (T[0] == 'c') {
		key = 1;
	}
	else if (T[0] == 's') {
		key = 2;
	}
	else if (T[0] == 'i') {
		key = 4;
	}

	int N;
	int M;
	int A;
	int B;

	int arr[101][101];

	scanf("%d %d %d %d", &N, &M, &A, &B);

	arr[0][0] = 0x1000;
	int prev = arr[0][0];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (i == 0 && j == 0) {
				arr[i][j] = 0x1000;
			}
			else {
				arr[i][j] = prev + key;
				prev = arr[i][j];
			}

		}
	}


	printf("%X", arr[A][B]);




	return 0;
}


#endif

// F : 비트 1의 개수 3
#if 0

int main() {

	unsigned int a;
	int n;
	scanf("%u %d", &a, &n);

	int num[33];

	for (int i = 31; i >=0; i--) {
		num[i] = a % 2;
		a = a / 2;
	}

	
	for (int i = 0; i < 32; i = i + n) {
		int sum = 0;
		for (int j = i; j < i + n && j < 32; j++) {
			if (num[j] == 1) {
				sum++;
			}
		}
		printf("%d ", sum);
	}
	

	return 0;
}

#endif

// G : 연속된 숫자 세기
#if 0

int main() {

	unsigned int n;
	scanf("%u", &n);

	unsigned int num[100000] = { 0 };

	for (int i = 0; i < n; i++) {
		scanf("%u", &num[i]);
	}

	unsigned int index[1000000] = { 0 };

	for (int i = 0; i < n; i++) {
		if (num[i] == num[i + 1]) {
			index[num[i]]++;
		}
	}
	unsigned int max = 0;
	for (int i = 0; i < 1000000; i++) {
		if (index[i] > max) {
			max = index[i];
		}
	}

	for (int i = 0; i < 10000000; i++) {
		if (index[i] == max) {
			printf("%u", num[i]);
			break;
		}
	}

	return 0;
}

#endif

#if 0

#include <stdio.h>

int main() {
	unsigned int n;
	scanf("%u", &n);  // 처리할 정수의 개수 입력

	unsigned int num[100000];
	for (int i = 0; i < n; i++) {
		scanf("%u", &num[i]);  // 처리할 정수들 입력
	}

	unsigned int max_count = 1;  // 최대 연속 개수
	unsigned int current_count = 1;  // 현재 연속된 숫자의 개수
	unsigned int result = num[0];  // 결과값 (가장 많이 연속된 숫자)

	// 연속된 숫자를 찾는 루프
	for (int i = 1; i < n; i++) {
		if (num[i] == num[i - 1]) {
			current_count++;  // 연속되면 개수 증가
		}
		else {
			current_count = 1;  // 연속이 끊기면 초기화
		}

		// 최대 연속된 숫자와 비교하여 업데이트
		if (current_count > max_count) {
			max_count = current_count;
			result = num[i];  // 최대 연속된 숫자로 업데이트
		}
	}

	printf("%u\n", result);  // 결과 출력
	return 0;
}



#endif

// H : 밀려쓰기
#if 0

int main() {

	char word[101];
	gets(word);

	for (int i = 0; word[i] != 0; i++) {
		if (word[i] == 'Y') {
			printf("A");
		}
		else if (word[i] == 'Z') {
			printf("B");
		}
		else printf("%c", word[i] + 2);
	}


	return 0;
}

#endif

// I : 교환2
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지
void changeArr(unsigned int arr[], unsigned int a) {

	for (int i = 0; i < 10; i++) {
		if (arr[i] < arr[a]) {
			int tmp = arr[i];
			arr[i] = arr[a];
			arr[a] = tmp;
		}
	}


}
// 이 아래로 수정 금지

int main() {
	unsigned int arr[10];
	unsigned int a;

	// 배열 요소와 인덱스 a를 입력받는다
	for (unsigned int i = 0; i < 10; i++) {
		scanf("%u", &arr[i]);
	}
	scanf("%u", &a);

	changeArr(arr, a);

	// 수정된 배열 출력
	for (unsigned int i = 0; i < 10; i++) {
		printf("%u ", arr[i]);
	}

	return 0;
}

#endif

// J : 압축 풀기
#if 0

int main() {

	unsigned int n;
	scanf("%u", &n);

	unsigned int num[10000];
	for (int i = 0; i < n; i++) {
		scanf("%u", &num[i]);
	}
	for (int i = 0; i < n; i = i + 2) {
		for (int j = 0; j < num[i + 1]; j++) {
			printf("%u", num[i]);
		}
	}


	return 0;
}

#endif








