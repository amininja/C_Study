/* ky302.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̒�` */
	char sz1[50] = {'H', 'e', 'l', 'l', 'o', '\0'};

	/* sz1�̓��e��\��*/
	printf("%s\n", sz1);

	/* sz1��4�Ԗڈȍ~�̓��e��\��*/
	printf("%s\n", &sz1[3]);
}
