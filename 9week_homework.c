#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// A : 익명 4
/*

문제 A: 익명4숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：cu29
제출：79
통과：27
문제 설명 템플릿 복사
문자열에 주어진 이름이 있을 경우 원하는 단어로 바꾸는 함수 changeName이
잘 작동하도록 코드를 완성하시오.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지

// 이 아래로 수정 금지

void changeName(char *str, char *name, char *replace)
{
    char tmp[201] = {0};
    char *pstr = str;
    char *p = my_strstr(pstr, name); // str에 name이 있는지 검사
    int lname = 0;
    while (name[lname])
        lname++;
    while (p) // name이 있는 만큼 반복
    {
        my_strncat(tmp, pstr, p - pstr); // name 전까지 복사
        my_strncat(tmp, replace, 100);   // name 대신 replace로 대체
        pstr = p + lname;                // name의 뒤부터 다시 검사
        p = my_strstr(pstr, name);
    }
    my_strncat(tmp, pstr, 100); // 나머지 잇기
    my_strncpy(str, tmp, 200); // 변환한 문자열을 str에 복사
}

int main(int argc, char const *argv[])
{
    char str[201] = {0};
    char name[101] = {0};
    char replace[101] = {0};

    // 문자열 str을 입력받는다
    scanf("%[^\n]\n", str);
    // 문자열 name과 replace를 입력받는다
    scanf("%s %s", name, replace);

    // changeName 함수를 호출하여 문자열을 변경한다
    changeName(str, name, replace);

    // 결과를 출력한다
    printf("%s", str);

    return 0;
}
입력 설명

(문자열): 처리할 문장
(문자열): 처리할 이름
(문자열): 원하는 단어

단, 수정한 문자열의 길이가 200자 미만인 경우만 입력한다.
출력 설명
문자열
에서 주어진
 단어가 있을 경우
 단어로 바꾼 결과를 출력한다.
입력 예시 복사
My Name is EMBD
EMBD Angel
출력 예시 복사
My Name is Angel
Hint
void my_strncpy(char* str1, char* str2, int len)은 str2를 str1에 덮어쓰는 함수이다.

단, str2의 길이가 len보다 크다면 len개의 글자만 복사한다. (strncpy함수 참고)

void my_strncat(char* str1, char* str2, int len)은 str2를 str1의 뒤에 이어쓰는 함수이다.

단, str2의 길이가 len보다 크다면 len개의 글자만 복사한다. (strncat함수 참고)

char* my_strstr(char* str1, char* str2)은 str2가 str1에 존재하는지 검사하는 함수이다.

존재한다면 그 메모리 주소를, 존재하지 않는다면 NULL포인터를 반환한다. (strstr함수 참고)

*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지
char* my_strstr(char* str1, char* str2) {
    for (int i = 0; str1[i] != '\0'; i++) {
        int j = 0;
        while (str1[i + j] == str2[j] && str2[j] != '\0') {
            j++;
        }
        if (str2[j] == '\0') {
            return &str1[i];
        }
    }
    return NULL;
}

void my_strncat(char* str1, char* str2, int len) {
    int i = 0;
    while (str1[i] != '\0') {
        i++;
    }
    for (int j = 0; j < len && str2[j] != '\0'; j++) {
        str1[i] = str2[j];
        i++;
    }
    str1[i] = '\0';
}

void my_strncpy(char str1[], char str2[], int len) {
    int i = 0;
    for (; i < len && str2[i] != '\0'; i++) {
        str1[i] = str2[i];
    }
    for (; i < len; i++) {
        str1[i] = '\0';
    }
}
// 이 아래로 수정 금지

void changeName(char* str, char* name, char* replace)
{
    char tmp[201] = { 0 };
    char* pstr = str;
    char* p = my_strstr(pstr, name); // str에 name이 있는지 검사
    int lname = 0;
    while (name[lname])
        lname++;
    while (p) // name이 있는 만큼 반복
    {
        my_strncat(tmp, pstr, p - pstr); // name 전까지 복사
        my_strncat(tmp, replace, 100);   // name 대신 replace로 대체
        pstr = p + lname;                // name의 뒤부터 다시 검사
        p = my_strstr(pstr, name);
    }
    my_strncat(tmp, pstr, 100); // 나머지 잇기
    my_strncpy(str, tmp, 200); // 변환한 문자열을 str에 복사
}

int main(int argc, char const* argv[])
{
    char str[201] = { 0 };
    char name[101] = { 0 };
    char replace[101] = { 0 };

    // 문자열 str을 입력받는다
    scanf("%[^\n]\n", str);
    // 문자열 name과 replace를 입력받는다
    scanf("%s %s", name, replace);

    // changeName 함수를 호출하여 문자열을 변경한다
    changeName(str, name, replace);

    // 결과를 출력한다
    printf("%s", str);

    return 0;
}

#endif


// B : my_ito16a
/*
문제 B: my_ito16a숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：cu29
제출：88
통과：30
문제 설명 템플릿 복사
int 정수 value를 문자열
에 대문자 16진수로 작성하고
을 반환하는 my_ito16a함수를 작성하시오.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char *my_ito16a(char *str, int value)
{
    // 이 위로 수정 금지

    // 이 아래로 수정 금지
}

int main(int argc, char const *argv[])
{
    char S[101] = {0};
    int I;

    scanf("%d", &I);

    char *p = my_ito16a(S, I);
    if (p == S)
        printf("%s", p);
    else
        printf("This is wrong!!!\n");

    return 0;
}
입력 설명

 (정수) : 처리할 수

출력 설명
변환한 문자열을 출력한다.
입력 예시 복사
1234
출력 예시 복사
4D2
*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* my_ito16a(char* str, int value)
{
    // 이 위로 수정 금지
    int round = 0;

    while (1) {
        if (value == 0) {
            break;
        }

        int k= value & 0xF;
        if (k < 10) {
            str[round] = '0' + k;
       }
        else {
            str[round] = 'A' + (k - 10);
        }
        value = value >>4;
        round++;
    }

    for (int i = 0; i < round / 2; i++) {
        char temp = str[i];
        str[i] = str[round - i - 1];
        str[round - i - 1] = temp;
    }

    str[round] = '\0'; // 문자열 종료 문자 추가
    return str;

    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    char S[101] = { 0 };
    int I;

    scanf("%d", &I);

    char* p = my_ito16a(S, I);
    if (p == S)
        printf("%s", p);
    else
        printf("This is wrong!!!\n");

    return 0;
}

#endif

#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* my_ito16a(char* str, int value)
{
    // 이 위로 수정 금지
    const char* hex_chars = "0123456789ABCDEF";
    char* ptr = str;
    int is_negative = 0;

    // 0의 경우 특별 처리
    if (value == 0) {
        *ptr++ = '0';
        *ptr = '\0';
        return str;
    }

    // 음수 처리를 위한 부호 설정 (음수는 고려하지 않음)
    if (value < 0) {
        is_negative = 1;
        value = -value; // 절대값 사용
    }

    // 16진수 변환
    while (value > 0) {
        int remainder = value % 16; // 16으로 나눈 나머지
        *ptr++ = hex_chars[remainder]; // 해당하는 16진수 문자 추가
        value /= 16; // 다음 자리수로 이동
    }

    // 음수 부호 추가 (음수는 고려하지 않음)
    if (is_negative) {
        *ptr++ = '-';
    }

    // 문자열 종료
    *ptr = '\0';

    // 문자열 반전
    char* start = str;
    char* end = ptr - 1;
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }

    return str;
    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    char S[101] = { 0 };
    int I;

    scanf("%d", &I);

    char* p = my_ito16a(S, I);
    if (p == S)
        printf("%s", p);
    else
        printf("This is wrong!!!\n");

    return 0;
}

#endif


// C : 구멍 내기 3
/*
문제 C: 구멍 내기 3숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：cu29
제출：80
통과：35
문제 설명
입력한 정수의 최상위 비트부터
개의
번 비트를 0으로 바꾸어 출력하는 프로그램을 작성하시오.
입력 설명

(정수): 처리할 정수, 대문자 16진수
(정수): 처리할 비트 개수
(정수): 0으로 만들 비트 번호

출력 설명
변형한 수를 대문자 16진수로 출력한다.
입력 예시 복사
FFFFFFFF
13
3 5 6 7 9 10 16 18 19 21 23 25 28
출력 예시 복사
E89F4AB7

*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    unsigned int a;
    unsigned int filter = 0xFFFFFFFF;
    int num = 0;
    int idx;

    scanf("%X", &a);
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &idx);
        filter &= ~(1 << (31 - idx));


    }

    a &= filter;

    printf("%X", a);
}



#endif

// D : 책 쌓기 2
// 배울 것 : scanf(" %[^\n]"
/*
문제 D: 책 쌓기 2숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：cu29
제출：136
통과：31
문제 설명
책을 쌓고 치우는 과정을 반복할 때, 최종 상태를 출력하는 프로그램을 작성하시오.
책을 쌓는 건 "1 책제목"으로, 책을 치우는 건 "2"로 표현한다.

단, 처음에는 아무 책도 없고 책을 100권 이상 쌓을 수 없다.
입력 설명

 (정수) : 수행할 과정의 수
 (정수) : 수행할 작업, 1은 책을 쌓는 것이고 2는 맨 위의 책을 치우는 것이다
 (문자열) : 1 작업일 경우 책 제목(공백 존재 가능)이 존재하고, 2 작업일 경우 문자열이 존재하지 않는다.

쌓은 책의 수가 100권을 넘지 않는 경우만 입력한다.
출력 설명
쌓여있는 책들을 아래에서부터 출력한다.
만약 남은 책이 없다면 "nothing"을 출력한다.
입력 예시 복사
4
1 Data Structures
1 Operating Systems
1 Computer Architecture
2
출력 예시 복사
Data Structures
Operating Systems


*/

