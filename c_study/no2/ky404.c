/* ky404.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	int n1;

	for(n1 = 0;n1 < 10;n1++){
		if (n1 < 5)
			continue;
		printf("%d��ڂ̃��[�v\n", n1+1);
	}
}
