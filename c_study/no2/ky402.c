/* ky402.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	char c1[80];

	c1[0] = 0x00;

	/* ���͊m�F */
	while (c1[0] != 'Y' && c1[0] != 'y'){
		printf("Y or y�����:");
		scanf("%s", c1);
	}

	printf("%c �����͂���܂���", c1[0]);
}