#if 0

int main() {

    unsigned int n;
    scanf("%u", &n);

    char stack[101][101] = { 0 };
    int top = 0;

    for (int i = 0; i < n; i++) {
        char word[105];
        scanf(" %[^\n]", word);

        if (word[0] == '1') {
            int r = 2;
            int j;
            for (j = 0; word[j] != '\0'; j++) {
                stack[top][j] = word[r];
                r++;
            }
            stack[top][j] = '\0';
            top++;
        }
        else if (word[0] == '2') {
            if (top > 0) {
                top--;
            }
       }
    }

    if (top == 0) {
        printf("nothing");
    }
    else {
        for (int k = 0; k <=top-1; k++) {
            for (int j = 0; stack[k][j] != '\0'; j++) {
                printf("%c", stack[k][j]);
            }
            printf("\n");
        }
    }


    return 0;
}


#endif

#if 0


#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    char stack[101][101] = { 0 };
    int top = 0;

    for (int i = 0; i < n; i++) {
        char word[105];
        scanf(" %[^\n]", word); // 공백 포함하여 한 줄 전체를 입력받음

        if (word[0] == '1') {
            // 문자열 "1 " 이후의 실제 내용을 스택에 저장
            int j = 2; // 첫 두 글자 "1 " 건너뜀
            int k = 0;
            while (word[j] != '\0') {
                stack[top][k++] = word[j++];
            }
            stack[top][k] = '\0'; // 널 문자 추가
            top++;
        }

        if (word[0] == '2') {
            if (top > 0) { // top이 0 이상일 때만 감소
                top--;
            }
        }
    }

    // 스택에 남은 문자열 출력
    if (top == 0) {
        printf("nothing");
    }
    else {
        for (int k = 0; k < top; k++) { // 입력 순서대로 출력
            printf("%s\n", stack[k]);
        }
    }

    return 0;
}



