/* ky105.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 	*/
void main(void);

/* メイン関数 */
void main(void)
{
	FILE *fp1;
	char szfname1[] = "ky105.c";
	char szdata[81];
	int ndata;

	fp1 = fopen(szfname1, "r");
	if (fp1 == NULL){
		printf("ファイル１のオープンに失敗しました");
		return;
	}

	ndata = fread(szdata, 40, 1, fp1);
	szdata[40] = '\0';
	if (ndata > 0)
		printf(szdata);

	fclose(fp1);
}
