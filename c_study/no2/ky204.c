/* ky204.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);
void Function1(int *);

/* ���C���֐� */
void main(void)
{
	int n1;

	/* �ϐ��̏����� */
	n1 = 1;

	/* �ϐ��̓��e��\�� */
	printf("main�֐���n1=%d\n", n1);

	/* Function1��CALL */
	Function1(&n1);

	/* �ϐ��̓��e��\�� */
	printf("main�֐���n1=%d", n1);
}

void Function1(int *n1)
{
	/* �ϐ��ɑ�� */
	*n1 = 9;

	/* �ϐ��̓��e��\�� */
	printf("Function1�֐���n1=%d\n", *n1);
}