#endif

// E : 이름 빙고 2
/*
문제 E: 이름 빙고 2숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：cu29
제출：40
통과：29
문제 설명 템플릿 복사
이름으로 3 x 3 빙고를 진행중이다.
빙고판과 불린 이름, 부른 이름의 개수를 파라미터로 넘겨받아
빙고판의 불린 이름을 "."으로 바꾸는 함수 checkout_bingo를 작성하시오.
단, 불린 이름과 빙고판은 1차원 포인터(char *)로 받는다.

파라미터의 자료형은 템플릿을 참고하여 직접 구성할 것.
올바르지 않은 자료형을 사용할 경우 감점함.

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
    char bingo_board[3][3][12] = {0};
    unsigned int N = 0;
    char called_name[100][12] = {0};

    for (size_t i = 0; i < 3; i++)
        for (size_t j = 0; j < 3; j++)
            scanf("%s", bingo_board[i][j]);
    scanf("%u", &N);

    for (size_t i = 0; i < N; i++)
        scanf("%s", called_name[i]);

    checkout_bingo((char *)bingo_board, (char *)called_name, N);

    for (size_t i = 0; i < 3; i++)
        for (size_t j = 0; j < 3; j++)
            printf("%s%c", bingo_board[i][j], (j == 2 ? '\n' : ' '));

    return 0;
}
입력 설명


 (문자열): 빙고판에 적은 이름, 알파벳으로만 이루어진다
 (정수) : 부른 이름의 개수
(문자열): 부른 이름, 알파벳으로만 이루어진다

출력 설명
완성된 줄의 개수를 출력한다.
입력 예시 복사
siu cheolsu jingu
younghui com oppen
stein adam eve
4
com oppen stein younghui
출력 예시 복사
siu cheolsu jingu
. . .
. adam eve
Hint
직접 만든 함수는 코드 작성영역에 같이 적어서 사용할 수 있습니다.
*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지
void checkout_bingo(char* bingo_board, char* called_name, unsigned int N) {
    // 빙고판의 크기 정의
    const int ROWS = 3;
    const int COLS = 3;
    const int NAME_LENGTH = 12;

    // 1차원 배열로 빙고판을 탐색
    for (unsigned int i = 0; i < N; i++) {
        // 각 부른 이름에 대해
        for (int j = 0; j < ROWS; j++) {
            for (int k = 0; k < COLS; k++) {
                // 현재 위치의 이름과 부른 이름을 비교
                int match = 1; // 일치 여부 플래그
                for (int l = 0; l < NAME_LENGTH; l++) {
                    if (bingo_board[(j * COLS + k) * NAME_LENGTH + l] != called_name[i * NAME_LENGTH + l]) {
                        if (bingo_board[(j * COLS + k) * NAME_LENGTH + l] != '\0' || called_name[i * NAME_LENGTH + l] != '\0') {
                            match = 0; // 일치하지 않음
                            break;
                        }
                    }
                }
                if (match) {
                    // 일치하면 해당 위치를 '.'으로 변경
                    for (int l = 0; l < NAME_LENGTH; l++) {
                        bingo_board[(j * COLS + k) * NAME_LENGTH + l] = (l == 0) ? '.' : '\0';
                    }
                }
            }
        }
    }
}
// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
    char bingo_board[3][3][12] = { 0 };
    unsigned int N = 0;
    char called_name[100][12] = { 0 };

    for (size_t i = 0; i < 3; i++)
        for (size_t j = 0; j < 3; j++)
            scanf("%s", bingo_board[i][j]);
    scanf("%u", &N);

    for (size_t i = 0; i < N; i++)
        scanf("%s", called_name[i]);

    checkout_bingo((char*)bingo_board, (char*)called_name, N);

    for (size_t i = 0; i < 3; i++)
        for (size_t j = 0; j < 3; j++)
            printf("%s%c", bingo_board[i][j], (j == 2 ? '\n' : ' '));

    return 0;
}

#endif

// F : 데칼코마니 2
/*
문제 F: 데칼코마니 2숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：107
통과：60
문제 설명
입력받은 정수의 하위 12 비트가 상위 12 비트의 대칭이 되도록 바꾸어 출력하라.
입력 설명

 (정수) : 처리할 정수, 대문자 16진수

출력 설명
문제 설명에 따라 하위 24비트를 2진수로 출력한다.
단, 4비트마다 띄어쓰기로 구분한다.
입력 예시 복사
700000
출력 예시 복사
0111 0000 0000 0000 0000 1110
*/

