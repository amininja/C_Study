/* ky304.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);
int Data_in(void);

/* ���C���֐� */
void main(void)
{
	int n1;

	/* ���l����� */
	n1 = Data_in();

	printf("���͂��ꂽ�l=%d", n1);
}

int Data_in(void)
{
	int n1;

	/* ���l����� */
	printf("0-9�����:");
	scanf("%d", &n1);
	if (n1 < 0 || n1 > 9)
		return -1;

	return n1;
}

