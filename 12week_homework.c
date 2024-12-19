#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// A : 스왑 3형제
/*
문제 A: 스왑 3형제숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：106
통과：68
문제 설명 템플릿 복사
int 이중포인터 변수의 값을 스왑하는 함수 swap_double_ptr와,
int 포인터 변수의 값을 스왑하는 함수 swap_ptr와,
int 변수의 값을 스왑하는 함수 swap_int를 모두 작성하시오.

*** 단, 파라미터를 적절히 구성해야하며, 적절하지 않은 파라미터 구성은 감점조치함. ***

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
    int a, b, c, d;
    int *pa = &a;
    int *pb = &b;
    int *pc = &c;
    int *pd = &d;
    int **ppa = &pa;
    int **ppb = &pb;
    int **ppc = &pc;
    int **ppd = &pd;
    scanf("%d%d%d%d", pa, pb, pc, pd);

    swap_double_ptr(&ppa, &ppb);
    swap_ptr(&pb, &pc);
    swap_int(&c, &d);

    printf("%d %d %d %d\n", a, b, c, d);
    printf("%d %d %d %d\n", *pa, *pb, *pc, *pd);
    printf("%d %d %d %d\n", **ppa, **ppb, **ppc, **ppd);
    return 0;
}
입력 설명

 (정수) : 처리할 정수, 각각 변수 a, b, c, d에 저장한다.

출력 설명
템플릿 코드의 구성대로 swap한 결과를 출력한다.
입력 예시 복사
1 2 3 4
출력 예시 복사
1 2 4 3
1 4 2 3
4 1 2 3
*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지

void swap_double_ptr(int*** p1, int*** p2) {
    int** tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void swap_ptr(int** p1, int** p2) {
    int* tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void swap_int(int* p1, int* p2) {

    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
    int a, b, c, d;
    int* pa = &a;
    int* pb = &b;
    int* pc = &c;
    int* pd = &d;
    int** ppa = &pa;
    int** ppb = &pb;
    int** ppc = &pc;
    int** ppd = &pd;
    scanf("%d%d%d%d", pa, pb, pc, pd);

    swap_double_ptr(&ppa, &ppb);
    swap_ptr(&pb, &pc);
    swap_int(&c, &d);

    printf("%d %d %d %d\n", a, b, c, d);
    printf("%d %d %d %d\n", *pa, *pb, *pc, *pd);
    printf("%d %d %d %d\n", **ppa, **ppb, **ppc, **ppd);
    return 0;
}


#endif


// I : zero padding
/*
문제 I: zero padding숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：21
통과：16
문제 설명
8 x 8 크기의 이미지 데이터가 주어질 때,
이미지의 테두리
칸을 0으로 만들고 출력하는 프로그램을 작성하시오.
입력 설명


 (정수) : 이미지 데이터
 (정수) : 0으로 만들 테두리 두께

출력 설명
이미지의 바깥
줄을 0으로 바꾸어 출력한다.
입력 예시 복사
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8
1
출력 예시 복사
0 0 0 0 0 0 0 0
0 2 3 4 5 6 7 0
0 2 3 4 5 6 7 0
0 2 3 4 5 6 7 0
0 2 3 4 5 6 7 0
0 2 3 4 5 6 7 0
0 2 3 4 5 6 7 0
0 0 0 0 0 0 0 0
Hint
원래 zero padding은 바깥에 0을 붙여 사이즈를 키우는 것임.

*/
#if 0

int main() {

    int num[8][8];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            scanf(" %d", &num[i][j]);
        }
    }

    int n;
    scanf("%d", &n);

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i < n) {
                num[i][j] = 0;
            }
            if (j < n) {
                num[i][j] = 0;
            }
            if (7-i < n ) {
                num[i][j] = 0;
            }
            if (7 - j < n) {
                num[i][j] = 0;
            }
            
            
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#endif

// H : 시간 더하기
/*
문제 H: 시간 더하기숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：43
통과：15
문제 설명
시간 두 개를 "hh:mm:ss" 형태로 입력하면, 두 시간을 더한 결과를 출력하시오.
입력 설명

 (정수) : 시
 (정수) : 분
 (정수) : 초

출력 설명
두 시간을 더한 결과를 "hh:mm:ss" 형태로 출력한다.
단, 시 분 초의 범위를 벗어나면 안 된다.
입력 예시 복사
00:00:30
00:01:31
출력 예시 복사
00:02:01
*/
#if 0