#if 0

int main() {

    unsigned int N;
    scanf("%X", &N);

 
    int upbit = (N >> 12) & 0xFFF;

    int array[35];

    for (int i = 11; i >= 0; i--) {
        array[11 - i] = (upbit >> i) & 1;
    }
    for (int i = 0; i <=11; i++) {
        array[12 + i] = (upbit >> i) & 1;
    }

    for (int i = 0; i < 24; i++) {
        if ((i ) % 4 == 0 && i!=0) {
            printf(" ");
        }
        printf("%d", array[i]);
    }
   

    return 0;
}

#endif

// G : 비트 1의 개수 4

#if 0

int main() {

    unsigned int a;
    scanf("%X", &a);

    int n;
    scanf("%d", &n);




    return 0;
}

#endif

#if 0

#include <stdio.h>

int count_ones_in_hex(char hex) {
    int count = 0;
    int value;

    // 16진수 문자에 대한 값 계산
    if (hex >= '0' && hex <= '9') {
        value = hex - '0';
    }
    else if (hex >= 'A' && hex <= 'F') {
        value = hex - 'A' + 10;
    }
    else {
        return 0; // 잘못된 입력 처리
    }

    // 각 자리의 1의 개수 세기
    for (int i = 0; i < 4; i++) {
        if (value & (1 << i)) {
            count++;
        }
    }
    return count;
}

