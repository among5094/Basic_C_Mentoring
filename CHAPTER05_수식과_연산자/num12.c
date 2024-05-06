#include <stdio.h>
//12번
int main() {

    //변수 선언부
    char char1, char2, char3, char4;
    unsigned int result;

    // 문자 4개 입력 받기
    printf("첫 번째 문자를 입력하세요: ");
    scanf(" %c", &char1); 
    printf("\n두 번째 문자를 입력하세요: ");
    scanf(" %c", &char2); 
    printf("\n세 번째 문자를 입력하세요: ");
    scanf(" %c", &char3); 
    printf("\n네 번째 문자를 입력하세요: ");
    scanf(" %c", &char4);


    // 문자를 unsigned int 변수에 저장하기
    result = (unsigned int)char1;                   
    result |= (unsigned int)char2 << 8;            
    result |= (unsigned int)char3 << 16;         
    result |= (unsigned int)char4 << 24;  

    // 결과 출력
    printf("결과: %X\n", result);


    return 0;
}
