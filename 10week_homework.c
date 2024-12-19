#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// A 행렬곱 2
/*
문제 A: 행렬곱 2숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：69
통과：53
문제 설명 템플릿 복사
2 x 3 배열
와 3 x 2 배열
를 인자로 받아,
둘을 곱한 결과를 지정한 변수에 저장하는 함수 mat_product를 작성하시오.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mat_product(unsigned int *A, unsigned int *B, unsigned int *C)
{
    // 이 위로 수정 금지

    // 이 아래로 수정 금지
}

int main(int argc, char const *argv[])
{
    unsigned int A[2][3] = {0};
    unsigned int B[3][2] = {0};
    unsigned int C[2][2] = {0};

    for (int i = 0; i < 6; i++)
        scanf("%u", *A + i);
    for (int i = 0; i < 6; i++)
        scanf("%u", *B + i);

    mat_product((unsigned int *)A, (unsigned int *)B, (unsigned int *)C);

    for (size_t i = 0; i < 2; i++)
        for (size_t ii = 0; ii < 2; ii++)
            printf("%u%c", C[i][ii], ii == 1 ? '\n' : ' ');

    return 0;
}


입력 설명



 (정수) : 서로 곱할 배열(행렬)의 성분

단, 계산 결과가
 미만인 경우만 입력한다.
출력 설명
의 결과를 출력한다.
입력 예시 복사
1 1 1
2 2 2
1 2
1 2
1 2
출력 예시 복사
3 6
6 12
*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mat_product(unsigned int* A, unsigned int* B, unsigned int* C)
{
    // 이 위로 수정 금지
    C[0] += A[0] * B[0] + A[1] * B[2] + A[2] * B[4];
    C[1] += A[0] * B[1] + A[1] * B[3] + A[2] * B[5];
    C[2] += A[3] * B[0] + A[4] * B[2] + A[5] * B[4];
    C[3] += A[3] * B[1] + A[4] * B[3] + A[5] * B[5];
    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    unsigned int A[2][3] = { 0 };
    unsigned int B[3][2] = { 0 };
    unsigned int C[2][2] = { 0 };

    for (int i = 0; i < 6; i++)
        scanf("%u", *A + i);
    for (int i = 0; i < 6; i++)
        scanf("%u", *B + i);

    mat_product((unsigned int*)A, (unsigned int*)B, (unsigned int*)C);

    for (size_t i = 0; i < 2; i++)
        for (size_t ii = 0; ii < 2; ii++)
            printf("%u%c", C[i][ii], ii == 1 ? '\n' : ' ');

    return 0;
}

#endif

// B my_strchr 변형
/*
문제 B: my_strchr 변형숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：83
통과：36
문제 설명 템플릿 복사
strchr는 C언어의 표준 라이브러리인 <string.h>에 선언되어 있는 함수이다.
이 함수는 char *로 받은 문자열 str에서 가장 먼저 나타나는 특정 문자(character)의 주소를 반환한다.
만약 문자열에 특정 문자가 없다면, null 포인터를 반환한다.

단, strchr와 달리 값을 반환(return)하는 대신, my_strchr 내부에서
main 함수의 변수를 직접 수정하여 특정 문자의 위치를 저장하도록 구현하시오.

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
    char S[101] = {0};
    char C;

    scanf("%[^\n]", S);
    scanf(" %c", &C);

    char *p = NULL;
    my_strchr(S, C, &p);

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
void my_strchr(char s[], char c, char** p) {

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            *p = &s[i];
            return;
        }

    }
    *p = NULL;
}
// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
    char S[101] = { 0 };
    char C;

    scanf("%[^\n]", S);
    scanf(" %c", &C);

    char* p = NULL;
    my_strchr(S, C, &p);

    if (p != NULL)
        printf("%ld", p - S);
    else
        printf("-1");

    return 0;
}

#endif

// C 출석부 기록
// 겁나 어려움
/*
문제 C: 출석부 기록숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：66
통과：22
문제 설명 템플릿 복사
학생들의 이름이 저장된 2차원 배열 출석부와 명단에 적힌 이름들을 인자로 받아,
출석 여부를 출석부에 기록하는 함수 markAttendance를 작성하시오.

이때, 출석부의 구성과 기록 규칙은 다음과 같다.
1. 출석부는 2차원 배열로, 각 행이 하나의 학생 정보를 나타냅니다.
2. 각 학생의 이름은 길이가 10 이하이고 알파벳으로만 이루어진다.
3. 맨 앞 칸에 ' '이 저장되어 있고, 그 뒤로 이름이 저장되어 있다.
4. 출석한 학생의 이름이 있는 줄의 맨 앞칸은 ' '을 '.'으로 바꾼다.
5. 출석하지 않은 학생의 이름이 있는 줄의 맨 앞칸은 ' '을 '-'으로 바꾼다.

명단 또한 2차원 배열로, 각 행에 한 학생의 이름이 존재한다.

단, 함수는 출석부와 명단을 단순 포인터(char *)로 받는다.
올바르지 않은 자료형을 사용할 경우 감점함.

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
    char AttendanceSheet[100][12] = {0};
    char list[100][11] = {0};
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);
    for (size_t i = 0; i < N; i++)
    {
        AttendanceSheet[i][0] = ' ';
        scanf("%s", AttendanceSheet[i] + 1);
    }
    for (size_t i = 0; i < M; i++)
    {
        scanf("%s", list[i]);
    }

    markAttendance((char *)AttendanceSheet, N, (char *)list, M);

    for (size_t i = 0; i < N; i++)
    {
        printf("%s\n", AttendanceSheet[i]);
    }

    return 0;
}




입력 설명

(정수): 총 학생 수
(정수): 출석한 학생 수
(정수): 학생 이름
(정수): 출석한 학생 이름

출력 설명
출석부를 모두 출력한다.
입력 예시 복사
5 3
Alice Bob Charlie David Eva
Alice Charlie Eva
출력 예시 복사
.Alice
-Bob
.Charlie
-David
.Eva
*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지
void markAttendance(char attend[], int n, char list[],int m){
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < m; j++) {
            // 출석부의 현재 위치에 해당하는 이름과 리스트 이름 비교
            int k = 1;
            while (attend[i * 12 + k] == list[j * 11 + k - 1] && attend[i * 12 + k] != '\0' && list[j * 11 + k - 1] != '\0') {
                k++;
            }
            if (attend[i * 12 + k] == '\0' && list[j * 11 + k - 1] == '\0') {
                attend[i * 12] = '.'; // 출석 표시
                found = 1;
                break;
            }
        }
        if (!found) {
            attend[i * 12] = '-'; // 미출석 표시
        }
    }
}
// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
    char AttendanceSheet[100][12] = { 0 };
    char list[100][11] = { 0 };
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);
    for (size_t i = 0; i < N; i++)
    {
        AttendanceSheet[i][0] = ' ';
        scanf("%s", AttendanceSheet[i] + 1);
    }
    for (size_t i = 0; i < M; i++)
    {
        scanf("%s", list[i]);
    }

    markAttendance((char*)AttendanceSheet, N, (char*)list, M);

    for (size_t i = 0; i < N; i++)
    {
        printf("%s\n", AttendanceSheet[i]);
    }

    return 0;
}

#endif


// D 개인정보 파싱
/*
문제 D: 개인정보 파싱숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：69
통과：38
문제 설명
개인정보를 포함한 형식화된 문자열을 입력하면 구분(parsing)하여 출력하는 코드를 작성하라.
각 문자열은 다음 규칙을 따른다.
- 이름전화번호주소 의 형식으로 한 문장에 한 사람의 정보가 들어있다.
- 이름은 글자 수 상관없이 영어로 구성된 문자열이다.
- 전화번호는 010-XXXX-XXXX 형태의 13자리 문자열이다.
- 주소는 전화번호 뒤에 이어지는 문자열이다.
입력 설명

(정수): 문자열

출력 설명
이름은 'Name: '으로 시작하고
전화번호는 'Phonenumber: '으로 시작하며
주소는 'Address: '로 시작하도록 줄바꿈으로 구분하여 출력한다.
입력 예시 복사
Jimin010-1357-2468Seoul Dongdaemun-gu 57
출력 예시 복사
Name: Jimin
Phonenumber: 010-1357-2468
Address: Seoul Dongdaemun-gu 57

*/
#if 0