int main() {

    int a;
    int b;
    int c;
    scanf("%d:%d:%d", &a, &b, &c);

    int d;
    int e;
    int f;
    scanf("%d:%d:%d", &d, &e, &f);

    int hour = a + d;
    int minute = b + e;
    int sec = c + f;

    if (sec >= 60) {
        minute += sec / 60;
        sec %= 60;
    }
    if (minute >= 60) {
        hour += minute / 60;
        minute %= 60;
    }
    if (hour >= 24) {
        hour %= 24;
    }
    printf("%02d:%02d:%02d", hour, minute, sec);
    return 0;
}

#endif

// F : 선택 정렬
/*
문제 F: 선택 정렬숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：45
통과：24
문제 설명
선택 정렬은 다음과 같이 진행된다. 2번 과정을 수행할 때마다 결과를 출력하는 프로그램을 작성하시오.

1. 배열의 첫 번째 값부터 시작하여, 나머지 값을 하나씩 검사하며 현재 범위에서 가장 작은 값을 찾는다.
2. 찾은 가장 작은 값과 현재 범위의 첫 번째 값을 교환한다.
3. 교환 후, 다음 범위(두 번째 값부터 끝까지)에 대해 같은 작업을 반복한다.
4. 배열의 끝까지 이 과정을 반복하여 모든 값이 크기 순서대로 정렬되도록 한다.
입력 설명

 (정수) : 처리할 정수의 개수
 (정수) : 처리할 정수들

출력 설명
정렬 단계마다 모든 요소를 띄어쓰기로 구분하여 출력한다.
입력 예시 복사
10
10 9 8 7 6 5 4 3 2 1
출력 예시 복사
1 9 8 7 6 5 4 3 2 10
1 2 8 7 6 5 4 3 9 10
1 2 3 7 6 5 4 8 9 10
1 2 3 4 6 5 7 8 9 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
Hint
의사 코드 (pseudo code)

selectionSort(배열):
    배열의 길이를 n이라 하자.
    0부터 n-1까지 반복 (index i로 반복):
        min_idx = i  // 현재 범위에서 가장 작은 값의 인덱스를 추적
        i+1부터 n-1까지 반복 (index j로 반복):
            만약 배열[j] < 배열[min_idx]라면:
                min_idx = j  // 더 작은 값을 발견하면 인덱스 갱신

        배열[i]와 배열[min_idx]를 교환  // 가장 작은 값과 현재 값을 교환
*/
#if 0

int main() {

    int n;
    scanf("%d", &n);

    int num[101];

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    int min_idx;
    for (int i = 0; i < n - 1; i++) {
        min_idx = i;
        for (int j = i + 1; j < n ; j++) {
            if (num[j] < num[min_idx]) {
                min_idx = j;
            }
        }
        int tmp = num[i];
        num[i] = num[min_idx];
        num[min_idx] = tmp;

        for (int k = 0; k < n; k++) {
            printf("%d ", num[k]);
        }
        printf("\n");
    }


    return 0;
}


#endif

// C 레츠고 면접
/*
문제 C: 레츠고 면접숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：204
통과：51
문제 설명
"BTS, 봉준호, 손흥민, 페이커, ???, Let's go"
우리나라를 빛낸 레츠고 무리이다.

레츠고 무리의 마지막 자리에 들어가려면,
레츠고 면접자 중 토익 점수와 C언어2 퀴즈 점수의 합이 가장 높아야한다.
토익 점수가 면접자들 중 가장 높을 경우 가산점 50점이 부여된다.

마지막 레츠고 주인공의 이름을 출력하라.
입력 설명

 (정수) : 면접자 인원 수
 (문자열) : 면접자 이름
 (정수) : 토익 점수
 (정수) : C언어2 퀴즈 점수

출력 설명
최종 점수가 가장 높은 면접자의 이름을 출력하라.
입력 예시 복사
4
JayKim 650 120
EmbeddedPark 750 180
LeeBye 800 50
LifeOfKiss 400 300
출력 예시 복사
EmbeddedPark
*/
#if 0

