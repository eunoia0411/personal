#include <stdio.h>
#pragma warning(disable: 4996)

//10진수를 입력받아 2진수로 표현하는 프로그램

int main() {
	int decimal;
	int binary[20] = { 0, };
	int position = 0;//position은 인덱스값 지정을 위한 변수

	printf("give me a deciaml\n");
	scanf("%d", &decimal);

	while (1) {
		binary[position] = decimal % 2;//배열에 10진수를 2로 나누었을때 나머지를 저장
		decimal = decimal / 2;//십진수는 십진수/2의 몫
		position++; //인덱스 값을 하나 올림

		if (decimal == 0)// 몫이 0이면 반복 종료(==는 비교 연산자, 대입이랑 헷갈리지 말기)
			break;
	}
	//position값이 배열의 요소 갯수로 나와 있음(배열 인덱스는 3까지 할당된 상태) (decimal이 13일때 이 시점에서 position값은 4)
	//2진수는 나머지를 뒤부터 읽어야하므로 역순으로 배열을 출력
	for (int i = position-1; i >=0;i--) //범위 설정 !0!
	{
		printf("%d", binary[i]);
	}
	printf("\n");

	return 0;
}
