/* ky210.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̒�`	 */
	char c1;
	long l1;
	float f1;

	/* char ���� long �� */
	c1 = 100;
	l1 = c1;

	/* ���ʕ\��*/
	printf("%d(char)����%ld(long)\n", c1, l1);

	/* long ���� char �� */
	l1 = 256;
	c1 = (char)l1;
	printf("%ld(long)����%d(char)\n", l1, c1);

	/* float ���� long �� */
	f1 = 123.456F; /* F�͐��l��float�^�Ɩ������邽�߂̐ڔ���(�T�t�B�b�N�X) */
	l1 = (long)f1;
 	printf("%f1(float)����%ld(long)\n", f1, l1);
}
