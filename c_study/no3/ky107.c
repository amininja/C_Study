/* ky107.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 	*/
void main(void);

/* メイン関数 */
void main(void)
{
	FILE *fp1;
	FILE *fp2;
	char szfname1[] = "ky107.c";
	char szfname2[] = "ky107.txt";
	char szdata[81];

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

	while (fgets(szdata, 80, fp1) != NULL)
		fputs(szdata, fp2);

	fclose(fp1);
	fclose(fp2);
}
