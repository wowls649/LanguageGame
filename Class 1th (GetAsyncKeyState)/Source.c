#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define SIZE 10

void Shuffle(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int seed = rand() % size;

		int temporary = array[seed];

		array[seed] = array[i];

		array[i] = temporary;
	}
}

int main()
{
#pragma region ���� �Լ�

	// srand(time(NULL));
	//
	// int list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//
	// int size = sizeof(list) / sizeof(int);
	//
	// Shuffle(list, size);
	//
	// for (int i = 0; i < size; i++)
	// {
	//	printf("list[%d]�� �� : %d\n", i, list[i]);
	// }


#pragma endregion


#pragma region ������ �迭
	// const char * dialog[SIZE];
	// 
	// dialog[0] = "�ȳ��ϼ���?";
	// dialog[1] = "�����Űſ�?";
	// dialog[2] = "Ž���Դϴ�.";
	// dialog[3] = "���� �Ƿ����Դϴ�.";
	// dialog[4] = "������ ����ִٰ� �ؼ� �Խ��ϴ�.";
	// dialog[5] = "�� �½��ϴ�.";
	// dialog[6] = "�� ��ǿ� ���� �ƽô°� �ֳ���?";
	// dialog[7] = "���� �˰� �ֽ��ϴ�.";
	// dialog[8] = "�������ּ���";
	// dialog[9] = "..........";
	// 
	// int i = 0;
	// 
	// while (i < SIZE)
	// {
	// 	// 0x0000 : ������ ���� ���� ���� ȣ�� �������� �������� ���� ����
	// 
	// 	// 0x0001 : ������ ���� ���� �ְ� ȣ�� �������� �������� ���� ����
	// 
	// 	// 0x8000 : ������ ���� ���� ���� ȣ�� �������� �����ִ� ����
	// 
	// 	// 0x0001 : ������ ���� ���� �ְ� ȣ�� �������� �����ִ� ����
	// 
	// 	//              0x20           & 0x0001
	// 	if (GetAsyncKeyState(VK_SPACE) & 0x0001)
	// 	{
	// 		if (i % 2 == 0)
	// 		{
	// 			printf("Ž�� : %s\n", dialog[i]);
	// 		}
	// 		else
	// 		{
	// 			printf("�Ƿ��� : %s\n", dialog[i]);
	// 	
	// 		}
	// 
	// 		i++;
	// 	}
	// }
	// 
	// Sleep(3000);
	// 
	// printf("��ȭ�� ����Ǿ����ϴ�.");

#pragma endregion




	return 0;

}