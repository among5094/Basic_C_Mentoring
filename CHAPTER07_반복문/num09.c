#include <stdio.h>
//9번
int main() {
    int num1, num2;
    int lcm; //최소공배수

    // 사용자로부터 두 정수 입력받기
    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &num1, &num2);

    // 최소공배수를 찾기 위한 초기값 설정( 입력이 72 120이 아니라 120 70이여도 결과는 같아야하니까)
    if (num1 > num2)
        lcm = num1;
    else
        lcm = num2;

    // 최소공배수 계산
    while (1) {

        //최소공배수 찾으면 종료
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            printf("최소공배수는 %d입니다.\n", lcm);
            break; 
        }

        //최소공배수 못찾았으면 다음 검사!
        lcm++;
    }

    return 0;
}
