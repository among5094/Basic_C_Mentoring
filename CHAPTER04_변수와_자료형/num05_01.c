#include <stdio.h>
//5번 const 키워드 사용

int main() {

    const double SQMETER_PER_PYEONG = 3.3058;  // 기호상수 선언
    double pyeong; //평
    double squareMeters; //제곱미터

    printf("평을 입력하세요: ");
    scanf("%lf", &pyeong);

    // 평을 제곱미터로 환산
    squareMeters = pyeong * SQMETER_PER_PYEONG;

    printf("%lf평방미터입니다. \n",squareMeters);

    return 0;
}
