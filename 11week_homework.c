#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// A 문자열 스왑
/*
문제 A: 문자열 스왑숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：169
통과：64
문제 설명 템플릿 복사
문자열을 가리키는 두 포인터의 원본을 인자로 받아, 각 포인터가 가리키는 주소만을 변경하는 string_ptr_swap함수와
진짜 문자열을 서로 바꾸는 real_string_swap함수를 작성하시오.

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
    char S1[100] = {0};
    char S2[100] = {0};
    char S3[100] = {0};

    scanf("%[^\n]\n%[^\n]\n%[^\n]", S1, S2, S3);

    char *p1 = S1;
    char *p2 = S2;
    char *p3 = S3;

    string_ptr_swap(&p1, &p2);
    real_string_swap(p2, p3);

    printf("%s\n%s\n%s\n", S1, S2, S3);
    printf("%s\n%s\n%s\n", p1, p2, p3);

    return 0;
}


입력 설명

 (문자열) : 문자열 3개

출력 설명
템플릿 코드에 의한 스왑 결과를 출력한다.
입력 예시 복사
asdf
qwer
zxcv
출력 예시 복사
zxcv
qwer
asdf
qwer
zxcv
asdf

*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지

void string_ptr_swap(char **p1,char **p2) {
    char* tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void real_string_swap(char* str1, char* str2) {
    while (*str1 != '\0' || *str2 != '\0') {
        char temp = *str1; // str1의 현재 문자를 임시 변수에 저장
        *str1 = *str2;     // str2의 현재 문자를 str1에 대입
        *str2 = temp;      // 임시 변수의 값을 str2에 대입
        str1++;
        str2++;
    }
}

// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
    char S1[100] = { 0 };
    char S2[100] = { 0 };
    char S3[100] = { 0 };

    scanf("%[^\n]\n%[^\n]\n%[^\n]", S1, S2, S3);

    char* p1 = S1;
    char* p2 = S2;
    char* p3 = S3;

    string_ptr_swap(&p1, &p2);
    real_string_swap(p2, p3);

    printf("%s\n%s\n%s\n", S1, S2, S3);
    printf("%s\n%s\n%s\n", p1, p2, p3);

    return 0;
}


#endif

// B 향상된 strstr2
/*
문제 B: 향상된 strstr 2숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：126
통과：62
문제 설명 템플릿 복사
문자열
에서 문자열
를 대소문자 구분 없이 검색하는 함수 my_strstr을 작성하시오.
검색을 성공하면 해당 주소를, 존재하지 않으면 NULL포인터를 반환한다.

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
    char S[100] = {0};
    char T[100] = {0};
    scanf("%[^\n]\n", S);
    scanf("%[^\n]", T);

    char *p = my_strstr(S, T);

    printf("%s", p != NULL ? p : S);

    return 0;
}
입력 설명

 (문자열) : 검색 대상이 되는 전체 문자열, 공백 포함 가능
 (문자열) :
에서 찾고자 하는 패턴 문자열, 공백 포함 가능

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

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지
char* my_strstr(char s[], char t[]) {
    // s와 t를 복사할 배열 생성
    char s_copy[100], t_copy[100];
    int i;

    // s를 s_copy로 복사하면서 소문자로 변환
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s_copy[i] = s[i] + 32; // 대문자를 소문자로 변환
        }
        else {
            s_copy[i] = s[i]; // 그대로 복사
        }
    }
    s_copy[i] = '\0'; // 문자열 종료 문자 추가

    // t를 t_copy로 복사하면서 소문자로 변환
    for (i = 0; t[i] != '\0'; i++) {
        if (t[i] >= 'A' && t[i] <= 'Z') {
            t_copy[i] = t[i] + 32; // 대문자를 소문자로 변환
        }
        else {
            t_copy[i] = t[i]; // 그대로 복사
        }
    }
    t_copy[i] = '\0'; // 문자열 종료 문자 추가

    int no = 0;
    int index = 0;

    // 문자열 검색
    for (i = 0; s_copy[i] != '\0'; i++) {
        if (t_copy[0] == s_copy[i]) {
            no = 0;
            for (int j = 1; t_copy[j] != '\0'; j++) {
                if (t_copy[j] != s_copy[i + j]) {
                    no = 1;
                    break;
                }
            }
            if (no == 0) {
                index = i;
                break; // 첫 번째 위치를 찾으면 종료
            }
        }
    }

    // 결과 반환
    if (no == 0) {
        return &s[index]; // 원래 문자열에서 해당 위치 반환
    }
    else {
        return NULL; // 찾을 수 없으면 NULL 반환
    }
}
// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
    char S[100] = { 0 };
    char T[100] = { 0 };
    scanf("%[^\n]\n", S);
    scanf("%[^\n]", T);

    char* p = my_strstr(S, T);

    printf("%s", p != NULL ? p : S);

    return 0;
}


#endif

// G 2배
/*
문제 G: 2배숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：cu29
제출：43
통과：40
문제 설명 템플릿 복사
unsigned int형 포인터를 인자로 받아,
포인터가 가리키는 값을 기존 값의 2배로 변경하는 함수 processIntegers를 작성하시오.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void processIntegers(unsigned int *a)
{
    // 이 위로 수정 금지

    // 이 아래로 수정 금지
}

int main(int argc, char const *argv[])
{
    unsigned int x = 0;

    scanf("%u", &x);

    processIntegers(&x);

    printf("%u", x);

    return 0;
}
입력 설명

 (정수) : 처리할 정수

출력 설명
입력값의 두 배를 출력한다.
입력 예시 복사
2
출력 예시 복사
4
Hint
이 방식을 call by reference라고 한다.
*/

