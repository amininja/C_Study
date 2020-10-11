/* ky108.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	FILE *fp1;
	FILE *fp2;
	char szfname1[] = "ky108.c";
	char szfname2[] = "ky108.txt";
	char szdata[81];
	int ni;

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

	ni = 1;
	while (fgets(szdata, 80, fp1) != NULL){
		fprintf(fp2, "%02d:%s", ni, szdata);
		ni++;
	}

	fclose(fp1);
	fclose(fp2);
}
