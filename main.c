#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//#include"s.h"//���������ļ�����
#include"main.h"//���������ļ�����
#include<stdlib.h>
#include<windows.h>
int code1(int a, int b) {
	int c;
	if (a > 0 && b > 0) {
		if (a > b) {
			c = a;
		}
		else {
			c = b;
		}
	}
	else
	{
		c = 0;
	}
	return c;
}
void code3() {
	int s1, s2;
	printf("�������֣�");
	scanf_s("%d%d", &s1, &s2);
	s1 = code1(s1, s2);
	if (s1 == 0) {
		printf("Error");
	}
	else {
		printf("%d", s1);
	}
}
void code2() {
	int a[20][10] = { 0 };
	for (int i = 0; i < 20; i++) {
		if (i % 10 == 0) {
			printf("\n");
		}
		for (int j = 0; j < 10; j++) {
			printf("%4d", a[i][j]);
		}
	}
}

int code6() {
	//�ṹ�����
	struct student
	{
		int xh;
		char name[10];
		int six;
	}STU1[2] = { "yuxs" };
	int n = 20221;
	int s = 18;
	char str[10] = "yuxs";
	for (int i = 0; i < 2; i++) {
		STU1[i].xh = n;
		n++;
		STU1[i].six = s;
		s++;
		STU1[i].name[3] = "str";
	}
	printf("����%s--ѧ��%d--����%d", STU1[1].name, STU1[0].xh, STU1[0].six);
	return 0;
}
int code10() {
	//
	char ch;
	scanf_s("%c", &ch);
	if (ch >= 'a' && ch <= 'u') {
		ch = ch + 5;
	}
	else if (ch >= 'v' && ch <= 'z') {
		ch = ch - 26 + 5;
	}
	printf("%c\n", ch);
	return 0;
}
int fun(int n)
{
	if (n == 1)
		return 1;
	else
		return n + fun(n - 1);
}
//c���Կ��Բ�����Ŀcode5
void code5() {
	/*�����ڴ�������Ƴ��򣬲���ɾ������*/

}
//ָ������
int code11() {
	int n = 1, i, t = 0;
	double s = 0.0;
	for (i = 0; i < 500; i++) {
		t = n * (2 * n - 1);
		s += 1.0 / t;
		n++;
	}
	printf("%.5lf", s);
}
int code12() {
	int s = 0, s1 = 0;
	Sleep(1000);
	s = max(6, 8);
	s1 = min(6, 8);
	printf("%d\n%d", s, s1);
}
//�����������ch��xh�����������������㣬��������Ķ����������ֵ
void code13() {
	int a = 5, b = 3, c = 9;
	printf("%d", (a = c - a, b));
}
//code1--20
void main() {
	int a;
	printf(" code1-ѧ����Ϣ����ϵͳ: 1 \n code2-Demo��2 \n code3-ʵ��ϵͳ: 3 \n");
	printf("�������еĳ��������ţ�");
	scanf("%d", &a);
	switch (a)
	{
	case 1:code22(); break;//code22();//ѧ����Ϣ����ϵͳ�������
	case 2:code13(); break;
	case 3:break;
	default:printf("Error"); break;
	}
	
}