int main() {

    char word[101];
    gets(word);

    int num_start = 0;

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == '0') {
            num_start = i;
            break;
        }
    }

    printf("Name: ");
    for (int i = 0; i < num_start; i++) {
        printf("%c", word[i]);
    }
    printf("\n");

    printf("Phonenumber: ");
    for (int i = num_start; i <num_start+13; i++) {
        printf("%c", word[i]);
    }
    printf("\n");

    printf("Address: ");
    for (int i = num_start+13; word[i]!='\0'; i++) {
        printf("%c", word[i]);
    }

    return 0;
}

#endif

// E 포인터 스왑 2
/*
문제 E: 포인터 스왑 2숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：35
통과：31
문제 설명 템플릿 복사
정수
를 가리키는 int* pa와

정수
를 가리키는 int* pb를 swap하는 함수 pointer_swap을 작성하시오.



**주의**
수정 가능한 부분만 수정할 것.

함수는 직접 작성한 것만 사용.

위 사항을 준수하지 않을 경우 부정행위로 간주함.

출제 의도에 맞지 않게 풀이할 경우 감점 처리합니다.



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지

// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
    int A, B;
    int *pa = &A, *pb = &B;
    scanf("%d %d", pa, pb);
    pointer_swap(&pa, &pb);
    printf("%d %d\n%d %d", A, B, *pa, *pb);
    return 0;
}
입력 설명

 (정수) : 처리할 정수

출력 설명
,
를 띄어쓰기로 구분하여 출력하고, 그 다음 줄에 *pa와 *pb를 띄어쓰기로 구분하여 출력한다.
입력 예시 복사
1 5
출력 예시 복사
1 5
5 1


*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지
void pointer_swap(int** pa, int** pb) {
    int* tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}
// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
    int A, B;
    int* pa = &A, * pb = &B;
    scanf("%d %d", pa, pb);
    pointer_swap(&pa, &pb);
    printf("%d %d\n%d %d", A, B, *pa, *pb);
    return 0;
}


#endif

// F 비트 1의 개수 5

#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int count_bit(unsigned char* cp)
{
    // 이 위로 수정 금지

    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    unsigned int A = 0, ans = 0;

    scanf("%X", &A);

    ans = count_bit((unsigned char*)&A);

    printf("%u", ans);

    return 0;
}


#endif
/*
문제 F: 비트 1의 개수 5숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：61
통과：46
문제 설명 템플릿 복사
unsigned int 정수
의 주소를 (unsigned char *)로 받아, A에 존재하는 비트 1의 개수를 반환하는 함수
unsigned int count_bit(unsigned char* cp)를 작성하시오.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int count_bit(unsigned char *cp)
{
    // 이 위로 수정 금지

    // 이 아래로 수정 금지
}

int main(int argc, char const *argv[])
{
    unsigned int A = 0, ans = 0;

    scanf("%X", &A);

    ans = count_bit((unsigned char *)&A);

    printf("%u", ans);

    return 0;
}

입력 설명

 (정수) : 비트의 개수를 셀 정수, 대문자 16진수

출력 설명
A의 비트 1의 개수가 몇 개인지 출력한다.
입력 예시 복사
FFFFFFFF
출력 예시 복사
32

*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int count_bit(unsigned char* cp)
{
    // 이 위로 수정 금지

    int cnt = 0;

    for (int i = 0; i < sizeof(unsigned int); i++) {
        unsigned char byte = cp[i];
        while (byte) {
            cnt += byte & 1;
            byte >>= 1;
        }
    }


    return cnt;


    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    unsigned int A = 0, ans = 0;

    scanf("%X", &A);

    ans = count_bit((unsigned char*)&A);

    printf("%u", ans);

    return 0;
}




#endif


// J 삽입 정렬

#if 0

int main() {

    int n;
    scanf("%d", &n);

    unsigned int num[11] = { 0 };
    for (int i = 0; i < n; i++) {
        scanf("%u", &num[i]);
    }

    
    for (int i = 1; i < n; i++) { // 두 번째 원소부터 시작
        unsigned int key = num[i]; // 현재 원소
        int j = i - 1;

        // key가 왼쪽의 원소들보다 더 크면 자리를 바꾸는 조건
        while (j >= 0 && num[j] < key) {
            num[j + 1] = num[j]; // 더 작은 값은 오른쪽으로 밀기
            j--;
        }
        num[j + 1] = key; // key를 올바른 위치에 삽입

        // 배열 상태 출력
        for (int k = 0; k < n; k++) {
            printf("%u ", num[k]);
        }
        printf("\n");
    }

    return 0;
}

#endif

#if 0


void insertion(unsigned int list[], int n) {
    unsigned int i, j, key;
    for (i = 1; i < n; i++) {
        key = list[i];
        for (j = i - 1; j >= 0 && list[j] > key; j--) {
            list[j + 1] = list[j];
        }
        list[j + 1] = key;
        for (int k = 0; k < n; k++) {
            printf("%u ", list[k]);
        }
        printf("\n");
    }
}

int main() {

    int n;
    scanf("%d", &n);

    unsigned int num[11] = { 0 };
    for (int i = 0; i < n; i++) {
        scanf("%u", &num[i]);
    }

    insertion(num[10], n);


    return 0;
}

#endif

#if 0


int main() {

    int n;
    scanf("%d", &n);

    unsigned int num[101];

    for (int i = 0; i < n; i++) {
        scanf("%u", &num[i]);
    }

    unsigned int new[101];

    for (int i = 0; i < n; i++) {
        int big = 0;
        int index = 0;
        for (int j = 0; j < n; j++) {
            if (num[j] > big) {
                big = num[j];
                index = j;
            }
        }
        new[i] = big;
            
        for (int k = 0; k < n; k++) {
            for (int r = 0; r < n; r++) {

            }
        }

    }

    return 0;
}

#endif

// this
#if 0


int main() {



    int n;
    scanf("%d", &n);

    unsigned int num[101];

    for (int i = 0; i < n; i++) {
        scanf("%u", &num[i]);
    }

    int key = 0;
    for (int i = 1; i < n; i++) {
        key = num[i];
        int j = i - 1;

        while (j >= 0 && num[j] < key) {
            num[j + 1] = num[j];
            j = j - 1;
        }

        num[j + 1] = key;
        for (int k = 0; k < n; k++) {
            printf("%u ", num[k]);
        }
        printf("\n");
    }


    return 0;
}



#endif


// H : RGB2GRAY
/*

문제 H: RGB2GRAY숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：85
통과：44
문제 설명
이미지 행렬의 Red, Green, Blue 성분으로 평균을 내어 grayscale 이미지로 변환하는 프로그램을 작성하시오.
이때, 평균의 소수점 아래는 모두 버린다.
입력 설명


 (정수) : 이미지의 세로 크기 (행의 개수)
 (정수) : 이미지의 가로 크기 (열의 개수)
 (정수) : 원본 컬러 이미지의 Red 성분
 (정수) : 원본 컬러 이미지의 Green 성분
 (정수) : 원본 컬러 이미지의 Blue 성분

출력 설명
각 픽셀의 R, G, B 성분의 평균을 출력한다.
입력 예시 복사
2 2
255 255 255 255 128 128
0 0 0 0 1 0
출력 예시 복사
255 170
0 0


*/
#if 0

