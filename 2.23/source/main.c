#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	int largest;
	int smallest;

	printf("�п�J�Ĥ@�Ӿ��: ");
	scanf("%d", &num1);
	printf("�п�J�ĤG�Ӿ��:");
	scanf("%d", &num2);
	printf("�п�J�ĤT�Ӿ��:");
	scanf("%d", &num3);

	if ((num1 > num2) && (num2 > num3))	{
		largest = num1;
		smallest = num3;
	}
	else if ((num1 > num3) && (num3 > num2)) {
		largest = num1;
		smallest = num2;
	}

	if ((num2 > num1) && (num1 > num3))	{
		largest = num2;
		smallest = num3;
	}
	else if ((num2 > num3) && (num3 > num1)) {
		largest = num2;
		smallest = num1;
	}

	if ((num3 > num1) && (num1 > num2))	{
		largest = num3;
		smallest = num2;
	}
	else if ((num3 > num2) && (num2 > num1)) {
		largest = num3;
		smallest = num1;
	}

	printf("\n");

	printf("�̤j��ƬO %d\n", largest);
	printf("�̤p��ƬO %d\n", smallest);

	system("pause");
	return 0;
}