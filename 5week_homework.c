#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// A : 이름 빙고
#if 0

int main() {

	char word1[100];
	char word2[100];
	char word3[100];

	gets(word1);
	gets(word2);
	gets(word3);

	char bingo[3][3];

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		char key[100];
		gets(key);

	}


	return 0;
}


#endif

// B : 압축하기
#if 0

int main() {


	int n;
	scanf("%d", &n);

	char word[100];

	for (int i = 0; i < n; i++) {
		scanf("%c", &word[i]);
	}

	int num[100] = { 0 };
	
	for (int i = 0; i < n; i++) {
		
	}


	for (int i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}

	return 0;
}

#endif


// I : C언어 배열 해부학 9
#if 0

int main() {

	int arr[3][6][5];

	int prev = 0x1000;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 5; k++) {
				if (i == 0 && j == 0 && k == 0) {
					prev = 0x1000;
					arr[0][0][0] = 0x1000;
				}
				else {
					arr[i][j][k] = prev + 4;
					prev = arr[i][j][k];
				}
			}
		}
	}

	int n;
	scanf("%X", &n);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 5; k++) {
				if (arr[i][j][k] == n) {
					printf("%d %d %d", i, j, k);
					break;
				}
			}
		}
	}
	
	return 0;
}

#endif

// J : C언어 배열 해부학 10
#if 0

int main() {
	
	char what[100] = { 0 };
	gets(what);
	int t = 0;
	if (what[0] == 'c') {
		t = 1;
	}
	else if (what[0] == 'i') {
		t = 4;
	}
	else if (what[0] == 's') {
		t = 2;
	}

	int a = 0;
	int b = 0;
	int c = 0;
	int k = 0;
	for (int i = 0; what[i]!='\0'; i++) {
		if (what[i] == ' ') {
			k = i;
			break;
		}
	}

	a = what[k+1]-'0';
	b = what[k +3]-'0';
	c = what[k +5]-'0';

	int arr[3][6][5];

	int prev = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 5; k++) {
				if (i == 0 && j == 0 && k == 0) {
					prev = 0x1000;
					arr[0][0][0] = 0x1000;
				}
				else {
					arr[i][j][k] = prev + t;
					prev = arr[i][j][k];
				}
			}
		}
	}

	printf("%X", arr[a][b][c]);

	return 0;
}

#endif

// K : C언어 배열 해부학 11
#if 0

int main() {

	char what[100] = { 0 };
	gets(what);

	int t = 0;
	if (what[0] == 'c') {
		t = 1;
	}
	else if (what[0] == 'i') {
		t = 4;
	}
	else if (what[0] == 's') {
		t = 2;
	}

	int a = 0, b = 0, c = 0;
	int k = 0, l = 0, m = 0, n = 0;

	for (int i = 0; what[i] != '\0'; i++) {
		if (what[i] == ' ') {
			k = i;
			break;
		}
	}

	n = what[k + 1] - '0';
	m = what[k + 3] - '0';
	l = what[k + 5] - '0';
	a = what[k + 7] - '0';
	b = what[k + 9] - '0';
	c = what[k + 11] - '0';

	int arr[100][100][100] = { 0 };

	int prev = 0;

	if (n == 0 && m == 0 && l == 0) {
		printf("1000");
		
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				for (int k = 0; k < l; k++) {
					if (i == 0 && j == 0 && k == 0) {
						prev = 0x1000;
						arr[0][0][0] = 0x1000;
					}
					else {
						arr[i][j][k] = prev + t;
						prev = arr[i][j][k];
					}
				}
			}
		}

		printf("%X", arr[a][b][c]);
	}
	
	return 0;
}

#endif

#if 0

int main() {

	int round = 0;
	while (1) {
		int c;

	}


	return 0;
}

#endif

#if 0

int check(char what[]) {
	int t=0;
	if (what[0] == 'c') {
		t = 1;
	}
	else if (what[0] == 'i') {
		t = 4;
	}
	else if (what[0] == 's') {
		t = 2;
	}
	return t;
}

