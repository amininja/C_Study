/* ky201.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̒�` */
	int ni8, ni10, ni16;
	float fe,f;

	/* �萔��ϐ��ɃZ�b�g*/
	ni8 = 012;
	ni10 = 12;
	ni16 = 0x12;
	fe=12e3;
	f=1.23F; /* F�͐��l��float�^�Ɩ������邽�߂̐ڔ���(�T�t�B�b�N�X) */

	/* �ϐ���10,16,8�i���ŕ\�� */
	printf("8�i=%d\n", ni8);
	printf("10�i=%d\n", ni10);
	printf("16�i=%d\n", ni16);
	printf("�w��=%f\n", fe);
	printf("�����_=%f\n", f);
}
