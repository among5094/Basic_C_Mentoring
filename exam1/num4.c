#include <stdio.h>
//4번
int main() {

    int x, y; //입력받을 변수 2개
    int temp; //임시로 저장할 변수

    // 사용자로부터 두 정수 입력 받기
    printf("첫번째 정수 : ");
    scanf("%d", &x); 

    printf("두번째 정수 : ");
    scanf("%d", &y); 

    printf("교환 전: a = %d b = %d\n", x, y);
    
    // 임시 변수(temp)를 사용하여 x와 y의 값을 교환
    temp = x;
    x = y;
    y = temp;
    
    printf("교환 후: a = %d, b = %d\n", x, y); // 교환된 값 출력

    return 0;
}
