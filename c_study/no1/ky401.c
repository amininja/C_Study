/* ky401.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̒�` */
	int n1[2][2] = {{1,2},{3,4}};
	int n2;

	/* ���Ԗڂ̔z�񂪂݂����� */
	printf("���Ԗڂ̍s�̔z�񂪂݂����ł����H(1or2):");
	scanf("%d", &n2);

	/* �w�肳�ꂽ�z���\�� */
	printf("%d�̍s�̔z��̓��e�́A%d,%d �ł�\n", 
		n2, n1[n2-1][0], n1[n2-1][1]);
}
