/* ky301.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̏����� */
	int n1;

	/* ���l����� */
	printf("���l�����:");
	scanf("%d", &n1);

	/* ������������f���\�� */
	if (n1%2 == 0)
		printf("%d�͋����ł�", n1);
	else
		printf("%d�͊�ł�", n1);
}
