/* ky102.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 	*/
void main(void);

/* メイン関数 */
void main(void)
{
	FILE *fp;
	char szfname[] = "ky102.c";
	int ndata;

	fp = fopen(szfname, "r");
	if (fp == NULL){
		printf("ファイルのオープンに失敗しました");
		return;
	}

	while (1){
		ndata = fgetc(fp);
		if (ndata == EOF)
			break;

		printf("%c", (char)ndata);
	}

	fclose(fp);
}