#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void processIntegers(unsigned int* a)
{
    // 이 위로 수정 금지

    unsigned int num = *a;
    num = num * 2;
    *a = num;

    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    unsigned int x = 0;

    scanf("%u", &x);

    processIntegers(&x);

    printf("%u", x);

    return 0;
}


#endif


// H 버블정렬
/*
문제 H: 버블 정렬숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：cu29
제출：66
통과：39
문제 설명
지난번 문제는 삽입 정렬이었다.
버블 정렬은 삽입 정렬과 비슷하지만 방식에 조금 차이가 있다.

버블 정렬은 다음과 같이 진행한다. 4번 과정이 끝날 때마다 배열을 출력하는 프로그램을 작성하시오.

1. 배열의 첫 번째 숫자부터 차례로 두 개씩 비교한다.
2. 비교한 두 숫자 중 왼쪽의 숫자가 오른쪽의 숫자보다 크면, 두 숫자의 위치를 바꾼다.
    이렇게 해서 큰 숫자가 오른쪽으로 이동하게 된다.
3. 배열의 끝까지 가면서 모든 인접한 숫자들을 비교하고 필요할 때마다 위치를 바꾼다.
    이 과정을 한 번 끝내고 나면, 가장 큰 숫자가 배열의 가장 오른쪽에 위치하게 된다.
4. 이제 가장 오른쪽에 있는 숫자는 제자리를 찾았으므로,
    다음 반복에서는 이 숫자를 제외하고 나머지 숫자들만 다시 비교한다.
5. 배열의 모든 숫자가 크기 순서대로 정렬될 때까지 이 과정을 반복한다.
    반복이 진행될수록 가장 큰 숫자들이 오른쪽 끝부터 차례대로 자리를 잡아간다.
입력 설명

 (정수) : 처리할 정수의 개수
 (정수) : 처리할 정수들

출력 설명
정렬 단계마다 모든 요소를 띄어쓰기로 구분하여 출력한다.
입력 예시 복사
10
10 9 8 7 6 5 4 3 2 1
출력 예시 복사
9 8 7 6 5 4 3 2 1 10
8 7 6 5 4 3 2 1 9 10
7 6 5 4 3 2 1 8 9 10
6 5 4 3 2 1 7 8 9 10
5 4 3 2 1 6 7 8 9 10
4 3 2 1 5 6 7 8 9 10
3 2 1 4 5 6 7 8 9 10
2 1 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
Hint
의사 코드 (pseudo code)

bubbleSort(배열):
    배열의 길이를 n이라 하자.
    0부터 n-1까지 반복 (index i로 반복):
        (정렬된 가장 큰 요소가 오른쪽으로 이동하므로, n-i-1까지만 검사)
        0부터 n-i-2까지 반복 (index j로 반복):
            만약 배열[j] > 배열[j + 1]이라면:
                배열[j]와 배열[j + 1]을 교환  // 큰 값을 오른쪽으로 이동
*/

