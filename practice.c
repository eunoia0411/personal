#include <stdio.h>
#pragma warning(disable: 4996)

//10������ �Է¹޾� 2������ ǥ���ϴ� ���α׷�

int main() {
	int decimal;
	int binary[20] = { 0, };
	int position = 0;//position�� �ε����� ������ ���� ����

	printf("give me a deciaml\n");
	scanf("%d", &decimal);

	while (1) {
		binary[position] = decimal % 2;//�迭�� 10������ 2�� ���������� �������� ����
		decimal = decimal / 2;//�������� ������/2�� ��
		position++; //�ε��� ���� �ϳ� �ø�

		if (decimal == 0)// ���� 0�̸� �ݺ� ����(==�� �� ������, �����̶� �򰥸��� ����)
			break;
	}
	//position���� �迭�� ��� ������ ���� ����(�迭 �ε����� 3���� �Ҵ�� ����) (decimal�� 13�϶� �� �������� position���� 4)
	//2������ �������� �ں��� �о���ϹǷ� �������� �迭�� ���
	for (int i = position-1; i >=0;i--) //���� ���� !0!
	{
		printf("%d", binary[i]);
	}
	printf("\n");

	return 0;
}
