#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main() {
	FILE* fptr = {};
	char str[80],ch;
	int i = 0;
	fopen_s(&fptr, "D:/�ҵ{/�{���y��/HW/ch7/p16//output.txt", "a");
	printf("��J�r��A��enter�����G\n");
	while ((ch = getche()) != 13 && i < 80) str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n�ɮת��[����");
	
}