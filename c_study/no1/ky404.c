/* ky404.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̒�` */
	char sz1[] = "ABCDEF";
	char sz2[] = "UVWXYZ";
	char *p1[2];
    int n1;

    p1[0] = sz1;
    p1[1] = sz2;

	/* ���Ԗڂ̔z�񂪂݂����� */
	printf("0��1�����:");
 	scanf("%d", &n1);

    printf("%s\n", p1[n1]);
}