int main() {

    int n;
    scanf("%d", &n);

    char name[101][51];
    int num1[101];
    int num2[101];
    int num3[101] = { 0 };

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", name[i], &num1[i], &num2[i]);
    }

    for (int i = 0; i < n; i++) {
        num3[i] = num1[i] + num2[i];
    }

    int max = -999;
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (num1[i] > max) {
            max = num1[i];
            index = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (num1[i] == max) {
            num3[i] += 50;
        }
    }

  

    int max2 = -999;
    int index2 = 0;
    for (int i = 0; i < n; i++) {
        if (num3[i] > max2) {
            max2 = num3[i];
            index2 = i;
        }
    }

    printf("%s", name[index2]);

    return 0;
}

#endif

// G 패리티비트 모으기
/*
문제 G: 패리티비트 모으기숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：31
통과：23
문제 설명 템플릿 복사

unsigned char 8칸을 인자로 받고, 각 바이트의 패리티 비트를 모아 unsigned char로 반환하는 함수
make_parityBit_chunk를 작성하시오.

비트 1이 홀수개이면 1, 짝수개이면 0으로 하는 짝수 패리티 비트를 기준으로 한다.
(비트의 수가 짝수개가 되도록 한다.)




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
    unsigned char data[8] = {0};
    for (size_t i = 0; i < 8; i++)
    {
        scanf("%hhX", data + i);
    }

    unsigned char ans = make_parityBit_chunk(data);

    printf("%X", ans);

    return 0;
}
입력 설명

 (정수) : 처리할 데이터, 대문자 16진수

출력 설명
8바이트 각각의 패리티비트를 모은 unsigned char 변수를 대문자 16진수로 출력한다.
입력 예시 복사
1 3 7 F 1F 3F 7F FF
출력 예시 복사
AA
*/
#if 0


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지

int result(int a, int b, int c, int d, int e, int f, int g, int h) {
    int n = a * 128 + b * 64 + c * 32 + d * 16 + e * 8 + f * 4 + g * 2 + h;
    return n;
}

int make_parityBit_chunk(char data[]) {

    int bit[8];
    for (int i = 0; i < 8; i++) {
        int cnt = 0;
        int n = data[i];
        for (int k = 0; k < 8; k++) {
            if ((n & 1) == 1) {
                cnt++;
            }
            n = n >> 1;
        }
        if (cnt % 2 == 0) {
            bit[i] = 0;
        }
        else {
            bit[i] = 1;
        }
    }

    return result(bit[0], bit[1], bit[2], bit[3], bit[4], bit[5], bit[6], bit[7]);


}

// 이 아래로 수정 금지

int main(int argc, char const* argv[])
{
    unsigned char data[8] = { 0 };
    for (size_t i = 0; i < 8; i++)
    {
        scanf("%hhX", data + i);
    }

    unsigned char ans = make_parityBit_chunk(data);

    printf("%X", ans);

    return 0;
}

#endif

// D Yibamble
/*
문제 D: Yibambe숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：66
통과：32
문제 설명 템플릿 복사
특정 좌표를 입력하면, 해당 좌표를 중심으로 하는 X자를 배열에 저장하는 함수
wakanda_forever를 작성하시오.
X자에 해당하는 칸은 'X'로, 나머지 칸은 ' '으로 board를 채워야 한다.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void wakanda_forever(int x, int y, char *board)
{
    // 이 위로 수정 금지

    // 이 아래로 수정 금지
}

int main(int argc, char const *argv[])
{
    int x, y;
    char board[8][8] = {0};

    scanf("%d %d", &x, &y);

    wakanda_forever(x, y, (char *)board);

    for (size_t i = 0; i < 8; i++)
    {
        for (size_t ii = 0; ii < 8; ii++)
        {
            printf("%c", board[i][ii]);
        }
        printf("\n");
    }

    return 0;
}
입력 설명

 (정수) : X자 중심의 행 번호
 (정수) : X자 중심의 열 번호

출력 설명
wakanda_forever에 의해 채워진 board를 출력한다.
입력 예시 복사
3 3
출력 예시 복사
X     X
 X   X
  X X
   X
  X X
 X   X
X     X
       X
*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void wakanda_forever(int x, int y, char* board)
{
    // 이 위로 수정 금지

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i == x && j == y) {
                *(board + i * 8 + j) = 'X';
            }
            else if (i - j == x - y || i + j == x + y) {
                *(board + i * 8 + j) = 'X';  // 대각선에 X
            }
            else {
                *(board + i * 8 + j) = ' ';
            }
        }
    }

    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    int x, y;
    char board[8][8] = { 0 };

    scanf("%d %d", &x, &y);

    wakanda_forever(x, y, (char*)board);

    for (size_t i = 0; i < 8; i++)
    {
        for (size_t ii = 0; ii < 8; ii++)
        {
            printf("%c", board[i][ii]);
        }
        printf("\n");
    }

    return 0;
}



#endif

// J zero padding with bit
/*
문제 J: zero padding with bit숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：55
통과：29
문제 설명
8 x 8 크기의 흑백 이미지 데이터가 비트 단위로 주어질 때,
이미지의 테두리
칸을 0으로 만들고 출력하는 프로그램을 작성하시오.
입력 설명

 (정수) : 이미지 데이터, 대문자 16진수
 (정수) : 0으로 만들 테두리 두께

출력 설명
이미지의 바깥
줄을 0으로 바꾸어 대문자 16진수로 출력한다.
입력 예시 복사
FF FF FF FF FF FF FF FF
1
출력 예시 복사
0 7E 7E 7E 7E 7E 7E 0
*/
#if 0


