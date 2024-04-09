#include <stdio.h>
//10번
int main() {

    const float PYEONG_TO_SQUARE_METER = 3.30; //1평이 3.30 제곱미터라는 것을 const 상수로 정의함.
    int pyeong; //사용자로부터 입력받은 평수를 저장하는 변수
    double squareMeters; //계산된 제곱미터 값을 저장하는 변수

    printf("평수 입력: ");
    scanf("%d", &pyeong);

    //평수(pyeong)를 제곱미터(squareMeters)로 변환하는 계산
    squareMeters = pyeong * PYEONG_TO_SQUARE_METER;

    //계산된 값 출력
    
    printf("\n입력된 평수: %d\n", pyeong);
    printf("제곱미터: %lf\n", squareMeters);

    return 0;
}
