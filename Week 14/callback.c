// callback.c

#include<stdio.h>
#include "my_math.h"

/*���� ���� ���� �ּҸ� �Ѱ��ָ� �ش�
  ���� �����̸� ����� ��ȯ�ϴ� �Լ�*/
void MyABS(int* p) {
	/* ���޵� �ּҿ� �ִ� ���� �����̸�
	   -1�� ���ؼ� ����� ����*/
	if (*p < 0)
		*p = (*p) * (-1);
}

int main(void) {
	int x = -3, y = -2;
	int sum = Sum(x, y, MyABS, NULL);
	int sub = Sub(x, y, MyABS, MyABS);
	
	printf("|%d| + %d = %d\n", x, y, sum);
	printf("|%d| - |%d| = %d\n", x, y, sub);

	return 0;
}