/* ky201.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 	*/
void main(void);
int Func_plus(int, int);
void Func_disp(int);

/* ���C���֐� */
void main(void)
{
	int n1, n2, n3;

	/* �����̓��� */
	printf("1�Ԗڂ̐��l:");
	scanf("%d", &n1);
	printf("2�Ԗڂ̐��l:");
	scanf("%d", &n2);

	/* ���Z�֐����Ăяo�� */
	n3 = Func_plus(n1, n2);

	/* ���ʂ�\������֐����Ăяo�� */
	Func_disp(n3);
}

/* ���Z����֐� */
int Func_plus(int n1, int n2)
{
	return n1+n2;
}

/* ���ʂ�\������֐� */
void Func_disp(int n1)
{
	printf("\n2�̐��l�����Z�����=%d�ł�", n1);
}


