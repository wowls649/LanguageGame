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
#pragma region ¼ÅÇÃ ÇÔ¼ö

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
	//	printf("list[%d]ÀÇ °ª : %d\n", i, list[i]);
	// }


#pragma endregion


#pragma region Æ÷ÀÎÅÍ ¹è¿­
	// const char * dialog[SIZE];
	// 
	// dialog[0] = "¾È³çÇÏ¼¼¿ä?";
	// dialog[1] = "´©±¸½Å°Å¿ä?";
	// dialog[2] = "Å½Á¤ÀÔ´Ï´Ù.";
	// dialog[3] = "Àú´Â ÀÇ·ÚÀÎÀÔ´Ï´Ù.";
	// dialog[4] = "¼ö»óÇÑ »ç°ÇÀÖ´Ù°í ÇØ¼­ ¿Ô½À´Ï´Ù.";
	// dialog[5] = "³× ¸Â½À´Ï´Ù.";
	// dialog[6] = "ÀÌ »ç°Ç¿¡ ´ëÇØ ¾Æ½Ã´Â°Ô ÀÖ³ª¿ä?";
	// dialog[7] = "Á¶±Ý ¾Ë°í ÀÖ½À´Ï´Ù.";
	// dialog[8] = "¸»¾¹ÇØÁÖ¼¼¿ä";
	// dialog[9] = "..........";
	// 
	// int i = 0;
	// 
	// while (i < SIZE)
	// {
	// 	// 0x0000 : ÀÌÀü¿¡ ´©¸¥ ÀûÀÌ ¾ø°í È£Ãâ ½ÃÁ¡¿¡µµ ´­·ÁÀÖÁö ¾ÊÀº »óÅÂ
	// 
	// 	// 0x0001 : ÀÌÀü¿¡ ´©¸¥ ÀûÀÌ ÀÖ°í È£Ãâ ½ÃÁ¡¿¡´Â ´­·ÁÀÖÁö ¾ÊÀº »óÅÂ
	// 
	// 	// 0x8000 : ÀÌÁ¯¿¡ ´©¸¥ ÀûÀÌ ¾ø°í È£Ãâ ½ÃÁ¡¿¡´Â ´­·ÁÀÖ´Â »óÅÂ
	// 
	// 	// 0x0001 : ÀÌÀü¿¡ ´©¸¥ ÀûÀÌ ÀÖ°í È£­Œ ½ÃÁ¡¿¡µµ ´­·ÁÀÖ´Â »óÅÂ
	// 
	// 	//              0x20           & 0x0001
	// 	if (GetAsyncKeyState(VK_SPACE) & 0x0001)
	// 	{
	// 		if (i % 2 == 0)
	// 		{
	// 			printf("Å½Á¤ : %s\n", dialog[i]);
	// 		}
	// 		else
	// 		{
	// 			printf("ÀÇ·ÚÀÎ : %s\n", dialog[i]);
	// 	
	// 		}
	// 
	// 		i++;
	// 	}
	// }
	// 
	// Sleep(3000);
	// 
	// printf("´ëÈ­°¡ Á¾·áµÇ¾ú½À´Ï´Ù.");

#pragma endregion




	return 0;

}