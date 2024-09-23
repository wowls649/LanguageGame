#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int screenIndex;
HANDLE screen[2];

void Initialize()
{
	CONSOLE_CURSOR_INFO cursor;

	// ȭ�� ���۸� 2�� �����մϴ�.
	screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL
	);

	screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL
	);

	cursor.dwSize = 1;
	cursor.bVisible = FALSE;

	SetConsoleCursorInfo(screen[0], &cursor);
	SetConsoleCursorInfo(screen[1], &cursor);
}

void Flip()
{
	SetConsoleActiveScreenBuffer(screen[screenIndex]);

	screenIndex = !screenIndex;
}

void Clear()
{
	COORD position = { 0,0 };

	DWORD dword;

	FillConsoleOutputCharacter
	(
		screen[screenIndex], ' ', 50 * 20, position, &dword
	);
}

void Release()
{
	CloseHandle(screen[0]);
	CloseHandle(screen[1]);
}

void Render(int x, int y, const char* string)
{
	DWORD dword;
	COORD position = { x, y };

	SetConsoleCursorPosition(screen[screenIndex], position);
	WriteFile(screen[screenIndex], string, strlen(string), &dword, NULL);
}


void Position(int x, int y)
{
	// X�� Y���� �����ϴ� ����ü�Դϴ�.
	COORD position = { x, y };

	// �ܼ� Ŀ���� ��ǥ�� �����ϴ� �Լ��Դϴ�.
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	char key = 0;

	int x = 0;
	int y = 0;

	Initialize();

	while (1)
	{
		Flip();

		Clear();

		if (_kbhit())
		{
			key = _getch();

			if (key == -32)
			{
				key = _getch();
			}

			switch (key)
			{
			case UP: y--;
				break;
			case LEFT: x -= 2;
				break;
			case RIGHT: x += 2;
				break;
			case DOWN: y++;
				break;
			default: printf("Exception\n");
				break;
			}
		}

		Render(x, y, "��");
	}

	return 0;
}