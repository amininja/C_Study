/* ky109.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	FILE *fp1;
	char szfname1[] = "ky109.dat";
	char szdata[50];
	int ni;

	fp1 = fopen(szfname1, "w");
	if (fp1 == NULL){
		printf("ファイル１のオープンに失敗しました");
		return;
	}

	for (ni = 0;ni < 43;ni++)
		szdata[ni] = '0'+ni;
	szdata[43] = 0x00;

	printf("データは：%s", szdata);
	fwrite(szdata, 10, 1, fp1);

	fclose(fp1);
}
