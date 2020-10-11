/* ky106.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 	*/
void main(void);

/* メイン関数 */
void main(void)
{
	FILE *fp1;
	FILE *fp2;
	char szfname1[] = "ky106.c";
	char szfname2[] = "ky106.txt";
	int ndata;

	fp1 = fopen(szfname1, "r");
	if (fp1 == NULL){
		printf("ファイル１のオープンに失敗しました");
		return;
	}
	fp2 = fopen(szfname2, "w");
	if (fp2 == NULL){
		printf("ファイル２のオープンに失敗しました");
		fclose(fp1);
		return;
	}

	while (1){
		ndata = fgetc(fp1);
		if (ndata == EOF)
			break;

		fputc(ndata, fp2);
	}

	fclose(fp1);
	fclose(fp2);
}
