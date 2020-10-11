/* ky307.c */

/* インクルード */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	char *pstr;
	int ni;

	pstr = (char *)malloc(10);
	if (pstr == NULL){
		printf("mallocに失敗");
		return;
	}
	memset(pstr, 0x00, 10);
	sprintf(pstr, "ABCDEFG\n");
	printf("malloc->%s", pstr);
	free(pstr);

	pstr = (char *)calloc(10, 10);
	if (pstr == NULL){
		printf("callocに失敗");
		return;
	}
	for (ni = 0;ni < 10;ni++)
		sprintf(pstr+10*ni, "%d BLOCK", ni+1);
	for (ni = 0;ni < 10;ni++)
		printf("%d->%s\n", ni+1, pstr+10*ni);
	free(pstr);

	return;
}