int main() {
	
	char type[10];
	int n, m, l, a, b, c;
	scanf("%s %d %d %d %d %d %d", type, &n, &m, &l, &a, &b, &c);

	int t = 0;
	t = check(type);

	int arr[100][100][100] = { 0 };

	int prev = 0;

	if (a == 0 && b == 0 && c == 0) {
		printf("1000");
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				for (int k = 0; k < l; k++) {
					if (i == 0 && j == 0 && k == 0) {
						prev = 0x1000;
						arr[0][0][0] = 0x1000;
					}
					else {
						arr[i][j][k] = prev + t;
						prev = arr[i][j][k];
					}
				}
			}
		}
		printf("%X", arr[a][b][c]);
	}
	return 0;
}

#endif


// L : C언어 배열 여행 4 --------겁나 어렵지비
#if 0

#include <stdio.h>

int main() {

	int arr[6][10];

	arr[0][0] = 0x1000;
	int prev = arr[0][0];

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0 && j == 0) {
				arr[i][j] = 0x1000;
			}
			else {
				arr[i][j] = prev + 4;
			}
			prev = arr[i][j];
		}
	}

	for (int i = 5; i < 10; i++) {
		arr[5][i] = prev + 4;
		prev = arr[5][i];
	}

	int n;
	scanf("%d", &n);


	if (n >= 5) {
		
		int row = (n / 5); // 6행의 배열에서 유효한 인덱스 보장
		int col = n % 5;
		if (row + 1 > 6) {
			printf("%X", arr[5][col + row]);
		}
		else printf("%X", arr[row+1][col]);
	}
	else {
		printf("%X", arr[1][n]);  // 0~4의 경우 arr[1][n] 출력
	}


	return 0;
}

#endif

// 돼
#if 0

#include <stdio.h>

int main() {
	int(*arr)[5] = (int(*)[5])0x1000;
	int n = 0;

	scanf("%d", &n);
	int(*result)[5] = &arr[1][n];
	printf("%X", result);
}

#endif

#if 0

int main() {

	int arr[101];
	arr[0] = 0x1000;
	int prev = 0x1000;
	for (int i = 1; i < 101; i++) {
		arr[i] = prev + 4;
		prev = arr[i];
	}

	int n;
	scanf("%d", &n);

	printf("%X", arr[1] + n);


	return 0;
}

#endif

// M : C언어 배열 여행 5
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
				arr[i][j] = prev + 1;
			}
			prev = arr[i][j];
		}
	}

	int n;
	scanf("%d", &n);

	
	int i = n / 5;  // 행 계산
	int j = n % 5;  // 열 계산
	printf("%X", arr[i][j]);
	

	return 0;
}

#endif

#if 0

int main() {

	int arr[101];
	arr[0] = 0x1000;
	int prev=0x1000;
	for (int i = 1; i < 101; i++) {
		arr[i] = prev + 1;
		prev = arr[i];
	}

	int n;
	scanf("%d", &n);

	printf("%X", arr[n]);

	return 0;
}

#endif


#if 0

int main() {

	int arr[101];

	int prev = 0x1000;
	arr[0] = 0x1000;
	for (int i = 1; i < 101; i++) {
		arr[i] = prev + 1;
		prev = arr[i];
	}

	int n;
	scanf("%d", &n);

	printf("%X", arr[0] + n);

	return 0;
}

#endif

#if 0

#include <stdio.h>

int main() {
	char(*arr)[5] = (char(*)[5])0x1000;
	int n = 0;

	scanf("%d", &n);
	char(*result)[5] = &arr[0][n];
	printf("%X", result);
}

#endif

#if 0

int main() {

	short arr[3][6][5];
	int prev;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 5; k++) {
				if (i == 0 && j == 0 && k == 0) {
					arr[i][j][k] = 0x1000;
					prev = arr[i][j][k];
				}
				else {
					arr[i][j][k] = prev + 2;
					prev = arr[i][j][k];
				}
			}
		}
	}

	int n;
	scanf("%d", &n);

	

	return 0;
}

#endif


// G : 익명 1
#if 0

