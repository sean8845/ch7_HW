#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE* fptr;
	char a;
	int c=0;
	fopen_s(&fptr,"D://�ҵ{//�{���y��//HW//ch7//p14//welcome.txt", "r");
	if (fptr != NULL) {
		while ((a = getc(fptr)) != EOF)
		{
			printf("%c", a);
			c++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", c);
	}
	else printf("�ɮ׶}�ҥ���!\n");
	
	return 0;
}