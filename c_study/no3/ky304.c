/* ky304.c */

/* �C���N���[�h */
#include <stdio.h>
#include <string.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	char szstr[40];
	char szstr1[40];
	char szstr2[40];
	char szstr3[40];
	int nrtn;

	sprintf(szstr, "AB");
	sprintf(szstr1, "A");
	sprintf(szstr2, "AB");
	sprintf(szstr3, "ABC");

	printf("strcmp �Ŕ�r\n");
	nrtn = strcmp(szstr, szstr1);
	printf("%s , %s = (%d)\n", szstr, szstr1, nrtn);
	nrtn = strcmp(szstr, szstr2);
	printf("%s , %s = (%d)\n", szstr, szstr2, nrtn);
	nrtn = strcmp(szstr, szstr3);
	printf("%s , %s = (%d)\n", szstr, szstr3, nrtn);

	printf("strncmp �Ŕ�r\n");
	nrtn = strncmp(szstr, szstr1, 1);
	printf("%s , %s (1�o�C�g)= (%d)\n", szstr, szstr1, nrtn);
	nrtn = strncmp(szstr, szstr1, 2);
	printf("%s , %s (2�o�C�g)= (%d)\n", szstr, szstr1, nrtn);

	return;
}