int result(int num[], int n) {

    
    int index1 = 0;
    int index2 = 0;
    while (1) {
        if (n == 1) {
            index1 = 1;
            index2 = 7;
            break;
        }
        if (n == 2) {
            index1 = 2;
            index2 = 6;
            break;
        }
        if (n == 3) {
            index1 = 3;
            index2 = 5;
            break;
        }
        if (n == 4) {
            return 0;
        }

    }

    for (int i = 0; i < index1; i++) {
        num[i] = 0;
    }
    for (int i = 7; i >=index2; i--) {
        num[i] = 0;
    }

    int k = num[7] * 128 + num[6] * 64 + num[5] * 32 + num[4] * 16 + num[3] * 8 + num[2] * 4 + num[1] * 2 + num[0];
    return k;
}

int main() {

    unsigned int num[8];
    for (int i = 0; i < 8; i++) {
        scanf(" %X", &num[i]);
    }

    int n;
    scanf("%d", &n);

    int new_num[8];
    for (int i = n; i < 8 - n; i++) {
        for (int k = 0; k < 8; k++) {
            new_num[i] = num[i] & 1;
            num[i] = num[i] >> 1;
        }
        num[i] = result(new_num, n);
        
    }

    for (int i = 0; i < n; i++) {
        num[i] = 0;          // 상단 테두리
        num[7 - i] = 0;      // 하단 테두리
    }

    for (int i = 0; i < 8; i++) {
        printf("%X ", num[i]);
    }

    return 0;
}

#endif

#if 0

#include <stdio.h>

int main() {
    unsigned int num[8]; // 8x8 이미지 데이터
    for (int i = 0; i < 8; i++) {
        scanf(" %X", &num[i]); // 16진수로 입력 받기
    }

    int n; // 테두리 두께
    scanf("%d", &n);

    // 테두리 설정: n 두께만큼 바깥쪽을 0으로 설정
    for (int i = 0; i < n; i++) {
        num[i] = 0;         // 상단 테두리
        num[7 - i] = 0;     // 하단 테두리
    }

    for (int i = n; i < 8 - n; i++) {
        for (int j = 0; j < n; j++) {
            num[i] = num[i] & ~(1 << j);      // 좌측 테두리
            num[i] = num[i] & ~(1 << (7 - j)); // 우측 테두리
        }
    }

    // 수정된 이미지 데이터 출력
    for (int i = 0; i < 8; i++) {
        printf("%X ", num[i]); // 16진수로 출력
    }

    return 0;
}


#endif


