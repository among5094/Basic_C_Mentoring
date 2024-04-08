#include <stdio.h>
//3번
int main() {

    char character; // 문자형 변수를 위한 배열 선언
    int integer; // 정수형 변수 선언
    double real; // 실수형 변수 선언

    // 문자열 입력
    printf("문자를 입력하세요: ");
    scanf("%c", &character); //문자열 입력 받기

    // 정수 입력
    printf("정수를 입력하세요: ");
    scanf("%d", &integer);

    // 실수 입력
    printf("실수를 입력하세요: ");
    scanf("%lf", &real);

    // 입력받은 값 출력
    printf("문자 = %c, 정수= %d, 실수 = %lf ", character, integer,real);
    

    return 0;
}
