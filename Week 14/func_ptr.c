// func_ptr.c
#include<stdio.h>

int Sum(int a, int b) { return a + b; } // 더하기
int Sub(int a, int b) { return a - b; } // 빼기
int Mul(int a, int b) { return a * b; } // 곱하기
int Div(int a, int b) { return a / b; } // 나누기

int main(void) {
	// 함수 포인터를 배열로 선언하고 
	// 함수 원형이 int func(int,int);와 같은
	// 네 함수의 주소 값을 저장함
	int (*p[4])(int, int) = {
		&Sum,&Sub,&Mul,&Div
	};
	int x = 12, y = 4;
	char op_table[4] = { '+','-','*','/' };
	// Sum, Sub, Mul, Div 순으로 호출함
	for (int i = 0; i < 4; i++) {
		printf("%d %c %d = %d\n",
			x, op_table[i], y, (*p[i])(x, y));
	}

	return 0;
}