// E Yibambe by bit
/*
문제 E: Yibambe by bit숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：60
통과：38
문제 설명 템플릿 복사
특정 좌표를 입력하면, 해당 좌표를 중심으로 하는 X자를 비트 배열로 표현하는 함수
`wakanda_forever`를 작성하시오.

X자에 해당하는 칸은 비트 1로, 나머지 칸은 비트 0으로 표현한다.
결과는 8개의 8비트 정수를 담는 1차원 배열로 반환해야 한다.

**비트 배열 설명**:
- 배열의 각 요소는 8비트 정수로, 해당 행의 비트 상태를 나타낸다.
- 비트는 **가장 왼쪽**부터 시작하여, 왼쪽이 최상위 비트(MSB), 오른쪽이 최하위 비트(LSB)입니다.
  예를 들어, 행이 `X     X`라면 배열 값은 130 (`10000010`)이다.

**주의**
수정 가능한 부분만 수정할 것.
함수는 직접 작성한 것만 사용.
위 사항을 준수하지 않을 경우 부정행위로 간주함.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define READ_BIT(X, N) (((X) >> (N)) & 1)

void wakanda_forever(int x, int y, unsigned char *board)
{
    // 이 위로 수정 금지

    // 이 아래로 수정 금지
}

int main(int argc, char const *argv[])
{
    int x, y;
    unsigned char board[8] = {0};

    scanf("%d %d", &x, &y);

    wakanda_forever(x, y, board);

    for (size_t i = 0; i < 8; i++)
    {
        for (size_t ii = 0; ii < 8; ii++)
        {
            if (READ_BIT(board[i], 7 - ii))
                printf("X");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
입력 설명

 (정수) : X자 중심의 행 번호
 (정수) : X자 중심의 열 번호

출력 설명
wakanda_forever에 의해 채워진 board를 각 비트별로 해석해서 출력한다.
입력 예시 복사
3 3
출력 예시 복사
X     X
 X   X
  X X
   X
  X X
 X   X
X     X
       X
*/
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define READ_BIT(X, N) (((X) >> (N)) & 1)

void wakanda_forever(int x, int y, unsigned char* board)
{
    // 이 위로 수정 금지

    int num[8][8];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i == x && j == y) {
                num[i][j] = 1;
            }
            else if (i - j == x - y || i + j == x + y) {
                num[i][j] = 1;  // 대각선에 X
            }
            else {
                num[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            board[i] = num[i][0] * 128 + num[i][1] * 64 + num[i][2] * 32 + num[i][3] * 16 + num[i][4] * 8 + num[i][5] * 4 + num[i][6] * 2 + num[i][7];
        }
    }

    // 이 아래로 수정 금지
}

int main(int argc, char const* argv[])
{
    int x, y;
    unsigned char board[8] = { 0 };

    scanf("%d %d", &x, &y);

    wakanda_forever(x, y, board);

    for (size_t i = 0; i < 8; i++)
    {
        for (size_t ii = 0; ii < 8; ii++)
        {
            if (READ_BIT(board[i], 7 - ii))
                printf("X");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}


#endif

// B 데칼코마니 4
/*
문제 B: 데칼코마니 4숨겨짐
메모리제한：128 MB
시간제한：1.000 S
체점 스타일：텍스트 비교
만든사람：comjke33
제출：145
통과：67
문제 설명
입력받은 정수의 하위 32 비트가 상위 32 비트의 대칭이 되도록 바꾸어
한 바이트씩 대문자 16진수로 출력하라.
입력 설명

 (정수) : 처리할 정수, 대문자 16진수

출력 설명
문제 설명에 따라 비트를 변형한 결과를 한 바이트씩 대문자 16진수로 출력하시오.
두 출력 사이를 개행문자로 구분한다.
입력 예시 복사
1 2 3 4 5 6 7 8
출력 예시 복사
1 2 3 4 20 C0 40 80
*/

#if 0


int result(int a, int b, int c, int d, int e, int f, int g, int h) {
    int n = a * 128 + b * 64 + c * 32 + d * 16 + e * 8 + f * 4 + g * 2 + h;
    return n;
}

int main() {

    int num[8];

    for (int i = 0; i < 8; i++) {
        scanf("%X", &num[i]);
    }

    for (int j = 0; j < 4; j++) {
        int new[8];
        int k = num[j];
        for (int i = 0; i < 8; i++) {
            new[i] = k & 1;
            k = k >> 1;
        }
        num[7 - j] = result(new[0], new[1], new[2], new[3], new[4], new[5], new[6], new[7]);
    }


    for (int i = 0; i < 8; i++) {
        printf("%X ", num[i]);
    }


    return 0;
}

#endif
