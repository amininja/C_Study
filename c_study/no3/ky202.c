/* ky202.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	FILE *fp1;
	char szfname1[] = "ky202.c";
	char szdata[90];
	int ni;

	fp1 = fopen(szfname1, "r");
	if (fp1 == NULL){
		printf("ファイルのオープンに失敗しました");
		return;
	}

	ni = 0;
	while(1){
		fgets(szdata, 80, fp1);
		printf("%d:%s", ++ni, szdata);
		if (feof(fp1)){
			printf("\n最後まで表示しました");
			break;
		}
	}

	fclose(fp1);
}