/* ky303.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̏����� */
	int n1;

	datain:
	/* ���l����� */
	printf("0-9�����:");
	scanf("%d", &n1);
	if (n1 < 0 || n1 > 9)
		goto datain;

	printf("���͂��ꂽ�l=%d", n1);
}