int main() {


	char s[101] = { 0 };
	char w[10] = { 0 };

	gets(s);
	gets(w);

	int key = 0;
	for (int i = 0; w[i] != 0; i++) {
		key++;
	}

	int alpha = 0;
	for (int i = 0; s[i] !=0 ; i++) {
		alpha++;
	}


	int start=-1;
	int end = 0;

	int right = 0;

	for (int i = 0; i <= alpha - key; i++) { // i의 범위를 수정
		int right = 0; // right 초기화
		for (int j = 0; j < key; j++) {
			if (s[i + j] != w[j]) { // s[i + j]로 수정
				break;
			}
			right++;
		}

		if (right == key) { // 일치하는 경우
			start = i;
			end = start + key; // end를 start + key로 설정
			break;
		}
	}

	for (int i = start; i < end; i++) {
		s[i] = '#';
	}

	for (int i = 0; i<alpha; i++) {
		printf("%c", s[i]);
	}

	return 0;
}


#endif

// H : sizeof 1
#if 0

#include <stdio.h>
int main() {
	
	char word[50];
	gets(word);

	char type[10];
	int size;

	sscanf(word, "%s arr[%d];", type, &size);

	int t = 0;
	if (type[0] == 'i') {
		t = sizeof(int);
	}
	else if (type[0] == 'c') {
		t = sizeof(char);
	}
	else if (type[0] == 's') {
		t = sizeof(short);
	}

	int num = size;
	printf("%d", num * t);

	return 0;
}

#endif

#if 0

#include <stdio.h>

int main() {

	char s[100];


	return 0;
}

#endif

// E 알파벳 빈도 분석
#if 0

int main() {

	unsigned int n;
	scanf("%u", &n);

	int word[30] = { 0 };


	for (int i = 0; i < n; i++) {
		char c;
		scanf(" %c", &c);

		word[c - 'a']++;
	}
	

	for (int i = 0; i < 30; i++) {
		if (word[i] != 0) {
			printf("%c:%d\n", i + 'a', word[i]);
		}
	}

	return 0;
}

#endif

// D 숫자 빙고 카운트
#if 0

int main() {

	int num[5][5];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &num[i][j]);
		}
	}

	int n;
	scanf("%d", &n);

	for (int k = 0; k < n; k++) {
		int a;
		scanf("%d", &a);
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (num[i][j] == a) {
					num[i][j] = -1;
				}
			}
		}
	}

	int check = 0;

	for (int i = 0; i < 5; i++) {
		int row_complete = 1;
		for (int j = 0; j < 5; j++) {
			if (num[i][j] != -1) {
				row_complete = 0;
				break;
			}
		}
		if (row_complete) check++;
	}

	// 세로줄 체크
	for (int j = 0; j < 5; j++) {
		int col_complete = 1;
		for (int i = 0; i < 5; i++) {
			if (num[i][j] != -1) {
				col_complete = 0;
				break;
			}
		}
		if (col_complete) check++;
	}

	int diag1_complete = 1;
	for (int i = 0; i < 5; i++) {
		if (num[i][i] != -1) {
			diag1_complete = 0;
			break;
		}
	}
	if (diag1_complete) check++;

	int diag2_complete = 1;
	for (int i = 0; i < 5; i++) {
		if (num[i][4 - i] != -1) {
			diag2_complete = 0;
			break;
		}
	}
	if (diag2_complete) check++;
	
	printf("%d", check);
	return 0;
}

#endif

// C
#if 0

#include <stdio.h>

int main() {

	int a;
	scanf("%X", &a);

	int n;
	scanf("%d", &n);


	unsigned int k = a & 0xFF;  // 하위 8비트 추출
	int result = 0;  // 선택된 비트들의 10진수 값을 저장할 변수
	int bit_position = 0;  // 선택된 비트들의 위치 (최하위부터 계산)

	for (int i = 7; i >= 0; i -= n) {
		int bit = (k >> i) & 1;  // 선택된 비트를 추출
		printf("%d", bit);  // 선택된 비트 출력
		result = (result << 1) | bit;  // 선택된 비트를 왼쪽으로 밀고 추가
		bit_position++;
	}
	printf("\n");

	// 선택된 비트들의 10진수 값 출력
	printf("%d\n", result);
	
	return 0;
}


#endif

// F 개미 수열
#if 0

int main() {

	unsigned int n;
	unsigned int k;
	scanf("%u %u", &n, &k);



	return 0;
}

#endif

// L : C 언어 배열 여행 4
#if 0

int main() {

	int i;
	scanf("%d", &i);

	printf("%X", 0x1000 + 20 + i * 4);

	return 0;
}

#endif

// M : C 언어 배열 여행 4
#if 0

#include <stdio.h>

