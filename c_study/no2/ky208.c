/* ky208.c */

/* �C���N���[�h */
#include <stdio.h>

/* �O���[�o���ϐ� */
int nG1;

/* �֐��錾 */
void main(void);
void Function(void);

/* ���C���֐� */
void main(void)
{
	/* �O���[�o���ϐ����O���Q�Ƃ��� */
	extern int nG2;

	nG1 = 10;
	nG2 = 20;

	/* �ϐ��̓��e��\�� */
	printf("nG1(F)=%d\n", nG1);
	printf("nG2(F)=%d\n", nG2);

	Function();

	/* �ϐ��̓��e��\�� */
	printf("nG1(F)=%d\n", nG1);
	printf("nG2(F)=%d\n", nG2);

}

/* �O���[�o���ϐ� */
int nG2;

void Function(void)
{

	nG1 = 30;
	nG2 = 40;

	/* �ϐ��̓��e��\�� */
	printf("nG1(F)=%d\n", nG1);
	printf("nG2(F)=%d\n", nG2);

	nG1 = 50;
	nG2 = 60;
}
