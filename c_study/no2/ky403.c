/* ky403.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	char c1[80];

	/* ���͊m�F */
	do{
		printf("Y or y�����:");
		scanf("%s", c1);
	}while (c1[0] != 'Y' && c1[0] != 'y');

	printf("%c �����͂���܂���", c1[0]);
}
