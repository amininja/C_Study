/* ky206.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);
void Function(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̏����� */
	int n1;
	auto int n2;

	n1 = 10;
	n2 = 20;

	Function();

	/* �ϐ��̓��e��\�� */
	printf("n1=%d\n", n1);
	printf("n2=%d\n", n2);
}

void Function(void)
{
	/* �ϐ��̏����� */
	int n1;
	auto int n2;

	n1 = 30;
	n2 = 40;

	/* �ϐ��̓��e��\�� */
	printf("n1(F)=%d\n", n1);
	printf("n2(F)=%d\n", n2);
}
