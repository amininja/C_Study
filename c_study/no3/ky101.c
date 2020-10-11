/* ky101.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 	*/
void main(void);

/* メイン関数 */
void main(void)
{
	FILE *fp;
	char szfname[] = "ky101.dat";

	fp = fopen(szfname, "r");
	if (fp == NULL){
		fp = fopen(szfname, "w");
		if (fp == NULL)
			printf("ファイルの作成に失敗しました");
		else
			printf("ファイルを作成しました");
	}
	else
		printf("ファイルが存在します");

	fclose(fp);
}