int main() {

    int n;
    int m;
    scanf("%d %d", &n, &m);


    int score[101][101];

    int a, b, c;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d %d %d", &a, &b, &c);
            score[i][j] = (a + b + c) / 3;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", score[i][j]);
        }
        printf("\n");
    }

    return 0;
}


#endif


// I : 향상된 strstr

#if 0


int main() {


    char s[101];
    char t[101];

    gets(s);
    gets(t);
  
    int found = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        
        if (s[i] == t[0] || s[i] == t[0] - 32 || s[i] == t[0] + 32) {
            int right = 1;
            int cnt = 0;


            for (int j = 0; t[j] != '\0'; j++) {
                if (s[i+j] != t[j] && s[i+j] != t[j] - 32 && s[i+j] != t[j] + 32) {
                    right = 0;
                    break;
                }
                cnt++;
            }


            if (right == 1) {
                for (int k = i; k < i + cnt; k++) {
                    printf("%c", s[k]);
                }
                found = 1;
                break;
            }
        }
    }

    if (found == 0) {  // 일치하는 부분을 찾지 못한 경우
        for (int k = 0; s[k] != '\0'; k++) {
            printf("%c", s[k]);
        }
    }


    return 0;
}


#endif

// This
// 암기해두기
/*
문제 I: 향상된 strstr숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：173
통과：42
문제 설명
문자열
에서 문자열
를 찾아, 처음으로
가 존재하는 위치부터 끝까지의 문자열을 출력하는 프로그램을 작성하시오.
단, 대소문자 구분 없이 문자열을 검색한다.
만약
에
가 존재하지 않으면 문자열
 전체를 그대로 출력한다.
입력 설명

 (문자열) : 검색 대상이 되는 전체 문자열, 공백 포함 가능
 (문자열) : S에서 찾고자 하는 패턴 문자열, 공백 포함 가능

출력 설명
조건에 따라
가 처음으로 나타나는 위치부터
의 끝까지의 문자열을 출력한다.
만약
가
에 존재하지 않으면
 전체를 출력한다.
입력 예시 복사
HelloWorld
woRld
출력 예시 복사
World

*/
#if 0

