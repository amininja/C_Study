/* ky202.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̒�` */
	char c1,c2,c3,c4;

	/* �萔��ϐ��ɃZ�b�g*/
	c1 = 0x41;
	c2 = 'A';
	c3 = '\t';
	c4 = '\\';

	/* �ϐ����o�� */
	printf("0x41 = %c\n", c1);
	printf("A= %d\n", c2);
	printf("TAB�̓���=%c<TAB>\n", c3);
	printf("\\�L���̕\��=%c\n", c4);
}