int main() {
    char hex_input[65]; // 최대 16진수 입력 크기
    int bit_unit;

    // 입력 받기
    scanf("%[^\n]s", hex_input); // 16진수 문자열 읽기
    scanf("%d", &bit_unit); // 비트 묶음 크기 읽기

    int total_groups = 0; // 총 묶음 개수
    int group_ones[100]; // 1의 개수를 저장할 배열 (최대 100개 묶음으로 가정)
    int current_group_ones = 0;
    int current_bit_count = 0;

    for (int i = 0; hex_input[i] != '\0'; i++) {
        // 16진수 문자 처리
        if (hex_input[i] != ' ') {
            current_group_ones += count_ones_in_hex(hex_input[i]);
            current_bit_count += 4; // 16진수 한 자리는 4 비트에 해당

            // 비트 묶음 처리
            if (current_bit_count == bit_unit) {
                group_ones[total_groups++] = current_group_ones; // 배열에 추가
                current_group_ones = 0; // 다음 묶음 초기화
                current_bit_count = 0; // 비트 카운트 초기화
            }
        }
    }

    // 마지막 묶음 처리 (남은 비트)
    if (current_bit_count > 0) {
        group_ones[total_groups++] = current_group_ones; // 남은 비트 수 저장
    }

    // 배열에서 꺼내서 출력
    for (int i = 0; i < total_groups; i++) {
        printf("%d", group_ones[i]);
        if (i < total_groups - 1) {
            printf(" "); // 다음 값과의 구분
        }
    }

    printf("\n"); // 줄바꿈 추가

    return 0;
}


#endif

#if 0

#include <stdio.h>

#define MAX_BITS 128 // 최대 비트 수 (32개의 16진수)

