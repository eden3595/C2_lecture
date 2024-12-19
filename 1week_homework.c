#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

블랙홀 문제 다시 풀어보기 => 배열 인덱스 관련한 거 수학적으로 생각하는 법 필요할 듯

시간 초과 문제 -> 다시 확인해보기

*/




// A 플레이리스트
#if 0

int main() {

	int n;
	scanf("%d", &n);

	unsigned int music[102];
	unsigned int round[102];

	for (int i = 0; i < n; i++) {
		scanf("%u", &music[i]);
	}

	for (int i = 0; i < n; i++) {
		scanf("%u", &round[i]);
	}

	for (int i = 0; i < n; i++) {
		if (round[i] <= 5) {
			printf("%u ", music[i]);
		}
	}

	return 0;
}


#endif

// B 민증 검사
#if 0
#endif

// C 비트 연산의 기초 AND
#if 0

int main() {

	unsigned int n;
	scanf("%u", &n);

	unsigned int result = n & (~1);
	printf("%u", result);

	return 0;
}

#endif

// D 케이크 자르기1
#if 0

int main() {

	unsigned int mat[7][7];

	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			scanf("%u", &mat[i][j]);
		}
	}

	for (int i = 1; i <= 6; i++) {
		mat[i][7 - i] = '*';
	}

	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			if (mat[i][j]=='*') {
				printf("  ");
			}
			else { printf("%u ", mat[i][j]); }
		}
		printf("\n");
	}

	return 0;
}

#endif

// E 케이크 자르기2
#if 0

int main() {

	int n;
	scanf("%d", &n);
	unsigned int mat[102][102];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%u", &mat[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		mat[i][n-1 - i] = '*';
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (mat[i][j] == '*') {
				printf("  ");
			}
			else {
				if (j < n - 1)
					printf("%u ", mat[i][j]);
				else
					printf("%u", mat[i][j]); // 마지막 숫자 뒤에는 공백 없음
			}
		}
		printf("\n");
	}


	return 0;
}

#endif

#if 0
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	unsigned int mat[101][101];

	// 행렬 입력 받기
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%u", &mat[i][j]);
		}
	}

	// 대각선 값 0으로 설정
	for (int i = 0; i < n; i++) {
		mat[i][n - 1 - i] = 0;
	}

	// 행렬 출력
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (mat[i][j] == 0) {
				printf("  ");
			}
			else {
				printf("%u", mat[i][j]);
				if (j < n - 1) printf(" ");  // 마지막 열 뒤에는 공백 없음
			}
		}
		printf("\n");
	}

	return 0;
}


#endif

// G XOR gate
#if 0

int main() {

	unsigned int a;
	unsigned int b;

	scanf("%u %u", &a, &b);
	unsigned int c;
	unsigned int d;
	unsigned int e;

	c = ~(a & b);
	d = a | b;
	e = c & d;

	printf("%u %u %u", c, d, e);

	return 0;
}

#endif

// H 16 진수 출력
#if 0

int main() {

	unsigned int n;
	scanf("%u", &n);

	printf("%X", n);

	return 0;
}

#endif

// I 줄임말
#if 0

int main() {

	char word[102] = { 0 };
	gets(word);

	for (int i = 0; word[i]!=0; i++) {
		if (word[i] >= 'A' && word[i] <= 'Z') {
			printf("%c", word[i]);
		}
	}

	return 0;
}

#endif

// F 역순 출력
#if 0

int main() {

	int n;
	scanf("%d", &n);

	unsigned int num[102];

	for (int i = 0; i < n; i++) {
		scanf("%u", &num[i]);
	}

	for (int i = n-1; i >= 0; i--) {
		printf("%u ", num[i]);
	}

	return 0;
}

#endif

// K 많이 입력한 정수 찾기
#if 0

int main() {

	unsigned int n;
	scanf("%u", &n);

	int num[102];

	for (int i = 0; i < n; i++) {
		int k;
		scanf("%d", &k);
		for (int j = 0; j < n; j++) {
			if (num[j] == k) {
				num[j]++;
			}
		}
	
	}

	return 0;
}

#endif

// T 익명2
#if 0

int main() {


	unsigned char word[102];
	

	for (int i = 0; i < 102; i++) {
		word[i] = '+';
	}

	gets(word);

	unsigned char w;
	scanf("%c", &w);

	for (int i = 0; word[i]!='+'; i++) {
		if (word[i] == w) {
			word[i] = '#';  // 문자를 '#'로 변경
		}
	}

	for (int i = 0; word[i] != '+'; i++) {
		printf("%c", word[i]);
	}
	return 0;
}

#endif

#if 0
int main() {


	char word[102] = { '*' };
	gets(word);

	char w;
	scanf("%c", &w);

	for (int i = 0; word[i] !='*'; i++) {
		if (w == word[i]) {
			printf("#");
		}
		else {
			printf("%c", word[i]);
		}
	}

	return 0;
}

#endif

#if 0
#include <stdio.h>

