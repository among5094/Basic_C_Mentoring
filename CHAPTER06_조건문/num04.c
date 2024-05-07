#include <stdio.h>
//4번

int main(void) {
	int height,age = 0;

	printf("키를 입력하세요(cm) : ");
	scanf("%d", &height);
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);

	if (height >= 140 && age >= 10)
		printf("타도 좋습니다.");
	else
		printf("탈 수 없습니다.");
	
}