/* ky302.c */

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
	printf("0-9�����:");
	scanf("%d", &n1);

	/* switch�ɂ�镪��E�\�� */
	switch(n1){
	case 0:
		printf("0�����");
		break;
	case 1:
		printf("1�����");
		break;
	case 2:
		printf("2�����");
		break;
	default:
		printf("0,1,2�ȊO�����");
		break;
	}
}
