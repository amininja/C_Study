/* ky306.c */

/* �C���N���[�h */
#include <stdio.h>
#include <string.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	char szstr[20];
	char *pstr;

	sprintf(szstr, "ABCDE123ABCDEFGHIJK");

	printf("<%s>�̒�����<E>������\n", szstr);
	pstr = strchr(szstr, 'E');
	printf(pstr);

	printf("\n<%s>�̒�����<EFG>������\n", szstr);
	pstr = strstr(szstr, "EFG");
	printf(pstr);

	return;
}
