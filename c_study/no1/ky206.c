/* ky206.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̒�` */
	char c1;
	int n1;

	/* ���͂𑣂� */
	printf("1��������=");
	scanf("%c", &c1);

	/* ���͂𑣂� */
	printf("���Z���鐔�������=");
	scanf("%d", &n1);

	/* �����ɐ��l�����Z���ĕ\��	*/
	printf("����(%c)+���l(%d) = %c\n", c1, n1, c1+n1);
}
