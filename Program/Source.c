#include <stdio.h>
#include <Windows.h>

void Position(int x, int y)
{
	// x�� y���� �����ϴ� ����ü�Դϴ�.
	COORD position = { x, y };

	// �ܼ� Ŀ���� ȭ��ǥ�� �����ϴ� �Լ��Դϴ�.
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	while(1)
	{
		Position(4, 5);
		printf("��");

		Position(5, 5);
		printf("��");

		system("cls");
	}

	return 0;
	
}