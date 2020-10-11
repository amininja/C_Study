/* ky104.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 	*/
void main(void);

/* メイン関数 */
void main(void)
{
	FILE *fp;
	char szfname[] = "ky104.dat";
	int n1;
	long l1;
	float f1;

	fp = fopen(szfname, "r");
	if (fp == NULL){
		printf("ファイルのオープンに失敗しました");
		return;
	}

	while (fscanf(fp, "%d,%f,%ld", &n1, &f1, &l1) != EOF)
		printf("<%d><%f><%ld>\n", n1, f1, l1);

	fclose(fp);
}
