/* ky306.c */

/* インクルード */
#include <stdio.h>
#include <string.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	char szstr[20];
	char *pstr;

	sprintf(szstr, "ABCDE123ABCDEFGHIJK");

	printf("<%s>の中から<E>を検索\n", szstr);
	pstr = strchr(szstr, 'E');
	printf(pstr);

	printf("\n<%s>の中から<EFG>を検索\n", szstr);
	pstr = strstr(szstr, "EFG");
	printf(pstr);

	return;
}