void count_bits(const char* hex_string, int unit) {
    char binary_string[MAX_BITS] = { 0 }; // 이진수 문자열 저장
    int bit_count = 0;

    // 16진수를 이진수로 변환
    for (int i = 0; hex_string[i] != '\0'; ++i) {
        int value;
        if (hex_string[i] >= '0' && hex_string[i] <= '9') {
            value = hex_string[i] - '0';
        }
        else if (hex_string[i] >= 'A' && hex_string[i] <= 'F') {
            value = hex_string[i] - 'A' + 10;
        }
        else {
            continue; // 유효하지 않은 문자는 무시
        }

        // 4비트로 변환하여 binary_string에 추가
        for (int j = 3; j >= 0; --j) {
            binary_string[bit_count++] = ((value >> j) & 1) ? '1' : '0';
        }
    }

    // 단위로 나누어 비트 1의 개수를 센다
    for (int i = 0; i < bit_count; i += unit) {
        int count = 0;
        for (int j = 0; j < unit && (i + j) < bit_count; ++j) {
            if (binary_string[i + j] == '1') {
                count++;
            }
        }
        printf("%d ", count);
    }
    printf("\n");
}

int main() {
    char hex_input[128];
    int unit_input;

    // 입력 받기
    scanf("%[^\n]", hex_input); // 한 줄 입력 받기
    scanf("%d", &unit_input); // 단위 입력 받기

    // 비트 1의 개수 계산 및 출력
    count_bits(hex_input, unit_input);

    return 0;
}


#endif

#if 0

int main() {

    unsigned int arr[4] = { 0, };
    for (int i = 0; i < 4; i++) {
        scanf("%X", &arr[i]);
    }

    unsigned char N = 0;
    scanf("%hhu", &N);

    int cnt = 0; // 1개수를 담는 변수
    int count = 0; // 묶음 개수가 됐는지 확인하는 변수

    for (int i = 0; i < 4; i++) {
        for (int j = 31; j >= 0; j--) {
            int bit = (arr[i] >> j) & 0x1;
            count++;
            if (bit) cnt++;

            if (count % N == 0 && !(i == 3 && j == 0)) {
                printf("%d ", cnt);
                cnt = 0; // 카운트 초기화
            }

            else if (i == 3 && j == 0) { // 마지막 묶음인 경우
                printf("%d", cnt);
            }
        }
    }
    return 0;
}

#endif



// H : 인터리빙 2
/*
문제 H: 인터리빙 2숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：63
통과：43
문제 설명
4바이트 양의 정수를 8개 입력한다.
총 32바이트의
를 그림과 같이 순서를 바꾸고, 바꾼 수를 출력하는 프로그램을 작성하시오.
입력 설명

 (정수): 처리할 정수, 대문자 16진수

출력 설명
이미지와 같이 가공한 결과를 대문자 16진수로 출력한다.
입력 예시 복사
4030201 4030201 8070605 8070605 C0B0A09 C0B0A09 F0E0D F0E0D
출력 예시 복사
5050101 D0D0909 6060202 E0E0A0A 7070303 F0F0B0B 8080404 C0C
*/

#if 0

int new(int one, int two, int three, int four, int num){

    int bit1,bit2,bit3,bit4;
    bit1 = one >> num;
    bit2 = two >> num;
    bit3 = three >> num;
    bit4 = four >> num;

    int result = 0;
    result |= bit1 & 0xFF000000;
    result |= bit2 & 0x00FF0000;
    result |= bit3 & 0x0000FF00;
    result |= bit4 & 0x000000FF;

    return result;
}

int main() {

    int a, b, c;
    int d, e, f;
    int g, h;

    scanf("%X %X %X %X %X %X %X %X", &a, &b, &c, &d, &e, &f, &g, &h);

    printf("%X ", new(a, b, c, d, 0));
    printf("%X ", new(a, b, c, d, 8));
    printf("%X ", new(a, b, c, d, 16));
    printf("%X ", new(a, b, c, d, 24));
    //
    printf("%X ", new(e, f, g, h, 0));
    printf("%X ", new(e, f, g, h, 8));
    printf("%X ", new(e, f, g, h, 16));
    printf("%X ", new(e, f, g, h, 24));


    return 0;
}

