
/*#include <stdio.h>
int main(void)
{
	int num;
	int i, j;

	printf("트리의 높이를 입력하시오:");
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
	double x, y; //변수 x,y선언
	printf("두개의 숫자 입력:");
	while (scanf("%If %If", &x, &y) == 2) { //두개의 숫자를 입력받고 입력이 성공적일 때 반복
		printf("더 작은 숫자는 %If.\n", min(x, y)); //입력받은 두 숫자 중 작은 수 출력하는 함수 
		printf("다음 입력(q to quit):"); //다음 입력을 요청하는 메시지 출력

	}
	printf("bye"); //프로그램 종료 메시지

}
double min(double a, double b) { //더 작은 수를 찾는 함수 정의
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
		printf("4개의 정수를 입력하세요: ");
		scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

		if (i1 == -1) {
			printf("Bye\n프로그램 종료\n");
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
	printf("결과: %c\n", result);
}