int main() {
	char word[102];  // 문자열을 저장할 배열

	// 배열을 '*'로 초기화
	for (int i = 0; i < 101; i++) {
		word[i] = '*';
	}
	word[101] = '\0';  // 널 문자로 배열 끝 설정

	fgets(word, sizeof(word), stdin);

	// 바꿀 문자 입력
	char w;

	scanf(" %c", &w);  // 버퍼에 남은 개행 문자 제거 위해 공백 추가

	// 문자열을 순회하면서 해당 문자가 있으면 '#'로 대체
	for (int i = 0; word[i] != '\0'; i++) {
		if (word[i] == w) {
			word[i] = '#';  // 문자를 '#'로 변경
		}
	}
	for (int i = 0; word[i] != '\0'; i++) {
		printf("%c", word[i]);
	}
	return 0;
}



#endif

#if 0

int main() {

	char words[102];
	gets(words);
	
	char c;
	scanf("%c", &c);

	for (int i = 0; i < strlen(words); i++) {
		if (c == words[i]) {
			printf("#");
		}
		else {
			printf("%c", words[i]);
		}
	}


	return 0;
}

#endif

// K 많이 입력한 정수 찾기
#if 0

int main() {

	unsigned int n;
	scanf("%u", &n);

	int num[102] = { 0 };
	for (int i = 0; i < n; i++) {
		int k;
		scanf("%d", &k);
		num[k]++;
	}

	int max = 0;
	int alpha=0;

	for (int i = 0; i < 102; i++) {
		if (num[i] > max) {
			max = num[i];
			alpha = i;
		}
		else if (num[i] == max) {
			if (alpha > i) {
				alpha = i;
			}
		}
	}

	printf("%d", alpha);
	return 0;
}


#endif

// L 문자열 검색
#if 0

int main() {

	char s[102];
	char w[102];

	gets(s);
	gets(w);

	int k = -1;
	int found = 0;

	for (int i = 0; s[i] != '\0'; i++) {
		int j = 0;
		if (s[i] == w[j]) {  // 첫 글자가 일치할 때부터 비교 시작
			int temp = i;
			while (s[temp] == w[j] && w[j] != '\0') {
				temp++;
				j++;
			}

			// 만약 w의 모든 문자가 일치했다면 (즉, w[j]가 '\0'에 도달하면)
			if (w[j] == '\0' || w[j] == '\n') {  // fgets는 줄바꿈도 포함하므로 이를 고려
				found = 1;
				break;
			}
		}
	}

	// 결과 출력
	if (found) {
		printf("%s!\n", w);  // 단어가 존재하면 단어와 '!' 출력
	}
	else {
		printf("%s?\n", w);  // 단어가 존재하지 않으면 단어와 '?' 출력
	}



	return 0;
}

#endif

// M 블랙홀
#if 0

int main() {

	int n;
	scanf("%d", &n);

	int array[101][101];

	if (n % 2 == 0) {

	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				array[i][j] = n - 2;
			}
		}

	}

	return 0;
}

#endif

#if 0

void generatePatternMatrix(int size) {
	int matrix[101][101];
	int center = size / 2;  


	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			// 각 위치에서 중앙점으로부터의 최대 거리 계산
			int distanceFromCenter = i < center ? center - i : i - center;
			int distanceFromEdge = j < center ? center - j : j - center;

			// 둘 중 더 큰 값을 기준으로 배열에 채움
			int distance = distanceFromCenter > distanceFromEdge ? distanceFromCenter : distanceFromEdge;
			matrix[i][j] = size - distance;
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

void generatePatternMatrix1(int size) {
	int matrix[101][101];
	int center = size / 2;  // 중앙점 계산

	// 행렬 채우기
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			// 각 위치에서 중앙점으로부터의 최대 거리 계산
			int distanceFromCenterRow = i < center ? center - i - 1 : i - center;
			int distanceFromCenterCol = j < center ? center - j - 1 : j - center;

			// 둘 중 더 큰 값을 기준으로 배열에 채움
			int distance = distanceFromCenterRow > distanceFromCenterCol ? distanceFromCenterRow : distanceFromCenterCol;
			matrix[i][j] = size - distance;
		}
	}

	// 행렬 출력
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}
int main() {

	int n;
	scanf("%d", &n);

	int mid = n / 2;

	int num[101][101] = { 0 };
	
	if (n % 2 != 0) {
		generatePatternMatrix(n);
	}
	else {
		generatePatternMatrix1(n);
	}

	return 0;
}


#endif


// N 삭제
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지
void deleteValue(unsigned int arr[], unsigned int index) {

	unsigned int copy[10];
	for (int i = 0; i < 10; i++) {
		copy[i] = arr[i];
	}

	for (int i = index; i < 10; i++) {
		arr[i] = copy[i + 1];
	}

}
// 이 아래로 수정 금지

int main(void) {
	unsigned int arr[10];
	unsigned int index;

	for (int i = 0; i < 10; i++) {
		scanf("%u", &arr[i]);
	}

	scanf("%u", &index);

	deleteValue(arr, index);

	for (int i = 0; i < 9; i++) {
		printf("%u ", arr[i]);
	}

	return 0;
}