#endif

#if 0

int new(int one, int two, int three, int four, int num){
    int result = 0;

// 각 입력값에서 num에 해당하는 비트를 가져오고 조합
result |= (one >> (num * 8)) & 0xFF;     // 첫 번째 입력
result |= ((two >> (num * 8)) & 0xFF) << 8;  // 두 번째 입력
result |= ((three >> (num * 8)) & 0xFF) << 16; // 세 번째 입력
result |= ((four >> (num * 8)) & 0xFF) << 24; // 네 번째 입력

return result;
}

int main() {
    int a, b, c, d, e, f, g, h;

    // 입력을 16진수로 받기
    scanf("%X %X %X %X %X %X %X %X", &a, &b, &c, &d, &e, &f, &g, &h);

    // 각 경우에 대해 new 함수 호출
    
   
    
   
    printf("%X ", new(a, b, c, d, 0)); // 첫 번째 바이트 조합
    printf("%X ", new(e, f, g, h, 0)); // 첫 번째 바이트 조합
    printf("%X ", new(a, b, c, d, 1)); // 두 번째 바이트 조합
    printf("%X ", new(e, f, g, h, 1)); // 두 번째 바이트 조합
    printf("%X ", new(a, b, c, d, 2)); // 세 번째 바이트 조합
    printf("%X ", new(e, f, g, h, 2)); // 세 번째 바이트 조합
   
    
    printf("%X ", new(a, b, c, d, 3)); // 네 번째 바이트 조합
    printf("%X ", new(e, f, g, h, 3)); // 네 번째 바이트 조합

    return 0;
}


#endif

// I : 큰 비트 시프트 4

#if 0

int main() {

    int number[7];
    for (int i = 1; i <= 5; i++) {
        scanf("%X", &number[i]);
    }

    int n;
    scanf("%d", &n);

    int result[6];

    if (n > 0) {
        int up = 0;
        for (int i = 5; i >1; i--) {
            up = number[i] << n;
            if (up > 256) {
                up = up - 256;
            }
            result[i] |= up & 0xFF;
        }
        result[1] |= up & 0xFF;
    }
    else {
        int down = 0;
        for (int i = 1; i <= 4; i++) {
            down = number[i] >> -n;
            if (down > 256) {
                down = down - 256;
            }
            result[i] |= down & 0xFF;
        }
        result[5] |= down & 0xFF;
    }

    for (int i = 1; i <= 5; i++) {
        printf("%02X ", result[i]); // 대문자 16진수로 출력
    }
    printf("\n");

    return 0;
}

#endif

#if 0

#include <stdio.h>

int main() {
    int number[6]; // 0~5 인덱스를 사용
    for (int i = 1; i <= 5; i++) {
        scanf("%X", &number[i]);
    }

    int n;
    scanf("%d", &n);

    int result[6] = { 0 }; // result 배열 초기화

    if (n > 0) {
        for (int i = 5; i >= 1; i--) {
            int up = number[i] >> n; // 시프트 연산
            result[i] = up & 0xFF; // 결과를 result 배열에 저장
        }
    }
    else {
        for (int i = 1; i <= 5; i++) {
            int down = number[i] << -n; // 시프트 연산
            result[i] = down & 0xFF; // 결과를 result 배열에 저장
        }
    }

    // 결과 출력
    for (int i = 1; i <= 5; i++) {
        printf("%02X ", result[i]); // 대문자 16진수로 출력
    }
    printf("\n");

    return 0;
}


#endif

#if 0

int main() {

    int num[6];
    for (int i = 0; i < 5; i++) {
        scanf("%X", &num[i]);
    }




    return 0;
}

#endif

#if 0

