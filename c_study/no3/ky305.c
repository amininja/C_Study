/* ky305.c */

/* インクルード */
#include <stdio.h>
#include <string.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	char szstr[10];
	char szstr1[10];
	int nrtn;

	szstr[0] = 'A';
	szstr[1] = 'B';
	szstr[2] = 0x00;
	szstr[3] = 0x00;

	szstr1[0] = 'A';
	szstr1[1] = 'B';
	szstr1[2] = 0x00;
	szstr1[3] = 'C';

	printf("strncmp で比較\n");
	nrtn = strncmp(szstr, szstr1, 4);
	printf("%s , %s (4バイト)= (%d)\n", szstr, szstr1, nrtn);

	printf("memcmp で比較\n");
	nrtn = memcmp(szstr, szstr1, 4);
	printf("%s , %s (4バイト)= (%d)\n", szstr, szstr1, nrtn);

	return;
}