int main() {

	int i;
	scanf("%d", &i);

	printf("%X", 0x1000 + 30*i);

	return 0;
}

#endif

#if 0

int main() {

	int arr[3] = { 10,20,30 };
	printf("%d\n", &arr + 1);
	printf("%d", arr + 1);

	return 0;
}

#endif

// N
#if 0

#include <stdio.h>

int main() {

	int i;
	scanf("%d", &i);

	printf("%X", 0x1000 + i * 2*5 );

	return 0;
}

#endif

// O
#if 0

#include <stdio.h>

int main() {

	int i;
	scanf("%d", &i);

	printf("%X", 0x1000 + i * 90);

	return 0;
}

#endif

// A 이름 빙고 - 널 문자 생각하기!!!
#if 0

#include <stdio.h>

int check(char a[], char k[]) {
	int i;
	for (i = 0; a[i] != '\0' && k[i] != '\0'; i++) {
		// 소문자를 대문자로 변환하여 비교
		char ca = (a[i] >= 'a' && a[i] <= 'z') ? a[i] - 'a' + 'A' : a[i];
		char ck = (k[i] >= 'a' && k[i] <= 'z') ? k[i] - 'a' + 'A' : k[i];
		if (ca != ck) {
			return 0;
		}
	}
	// 문자열 길이가 다르면 다른 문자열로 처리
	if (a[i] != '\0' || k[i] != '\0') {
		return 0;
	}
	return 1;
}


int main() {

	char a[11];
	char b[11];
	char c[11];
	char d[11];
	char e[11];
	char f[11];
	char g[11];
	char h[11];
	char i[11];

	scanf("%s %s %s", a, b, c);
	scanf("%s %s %s", d, e, f);
	scanf("%s %s %s", g, h, i);

	int n;
	scanf("%d", &n);

	char called[11];
	for (int j = 0; j < n; j++) {
		scanf("%s", called);  // 띄어쓰기로 구분된 이름 하나씩 입력

		// 빙고판 각 항목과 비교 후 일치하면 '.'으로 바꿈
		if (check(a, called)) { a[0] = '.'; a[1] = '\0'; }
		if (check(b, called)) { b[0] = '.'; b[1] = '\0'; }
		if (check(c, called)) { c[0] = '.'; c[1] = '\0'; }
		if (check(d, called)) { d[0] = '.'; d[1] = '\0'; }
		if (check(e, called)) { e[0] = '.'; e[1] = '\0'; }
		if (check(f, called)) { f[0] = '.'; f[1] = '\0'; }
		if (check(g, called)) { g[0] = '.'; g[1] = '\0'; }
		if (check(h, called)) { h[0] = '.'; h[1] = '\0'; }
		if (check(i, called)) { i[0] = '.'; i[1] = '\0'; }
	}


	printf("%s %s %s\n", a, b, c);
	printf("%s %s %s\n", d, e, f);
	printf("%s %s %s", g, h, i);
	


	return 0;
}

#endif


// B 압축하기
#if 0

int how(int cnt) {
	return cnt / 9;
}

int main() {

	int n;
	scanf("%d", &n);

	int num[100];

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	int new_num[100] = { 0 };

	int cnt = 1;
	int k=0;
	for (int i = 0; i < n-1; i++) {
		if (num[i] == num[i + 1]) {
			cnt++;
		}
		else {
			if (cnt > 9) {
				for (int r = 0; r < how(cnt); r++) {
					new_num[k] = num[i];
					new_num[k +1] = 9;
					k += 2;
				}
				new_num[k] = num[i];
				new_num[k + 1] = cnt % 9;
				k += 2;
			}
			else {
				new_num[k] = num[i];
				new_num[k + 1] = cnt;
				k += 2;
			}

			cnt = 1;
		}
	}
	
	if (cnt > 9) {
		for (int r = 0; r < how(cnt); r++) {
			new_num[k] = num[n - 1];
			new_num[k + 1] = 9;
			k += 2;
		}
		new_num[k] = num[n - 1];
		new_num[k + 1] = cnt % 9;
		k += 2;
	}
	else {
		new_num[k] = num[n - 1];
		new_num[k + 1] = cnt;
		k += 2;
	}

	for (int i = 0; i < k; i++) {
		printf("%d", new_num[i]);
	}


	return 0;
}

#endif