int main() {

    unsigned char arr[5] = { 0, };
    unsigned char A = 0;
    int NN = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%hhX", &A);
        arr[i] = A;
    }

    int N = 0;
    scanf("%d", &N);

    if (N >= 0) { //왼쪽으로
        for (int i = 0; i < N; i++) {
            unsigned int next = (arr[4] & 0x80) >> 7;
            arr[4] = arr[4] << 1;
            for (int j = 3; j >= 0; j--) {
                unsigned int nn = (arr[j] & 0x80) >> 7;
                arr[j] = (arr[j] << 1) | next;
                next = nn;
            }
        }
    }

    else if (N < 0) { // 오른쪽으로
        NN = -N;
        for (int i = 0; i < NN; i++) {
            unsigned int next = (arr[0] & 0x1) << 7;
            arr[0] = arr[0] >> 1;
            for (int j = 1; j < 5; j++) {
                unsigned int nn = (arr[j] & 0x1) << 7;
                arr[j] = (arr[j] >> 1) | next;
                next = nn;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%hhX ", arr[i]);
    }

    return 0;
}

#endif


// J : C언어 배열 여행 14
#if 0

int main() {

    char t[6];
    char array[101];
    scanf("%s %s",t, array);

    int size = 0;
    if (t[0] == 'i') {
        size = 4;
    }
    else if (t[0] == 'c') {
        size = 1;
    }
    else if (t[0] == 's') {
        size = 2;
    }

    int num[11] = { 0 };
    int k = 0;
    int cnt = 1;
    for (int i = 0; array[i] != '\0'; i++) {
        if (array[i] == '[') {
            int value = 0;
            i++;
            // Accumulate digits until we reach `]`
            while (array[i] != ']' && array[i] != '\0') {
                value = value * 10 + (array[i] - '0');
                i++;
            }
            num[k++] = value;
        }
    }

    for (int i = 1; i < k; i++) {
        cnt *= num[i]; // Calculate total elements in the array
    }

    int I; // The integer to add
    scanf("%d", &I);

    printf("%X",0+cnt*I *size);
   
    return 0;
}


#endif

#if 0

#include <stdio.h>

int main() {

    char t[6];
    char array[101];
    scanf("%s %s", t, array);

    int size = 0;
    if (t[0] == 'i') {
        size = 4;
    }
    else if (t[0] == 'c') {
        size = 1;
    }
    else if (t[0] == 's') {
        size = 2;
    }

    int num[11] = { 0 };
    int k = 0;
    int cnt = 1;

    // Parse the array declaration to get dimensions
    for (int i = 0; array[i] != '\0'; i++) {
        if (array[i] == '[') {
            int value = 0;
            i++;
            // Accumulate digits until we reach `]`
            while (array[i] != ']' && array[i] != '\0') {
                value = value * 10 + (array[i] - '0');
                i++;
            }
            num[k++] = value; // Store the size of the dimension
        }
    }

    // Calculate the offset (total number of elements in the preceding dimensions)
    for (int i = 0; i < k; i++) {
        cnt *= num[i]; // Calculate total elements in the array
    }
    cnt *= size; // Multiply by the size of each element to get the byte offset

    int add; // The integer to add
    scanf("%d", &add);

    // Print the resulting address calculation in hexadecimal format
    printf("%X", 0x0 + add + cnt);

    return 0;
}


#endif

#if 0

int main() {

    char str[100];
    unsigned int I, size = 0, result = 1;
    int c[10], index = 0;

    scanf("%[^\n]s", str);
    scanf("%u", &I);
    
    if (str[0] == 'c')size = 1;
    if (str[0] == 's')size = 2;
    if (str[0] == 'i')size = 4;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '[') {
            int d = 0;
            i++;
            while (str[i] >= '0' && str[i] <= '9') {
                d = d * 10 + (str[i] - '0');
                i++;
            }
            c[index++] = d;
        }
    }

    for (int i = 2; i < index; i++) {
        result *= c[i];
    }
    printf("%X", size * result * I);

    return 0;
}

#endif
