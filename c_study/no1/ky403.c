/* ky403.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̒�` */
	char sz1[] = "ABCDEF";
	char *p1;
	int n1;

	p1 = sz1;

	/* ���Ԗڂ̔z�񂪂݂����� */
	printf("���Ԗڂ̕�������\���H (1-6):");
	scanf("%d", &n1);

	/* �|�C���^���ړ����A���̃|�C���^�������������\�� */
	p1+=n1-1;
	printf("(%d�����ڂ���\��)%s\n", n1, p1);
}