#if 0

#include <stdio.h>

int main() {

	unsigned int L;
	unsigned int n;
	char num[100];
	scanf("%u %u",&L, &n);
	int round = 0;

	int nn = 0;
	while (1) {
		if (L == 0) {
			break;
		}
		num[nn] = (L%10)+'0';
		L = L / 10;
		nn++;
	}

	for (int i = 0; i < nn / 2; i++) {
		char temp = num[i];
		num[i] = num[nn - i - 1];
		num[nn - i - 1] = temp;
	}

	num[nn] = '\0';

	while (1) {
		int cnt = 1;
		int k = 0;
		int new_num[100] = { 0 };
		
		if (round == n) {
			break;
		}
		for (int i = 0; num[i] != '\0'; i++) {
			if (num[i] == num[i + 1]) {
				cnt++;
			}
			else {

				new_num[k++] = num[i]; // 문자 저장
				new_num[k++] = cnt + '0'; // 개수 저장 (문자로 변환)
				cnt = 1;
			}
		}

		for (int i = 0; i < k; i++) {
			printf("%c", new_num[i]);
		}
		printf("\n");
		for (int i = 0; i < k; i++) {
			num[i] = new_num[i];
		}
		round++;
	}

	
	return 0;
}

#endif

// F 개미 수열
#if 0
#include <stdio.h>

int main() {

	unsigned int n;
	unsigned char num[100];  // 처음 수열을 문자열로 입력받음
	scanf("%s %u", num, &n);  // 문자열과 반복 횟수 입력
	int round = 0;


	printf("%s\n", num);

	while (round < n-1) {
		int cnt = 1;
		int k = 0;
		char new_num[200] = { 0 };  // 충분한 크기로 배열 생성 (char 타입)

		for (int i = 0; num[i] != '\0'; i++) {
			if (num[i] == num[i + 1]) {
				cnt++;
			}
			else {
				new_num[k++] = num[i];  // 문자를 저장
				new_num[k++] = cnt + '0';  // 숫자를 문자로 변환해서 저장
				cnt = 1;  // 카운트 초기화
			}
		}

		new_num[k] = '\0';  // 문자열 끝에 널 문자 추가

		// 새로운 수열 출력
		printf("%s\n", new_num);

		// num 배열에 new_num 복사
		for (int i = 0; new_num[i] != '\0'; i++) {
			num[i] = new_num[i];
		}
		num[k] = '\0';  // 복사 후 마지막에 널 문자 추가

		round++;
	}

	return 0;
}



#endif

#if 0

#include <stdio.h>

void generateLookAndSay(char current[], char next[]) {
	int count = 1;
	int j = 0;

	// 현재 수열(current)에서 다음 수열(next)을 생성
	for (int i = 0; current[i] != '\0'; i++) {
		if (current[i] == current[i + 1]) {
			count++;  // 같은 숫자가 계속 나오면 카운트 증가
		}
		else {
			// 다음 수열에 숫자와 카운트를 저장
			next[j++] = count + '0';  // 개수를 문자로 변환하여 저장
			next[j++] = current[i];    // 현재 숫자 저장
			count = 1;  // 카운트 초기화
		}
	}
	next[j] = '\0';  // 문자열 끝에 널 문자 추가
}

int main() {
	char current[100];  // 최대 길이 100으로 설정
	unsigned int L1, i;


	scanf("%u %u", &L1,&i);

	// L1을 문자열로 변환
	current[0] = L1 + '0';  // L1을 문자열로 저장
	current[1] = '\0';  // 문자열 종료

	printf("%s\n", current);  // 초항 출력

	for (unsigned int round = 1; round <= i; round++) {
		char next[200];  // 다음 수열을 저장할 배열
		generateLookAndSay(current, next);  // 다음 수열 생성
		printf("%s\n", next);  // 생성된 수열 출력

		// 현재 수열을 다음 수열로 업데이트
		for (int j = 0; next[j] != '\0'; j++) {
			current[j] = next[j];
		}
		current[0] = '\0';  // 문자열 초기화
		// 길이를 수동으로 계산하여 복사
		for (int j = 0; next[j] != '\0'; j++) {
			current[j] = next[j];
			current[j + 1] = '\0';  // 복사 후 null 문자 추가
		}
	}

	return 0;
}

#endif





