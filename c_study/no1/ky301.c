/* ky301.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̒�` */
	char sz1[50] = {'H', 'e', 'l', 'l', 'o', '\0'};

	/* ���݂�sz1�̓��e��\��*/
	printf("%s\n", sz1);

	/* ���O����� */
	printf("���O������(MAX49�o�C�g)�F");
	scanf("%s", sz1);

	printf("���Ȃ��̖��O�́A%s���� �ł���\n", sz1);
}
