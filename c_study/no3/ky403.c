/* ky403.c */

#define TEST

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
    char sztext[80];

#ifdef TEST
	sprintf(sztext, "DEBUG");
#else
	sprintf(sztext, "RELEASE");
#endif

	printf(sztext);

}
