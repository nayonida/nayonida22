
/*#include <stdio.h>
int main(void)
{
	int num;
	int i, j;

	printf("Ʈ���� ���̸� �Է��Ͻÿ�:");
	scanf_s("%d", &num);


	for (i = 0; i <=num; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}


*/

/*#include <stdio.h>
int main(void) {
	int op;

	scanf_s("%d", & op);

	switch (op) {
	case 1: printf("100"); break;
	case 2:printf("200"); break;
	case 3:printf("300"); break;
	default: printf("error"); break;


	}

}
*/

#include <stdio.h>
void main(void) {
	int i;
	for (i = 1; i <= 100; i++) {
		printf("%d", i);
		if (i % 3 == 0) printf("<==\n");
		else printf("\n");

	}

}

/*#include <stdio.h>
#include <stdlib.h>
double min(double a, double b);
void main(void) {
	double x, y; //���� x,y����
	printf("�ΰ��� ���� �Է�:");
	while (scanf("%If %If", &x, &y) == 2) { //�ΰ��� ���ڸ� �Է¹ް� �Է��� �������� �� �ݺ�
		printf("�� ���� ���ڴ� %If.\n", min(x, y)); //�Է¹��� �� ���� �� ���� �� ����ϴ� �Լ� 
		printf("���� �Է�(q to quit):"); //���� �Է��� ��û�ϴ� �޽��� ���

	}
	printf("bye"); //���α׷� ���� �޽���

}
double min(double a, double b) { //�� ���� ���� ã�� �Լ� ����
	if (a < b) return a;
	else return b;
}
*/

#include <stdio.h>

char seq(int i1, int i2, int i3, int i4);
void sum(char result);

int main() {
	int i1, i2, i3, i4;

	while (1) {
		printf("4���� ������ �Է��ϼ���: ");
		scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

		if (i1 == -1) {
			printf("Bye\n���α׷� ����\n");
			break;
		}

		ret(seq(i1, i2, i3, i4));
	}

	return 0;
}


char seq(int i1, int i2, int i3, int i4) {
	if (i1 + 1 == i2 && i2 + 1 == i3 && i3 + 1 == i4)
		return 'T';
	else
		return 'F';
}


void sum(char result) {
	printf("���: %c\n", result);
}