#if 0

int main() {

    int n;
    scanf("%d", &n);

    unsigned int num[101];
    for (int i = 0; i < n; i++) {
        scanf(" %u", &num[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n -1; j++) {
            if (num[j] > num[j + 1]) {
                unsigned int tmp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmp;
            }
        }
        if (i != n - 1) {
            for (int k = 0; k < n; k++) {
                printf("%u ", num[k]);
            }
            printf("\n");
        }
        
    }


    return 0;
}

#endif


// J 비트 밀어내기
#if 0

int magic(int cnt) {
    int round = 0;
    int result = 0;

    for (int i = 0; i < cnt; i++) {
        int k = 1;
        for (int j = 0; j < round; j++) {
            k = k * 2; // 2의 round승 계산
        }
        round++;
        result = result + k;
    }
    return result; // cnt가 반복 횟수와 같아질 때 반환
}
int main() {

    int n;
    scanf("%d", &n);

    int cnt = 0;

    for (int i = 0; i < 8; i++) {
        if ((n & 1) == 1) {
            cnt++;
        }
        n = n >> 1;
    }
    printf("%d", magic(cnt));
    
    return 0;
}

#endif


// D 행렬곱 3
/*
문제 D: 행렬곱 3숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：92
통과：55
문제 설명 템플릿 복사
 x
 배열
와
 x
 배열
를 인자로 받아,
둘을 곱한 결과를 지정한 변수에 저장하는 함수 mat_product를 작성하시오.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mat_product(unsigned int *A, unsigned int *B, unsigned int *C, unsigned int n, unsigned int k, unsigned int m)
{
    // 이 위로 수정 금지

    // 이 아래로 수정 금지
}

int main(int argc, char const *argv[])
{
    unsigned int n, k, m;
    unsigned int A[100][100] = {0};
    unsigned int B[100][100] = {0};
    unsigned int C[100][100] = {0};

    scanf("%u %u %u", &n, &k, &m);
    for (size_t i = 0; i < n; i++)
        for (size_t ii = 0; ii < k; ii++)
            scanf("%u", A[i] + ii);
    for (size_t i = 0; i < k; i++)
        for (size_t ii = 0; ii < m; ii++)
            scanf("%u", B[i] + ii);

    mat_product((unsigned int *)A, (unsigned int *)B, (unsigned int *)C, n, k, m);

    for (size_t i = 0; i < n; i++)
        for (size_t ii = 0; ii < m; ii++)
            printf("%u%c", C[i][ii], ii == m - 1 ? '\n' : ' ');

    return 0;
}
입력 설명



 (정수) : 행렬
와
의 크기 정보
 (정수) : 서로 곱할 배열(행렬)의 성분

단, 계산 결과가
 미만인 경우만 입력한다.
출력 설명
의 결과를 출력한다.
입력 예시 복사
2 3 2
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

void mat_product(unsigned int* A, unsigned int* B, unsigned int* C, unsigned int n, unsigned int k, unsigned int m)
{
    // 이 위로 수정 금지
    unsigned int i = 0;
    while (i < n) {
        unsigned int j = 0;
        while (j < m) {
            C[i * m + j] = 0; // C[i][j] 초기화
            unsigned int t = 0;
            while (t < k) {
                C[i * m + j] += A[i * k + t] * B[t * m + j]; // 행렬 곱셈
                t++;
            }
            j++;
        }
        i++;
    }
    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    unsigned int n, k, m;
    unsigned int A[100][100] = { 0 };
    unsigned int B[100][100] = { 0 };
    unsigned int C[100][100] = { 0 };

    scanf("%u %u %u", &n, &k, &m);
    for (size_t i = 0; i < n; i++)
        for (size_t ii = 0; ii < k; ii++)
            scanf("%u", A[i] + ii);
    for (size_t i = 0; i < k; i++)
        for (size_t ii = 0; ii < m; ii++)
            scanf("%u", B[i] + ii);

    mat_product((unsigned int*)A, (unsigned int*)B, (unsigned int*)C, n, k, m);

    for (size_t i = 0; i < n; i++)
        for (size_t ii = 0; ii < m; ii++)
            printf("%u%c", C[i][ii], ii == m - 1 ? '\n' : ' ');

    return 0;
}

#endif

#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mat_product(unsigned int* A, unsigned int* B, unsigned int* C, unsigned int n, unsigned int k, unsigned int m)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            unsigned int sum = 0;
            for (int p = 0; p < k; p += 4) {
                sum += A[i * k + p] * B[p * m + j];
                sum += A[i * k + p + 1] * B[(p + 1) * m + j];
                sum += A[i * k + p + 2] * B[(p + 2) * m + j];
                sum += A[i * k + p + 3] * B[(p + 3) * m + j];
            }
            C[i * m + j] = sum;
        }
    }
}

int main(int argc, char const* argv[])
{
    unsigned int n, k, m;
    unsigned int A[100][100] = { 0 };
    unsigned int B[100][100] = { 0 };
    unsigned int C[100][100] = { 0 };

    scanf("%u %u %u", &n, &k, &m);
    for (size_t i = 0; i < n; i++)
        for (size_t ii = 0; ii < k; ii++)
            scanf("%u", A[i] + ii);
    for (size_t i = 0; i < k; i++)
        for (size_t ii = 0; ii < m; ii++)
            scanf("%u", B[i] + ii);

    mat_product((unsigned int*)A, (unsigned int*)B, (unsigned int*)C, n, k, m);

    for (size_t i = 0; i < n; i++)
        for (size_t ii = 0; ii < m; ii++)
            printf("%u%c", C[i][ii], ii == m - 1 ? '\n' : ' ');

    return 0;
}


#endif

#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mat_product(unsigned int* A, unsigned int* B, unsigned int* C, unsigned int n, unsigned int k, unsigned int m)
{
    // 이 위로 수정 금지
    for (int i = 0; i < n; i++) {


        for (int j = 0; j < m; j++) {

            for (int h = 0; h < k; h++) {


                C[i * 100 + j] += A[i * 100 + h] * B[h * 100 + j];
            }
        }
    }

    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    unsigned int n, k, m;
    unsigned int A[100][100] = { 0 };
    unsigned int B[100][100] = { 0 };
    unsigned int C[100][100] = { 0 };

    scanf("%u %u %u", &n, &k, &m);
    for (size_t i = 0; i < n; i++)
        for (size_t ii = 0; ii < k; ii++)
            scanf("%u", A[i] + ii);
    for (size_t i = 0; i < k; i++)
        for (size_t ii = 0; ii < m; ii++)
            scanf("%u", B[i] + ii);

    mat_product((unsigned int*)A, (unsigned int*)B, (unsigned int*)C, n, k, m);

    for (size_t i = 0; i < n; i++)
        for (size_t ii = 0; ii < m; ii++)
            printf("%u%c", C[i][ii], ii == m - 1 ? '\n' : ' ');

    return 0;
}

#endif


// E RGB2GRAY2
/*
문제 E: RGB2GRAY 2숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：228
통과：57
문제 설명 템플릿 복사
이미지 행렬의 Red, Green, Blue 성분으로 평균을 내어 grayscale 이미지로 변환하는 함수 rgb2gray를 작성하시오.
이때, 평균의 소수점 아래는 모두 버리고 파라미터는 단순 포인터(unsigned char *)로 받는다.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rgb2gray(unsigned char *gray, unsigned char *rgb, unsigned int n, unsigned int m)
{
    // 이 위로 수정 금지

    // 이 아래로 수정 금지
}

int main(int argc, char const *argv[])
{
    unsigned char rgb[100][100][3] = {0};
    unsigned char gray[100][100] = {0};
    unsigned int N, M;
    scanf("%u %u", &N, &M);
    for (size_t i = 0; i < N; i++)
    {
        for (size_t ii = 0; ii < M; ii++)
        {
            scanf("%hhu %hhu %hhu", rgb[i][ii], rgb[i][ii] + 1, rgb[i][ii] + 2);
        }
    }

    rgb2gray((unsigned char *)gray, (unsigned char *)rgb, N, M);

    for (size_t i = 0; i < N; i++)
    {
        for (size_t ii = 0; ii < M; ii++)
        {
            printf("%u%c", gray[i][ii], ii == M - 1 ? '\n' : ' ');
        }
    }

    return 0;
}


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

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rgb2gray(unsigned char* gray, unsigned char* rgb, unsigned int n, unsigned int m)
{
    // 이 위로 수정 금지
    for (int i = 0; i < n * m; i++) {
        // 각 픽셀의 RGB 값을 가져옴
        unsigned char r = rgb[3 * i];
        unsigned char g = rgb[3 * i + 1];
        unsigned char b = rgb[3 * i + 2];

        // 평균 계산 후 소수점 버리기
        unsigned char gray_value = (r + g + b) / 3;

        // 그레이스케일 이미지에 저장
        gray[i] = gray_value;
    }
    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    unsigned char rgb[100][100][3] = { 0 };
    unsigned char gray[100][100] = { 0 };
    unsigned int N, M;
    scanf("%u %u", &N, &M);
    for (size_t i = 0; i < N; i++)
    {
        for (size_t ii = 0; ii < M; ii++)
        {
            scanf("%hhu %hhu %hhu", rgb[i][ii], rgb[i][ii] + 1, rgb[i][ii] + 2);
        }
    }

    rgb2gray((unsigned char*)gray, (unsigned char*)rgb, N, M);

    for (size_t i = 0; i < N; i++)
    {
        for (size_t ii = 0; ii < M; ii++)
        {
            printf("%u%c", gray[i][ii], ii == M - 1 ? '\n' : ' ');
        }
    }

    return 0;
}


#endif

#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rgb2gray(unsigned char* gray, unsigned char* rgb, unsigned int n, unsigned int m)
{
    // 이 위로 수정 금지
    int gray_index = 0; // 그레이스케일 이미지의 인덱스를 따로 관리

    for (int i = 0; i < n * m * 3; i += 3) {
        int sum = rgb[i] + rgb[i + 1] + rgb[i + 2];
        gray[gray_index++] = sum / 3;
    }
    
    
    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    unsigned char rgb[100][100][3] = { 0 };
    unsigned char gray[100][100] = { 0 };
    unsigned int N, M;
    scanf("%u %u", &N, &M);
    for (size_t i = 0; i < N; i++)
    {
        for (size_t ii = 0; ii < M; ii++)
        {
            scanf("%hhu %hhu %hhu", rgb[i][ii], rgb[i][ii] + 1, rgb[i][ii] + 2);
        }
    }

    rgb2gray((unsigned char*)gray, (unsigned char*)rgb, N, M);

    for (size_t i = 0; i < N; i++)
    {
        for (size_t ii = 0; ii < M; ii++)
        {
            printf("%u%c", gray[i][ii], ii == M - 1 ? '\n' : ' ');
        }
    }

    return 0;
}


#endif

#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rgb2gray(unsigned char* gray, unsigned char* rgb, unsigned int n, unsigned int m)
{
    // 이 위로 수정 금지
    for (unsigned int i = 0; i < n; i++) {
        for (unsigned int j = 0; j < m; j++) {
            // RGB 배열의 시작 인덱스 계산
            int idx = (i * m + j) * 3;
            // 평균 계산 (소수점 아래 버림)
            gray[i * m + j] = (rgb[idx] + rgb[idx + 1] + rgb[idx + 2]) / 3;
        }
    }
    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    unsigned char rgb[100][100][3] = { 0 };
    unsigned char gray[100][100] = { 0 };
    unsigned int N, M;
    scanf("%u %u", &N, &M);
    for (size_t i = 0; i < N; i++)
    {
        for (size_t ii = 0; ii < M; ii++)
        {
            scanf("%hhu %hhu %hhu", rgb[i][ii], rgb[i][ii] + 1, rgb[i][ii] + 2);
        }
    }

    rgb2gray((unsigned char*)gray, (unsigned char*)rgb, N, M);

    for (size_t i = 0; i < N; i++)
    {
        for (size_t ii = 0; ii < M; ii++)
        {
            printf("%u%c", gray[i][ii], ii == M - 1 ? '\n' : ' ');
        }
    }

    return 0;
}

#endif

#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rgb2gray(unsigned char* gray, unsigned char* rgb, unsigned int n, unsigned int m)
{
    // 이 위로 수정 금지
    for (int i = 0; i < n; i++) {


        for (int j = 0; j < m; j++) {


            gray[i * 100 + j] = (rgb[i * 300 + j * 3] + rgb[i * 300 + j * 3 + 1] + rgb[i * 300 + j * 3 + 2]) / 3;
       
        }
    }

    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    unsigned char rgb[100][100][3] = { 0 };
    unsigned char gray[100][100] = { 0 };
    unsigned int N, M;
    scanf("%u %u", &N, &M);
    for (size_t i = 0; i < N; i++)
    {
        for (size_t ii = 0; ii < M; ii++)
        {
            scanf("%hhu %hhu %hhu", rgb[i][ii], rgb[i][ii] + 1, rgb[i][ii] + 2);
        }
    }

    rgb2gray((unsigned char*)gray, (unsigned char*)rgb, N, M);

    for (size_t i = 0; i < N; i++)
    {
        for (size_t ii = 0; ii < M; ii++)
        {
            printf("%u%c", gray[i][ii], ii == M - 1 ? '\n' : ' ');
        }
    }

    return 0;
}


#endif



// F 
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void count_bit(unsigned char* A, int N, int* B)
{
    // 이 위로 수정 금지
    int count = 0; // 현재 묶음의 비트 1의 개수
    int total_bits = 0; // 총 비트 수
    int i;

    // A를 4바이트(32비트)로 처리
    for (i = 0; i < 4; i++) {
        unsigned char byte = A[i]; // 현재 바이트

        for (int j = 0; j < 8; j++) { // 현재 바이트의 각 비트를 확인
            if (byte & (1 << j)) {
                count++; // 비트가 1인 경우 count 증가
            }
            total_bits++; // 총 비트 수 증가

            // N 비트마다 묶음을 처리
            if (total_bits % N == 0) {
                B[total_bits / N - 1] = count; // 결과 배열에 저장
                count = 0; // 다음 묶음을 위해 count 초기화
            }
        }
    }

    // 마지막 묶음 처리를 위한 로직
    if (total_bits % N != 0) {
        B[total_bits / N] = count; // 마지막 묶음의 비트 1의 개수 저장
    }

    B[(total_bits + N - 1) / N] = -1; // 마지막에 -1 추가
    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    unsigned int A = 0;
    int N = 0;
    int B[33] = { 0 };

    scanf("%X %d", &A, &N);

    count_bit((unsigned char*)&A, N, B);

    for (size_t i = 0; i < 33 && B[i] != -1; i++)
    {
        printf("%d ", B[i]);
    }

    return 0;
}



#endif

/*
문제 F: 비트 1의 개수 6숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：132
통과：41
문제 설명 템플릿 복사
,
,
를 인자로 받아,
를
 개의 bit만큼 묶어서 한 묶음당 비트 1의 개수가 몇 개인지 배열
에 저장하는 함수
void count_bit(unsigned char *A, int N, int *B)를 작성하시오.
마지막 묶음은 나머지 비트로 이루어져있고, B의 마지막에 -1을 저장한다.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void count_bit(unsigned char *A, int N, int *B)
{
    // 이 위로 수정 금지

    // 이 아래로 수정 금지
}

int main(int argc, char const *argv[])
{
    unsigned int A = 0;
    int N = 0;
    int B[33] = {0};

    scanf("%X %d", &A, &N);

    count_bit((unsigned char *)&A, N, B);

    for (size_t i = 0; i < 33 && B[i] != -1; i++)
    {
        printf("%d ", B[i]);
    }

    return 0;
}


입력 설명

 (정수) : 비트의 개수를 셀 정수, 대문자 16진수
 (정수) : 비트 1의 개수를 셀 단위

출력 설명
묶음당 비트 1의 개수가 몇 개인지 띄어쓰기로 구분하여 차례대로 출력한다.
입력 예시 복사
3320E663 9
출력 예시 복사
4 3 5 2

*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void count_bit(unsigned char* A, int N, int* B)
{
    // 이 위로 수정 금지
    
    int cnt = 0;
    int k = 0;
    int total_bits = 32;  // 32비트 정수이므로 총 32비트

    // A를 unsigned int로 다룰 수 있도록 (unsigned char는 1바이트, unsigned int는 4바이트)
    unsigned int num = *(unsigned int*)A;

    for (int i = 31; i >= 0; i--) {
        // 비트가 1인 경우 cnt 증가
        if ((num >> i) & 1) {
            cnt++;
        }

        // N개씩 묶어서 처리
        if ((31 - i) % N == N - 1 || i == 0) {  // N개씩 묶기, 마지막 비트도 처리
            B[k++] = cnt;
            cnt = 0;  // 묶음을 다 처리하면 카운트를 초기화
        }
    }

    B[k] = -1;  // 종료 표시

    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    unsigned int A = 0;
    int N = 0;
    int B[33] = { 0 };

    scanf("%X %d", &A, &N);

    count_bit((unsigned char*)&A, N, B);

    for (size_t i = 0; i < 33 && B[i] != -1; i++)
    {
        printf("%d ", B[i]);
    }

    return 0;
}


#endif



// I : 문자열 정렬
/*
문제 I: 문자열 정렬숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：cu29
제출：91
통과：43
문제 설명
주어진 여러 개의 문자열을 사전 순서대로 정렬하여 출력하는 프로그램을 작성하시오.
입력 설명

 (정수) : 입력할 문자열의 개수
 (문자열) : 사전순으로 정렬할 문자열

단, 알파벳 소문자로 이루어진 단어만 입력한다.
출력 설명
입력한 문자열을 사전순으로 정렬한 결과를 줄바꿈으로 구분하여 출력한다.
입력 예시 복사
3
abc
ab
a
출력 예시 복사
a
ab
abc
Hint
my_strcmp, my_strcpy, 2차원 배열, 정렬
*/
#if 0

#include <stdio.h>

#define MAX_STRINGS 100 // 최대 문자열 개수
#define MAX_LENGTH 100   // 최대 문자열 길이

// 문자열 비교 함수 (사전순)
int my_strcmp(const char* str1, const char* str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return (*str1 - *str2);
        }
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

// 문자열 복사 함수
void my_strcpy(char* dest, const char* src) {
    while ((*dest++ = *src++));
}

int main() {
    int n; // 입력할 문자열의 개수
    char strings[MAX_STRINGS][MAX_LENGTH]; // 문자열 배열

    // 문자열 개수 입력
    scanf("%d", &n);

    // 문자열 입력
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    // 버블 정렬을 사용하여 문자열 정렬
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (my_strcmp(strings[j], strings[j + 1]) > 0) {
                // 문자열 교환
                char temp[MAX_LENGTH];
                my_strcpy(temp, strings[j]);
                my_strcpy(strings[j], strings[j + 1]);
                my_strcpy(strings[j + 1], temp);
            }
        }
    }

    // 정렬된 문자열 출력
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}


#endif

