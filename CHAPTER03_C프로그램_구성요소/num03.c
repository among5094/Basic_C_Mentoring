#include <stdio.h>

/*3번: 사용자로부터 삼각형의 높이와 밑변을 받아서 넓이를 계산하여 출력하는 프로그램을 작성하라.
단, 모든 데이터는 실수로 입력되며 출력도 모두 실수형으로 해야한다. 
힌트: area= 0.5*heignt*base; */

int main() {

    double height, base, area; //삼각형의 높이,밑변,넓이

    // 사용자로부터 삼각형의 높이와 밑변 입력 받기
    printf("삼각형의 밑변: ");
    scanf("%lf", &base);
    printf("삼각형의 높이: ");
    scanf("%lf", &height);
    
    // 삼각형의 넓이 계산
    area = 0.5 * height * base;

    // 계산된 넓이 출력
    printf("삼각형의 넓이: %.2lf\n", area);

    return 0;
}
