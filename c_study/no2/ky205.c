/* ky205.c */

/* �C���N���[�h */
#include <stdio.h>

/* �O���[�o���ϐ� */
int nG1;


/* �֐��錾 */
void main(void);
void Function1(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̏����� */
	nG1 = 1;

	/* �ϐ��̓��e��\�� */
	printf("main�֐���n1=%d\n", nG1);

	/* Function1��CALL */
	Function1();

	/* �ϐ��̓��e��\�� */
	printf("main�֐���n1=%d", nG1);
}

void Function1(void)
{
	/* �ϐ��ɑ�� */
	nG1 = 9;

	/* �ϐ��̓��e��\�� */
	printf("Function1�֐���n1=%d\n", nG1);
}

