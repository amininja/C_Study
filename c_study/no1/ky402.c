/* ky402.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̒�` */
	int n1;
	int n2;
	int *p1;

	/* n1�ϐ��ɑ�����鐔�l�̓��� */
	printf("���l�����:");
	scanf("%d", &n1);

	/* p1��n1�̃A�h���X���� */
	p1 = &n1;

	/* p1�������f�[�^��n2�ɑ�� */
	n2 = *p1;

	/* ���ꂼ��̕ϐ��̓��e��\�� */
	printf("���͂������l=%d\n", n1);
	printf("�|�C���^�̃A�h���X=%x\n", p1);
	printf("������ꂽ���l=%d\n", n2);
}
