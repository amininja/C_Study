/* ky401.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	int n1, n2[5], nt;

	/* n2�̏����ݒ� */
	for(n1 = 0;n1 < 5;n1++){
		/* ���l����� */
		printf("%d/5��ځF0-100�����:", n1+1);
		scanf("%d", &n2[n1]);
	}

	/* ���v���v�Z */
	for(n1 = 0, nt = 0;n1 < 5;n1++)
		nt += n2[n1];

	/* ���v��\�� */
	printf("���͂��ꂽ�l�̍��v=%d", nt);
}
