/* ky207.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);
void Function(void);

/* ���C���֐� */
void main(void)
{

	Function();
	Function();
	Function();

}

void Function(void)
{
	/* �ϐ��̏����� */
	static int n1 = 0;

	n1 += 10;

	/* �ϐ��̓��e��\�� */
	printf("n1=%d\n", n1);
}