#endif

// O 책장 정리
#if 0

int main() {

	unsigned int book[21] = { 0 };
	unsigned int n;
	
	for (int i = 0; i < 20; i++) {
		scanf("%u", &book[i]);
	}

	scanf("%u", &n);

	unsigned int up[21] = { 0 };
	unsigned int down[21] = { 0 };

	for (int i = 0; i < 20; i++) {
		if (book[i] < n) {
			printf("%u ", book[i]);
		}
	}

	printf("\n");

	for (int i = 0; i < 20; i++) {
		if (book[i] >= n) {
			printf("%u ", book[i]);
		}
	}
	return 0;
}

#endif

// P 모자이크
#if 0

int main() {


	int n;
	scanf("%d", &n);

	if (n % 2 == 0) {
		int row = 0;
		for (int i = 0; i < n; i++) {
			if (row % 2 == 0) {
				for (int j = 0; j < n; j++) {
					if (j % 2 == 0) {
						printf("0 ");
					}
					else {
						printf("1 ");
					}
				}
				row++;
			}
			else {
				for (int j = 0; j < n; j++) {
					if (j % 2 == 0) {
						printf("1 ");
					}
					else {
						printf("0 ");
					}
				}
				row++;
			}
			printf("\n");
		}
	}
	else {
		int cnt = 0;
		for (int i = 0; i < n * n; i++) {
			if (cnt%n==0 && cnt!=0) {
				printf("\n");
			}
			if (i % 2 != 0) {
				printf("0 ");
				cnt++;
			}
			else {
				printf("1 ");
				cnt++;
			}
		}
	}


	return 0;
}

#endif

// Q 배열 돌리기
#if 0

int main() {

	unsigned int num[5][5] = {0};
	unsigned int n;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%u", &num[i][j]);
		}
	}

	scanf("%u", &n);
	int cnt = 0;
	unsigned int new[5][5] = { 0 };

	while (1) {

		if (cnt == n) {
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					printf("%u ", new[i][j]);
				}
				printf("\n");
			}
			break;
		}
		
		else {
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					new[j][4- i] = num[i][j];
				}
			}
			cnt++;
		}

	}


	return 0;
}

#endif

#if 0
#include <stdio.h>

int main() {
	unsigned int num[5][5] = { 0 };
	unsigned int n;

	// 5x5 행렬 입력받기
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%u", &num[i][j]);
		}
	}

	// 회전 횟수 입력받기
	scanf("%u", &n);

	// 회전 횟수만큼 반복
	for (int cnt = 0; cnt < n; cnt++) {
		unsigned int new[5][5] = { 0 };

		// 시계방향으로 90도 회전
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				new[j][4 - i] = num[i][j];
			}
		}

		// 회전 결과를 다시 num에 복사
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				num[i][j] = new[i][j];
			}
		}
	}

	// 최종 회전된 행렬 출력
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%u ", num[i][j]);
		}
		printf("\n");
	}

	return 0;
}

#endif

#if 0
#include <stdio.h>

#define SIZE 5

void rotate90Clockwise(unsigned int arr[SIZE][SIZE]) {
	unsigned int temp[SIZE][SIZE];

	// 배열을 90도 시계 방향으로 회전
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			temp[j][SIZE - 1 - i] = arr[i][j];
		}
	}

	// 회전한 배열을 원래 배열에 저장
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			arr[i][j] = temp[i][j];
		}
	}
}

void printArray(unsigned int arr[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf("%u ", arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	unsigned int arr[SIZE][SIZE];
	unsigned int rotations;

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			scanf("%u", &arr[i][j]);
		}
	}

	scanf("%u", &rotations);

	// 회전 횟수를 4로 나눈 나머지만큼만 회전 (90도 회전은 4번 반복하면 원래대로 돌아옴)
	rotations = rotations % 4;

	// 배열 회전
	for (int i = 0; i < rotations; i++) {
		rotate90Clockwise(arr);
	}

	printArray(arr);

	return 0;
}


#endif

// R 주대각행렬
#if 0

int main() {

	unsigned int num[5][5] = { 0 };
	
	// 5x5 행렬 입력받기
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%u", &num[i][j]);
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i==j) {
				num[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%u ", num[i][j]);
		}
		printf("\n");
	}



	return 0;
}

#endif

// S 케이크 자르기3
#if 0

int main() {

	unsigned int num[6][6] = { 0 };

	// 5x5 행렬 입력받기
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			scanf("%u", &num[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%u ", num[i][j]);
		}
		printf(" ");
		for (int k = 3; k < 6; k++) {
			printf("%u ",  num[i][k]);
		}
		
		printf("\n");
	}

	printf("\n");
	for (int i = 3; i < 6; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%u ", num[i][j]);
		}
		printf(" ");
		for (int k = 3; k < 6; k++) {
			printf("%u ", num[i][k]);
		}

		printf("\n");
	}


	return 0;
}

#endif









