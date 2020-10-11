/* ky103.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 	*/
void main(void);

/* メイン関数 */
void main(void)
{
	FILE *fp;
	char szfname[] = "ky103.c";
	char szdata[81];

	fp = fopen(szfname, "r");
	if (fp == NULL){
		printf("ファイルのオープンに失敗しました");
		return;
	}

	while (fgets(szdata, 80, fp) != NULL)
		printf("%s", szdata);

	fclose(fp);
}