int main() {


    char s[101] = { 0 };
    char t[101] = { 0 };

    gets(s);
    gets(t);

    char new_s[101] = { 0 };
    char new_t[101] = { 0 };

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            new_s[i] = s[i] + 32;
        }
        else {
            new_s[i] = s[i];
        }
    }

    for (int i = 0; t[i] != '\0'; i++) {
        if (t[i] >= 'A' && t[i] <= 'Z') {
            new_t[i] = t[i] + 32;
        }
        else {
            new_t[i] = t[i];
        }
    }

    int found = 0;
    
    for (int i = 0; new_s[i] != '\0'; i++) {
        int match = 1;

        for (int j = 0; new_t[j] != '\0'; j++) {
            if (new_s[i + j] != new_t[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            // 일치하는 첫 부분을 찾으면 원래의 `s` 문자열을 그 위치부터 끝까지 출력
            printf("%s\n", s + i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("%s\n", s);
    }
    return 0;
}


#endif


// G 비트 인터리빙
/*
문제 G: 비트 인터리빙숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：84
통과：49
문제 설명
8비트 데이터 4개를 입력하면, 아래 그림과 같이 데이터를 조작한 결과를 출력하는 프로그램을 작성하시오.
입력 설명

 (정수) : 처리할 정수

출력 설명
아래 그림과 같이 조작한 결과를 출력한다.
입력 예시 복사
0 255 15 240
출력 예시 복사
85 85 102 102
*/
#if 0

int result(int a, int b, int c, int d, int e, int f, int g, int h) {
    unsigned int result = 1;

    result = a * 128 + b * 64 + c * 32 + d * 16 + e * 8 + f * 4 + g * 2 + h;

    return result;
}



int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int an[9];
    for (int i = 7; i >=0; i--) {
        an[i] = a & 1;
        a = a >> 1;
    }
    int bn[9];
    for (int i = 7; i >=0; i--) {
        bn[i] = b & 1;
        b = b >> 1;
    }
    int cn[9];
    for (int i = 7; i >=0; i--) {
        cn[i] = c & 1;
        c = c >> 1;
    }
    int dn[9];
    for (int i = 7; i >=0; i--) {
        dn[i] = d & 1;
        d = d >> 1;
    }

    int one = result(an[0], bn[0], cn[0], dn[0], an[1], bn[1], cn[1], dn[1]);
    int two = result(an[2], bn[2], cn[2], dn[2], an[3], bn[3], cn[3], dn[3]);
    int three = result(an[4], bn[4], cn[4], dn[4], an[5], bn[5], cn[5], dn[5]);
    int four = result(an[6], bn[6], cn[6], dn[6], an[7], bn[7], cn[7], dn[7]);
    printf("%d %d %d %d", one, two, three, four);

    return 0;
}


#endif
