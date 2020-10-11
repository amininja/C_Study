/* ky204.c */

/* インクルード */
#include <stdio.h>

/* グローバル変数 */
FILE *Fp1;

/* 関数宣言 */
void main(void);
void test_rewind(void);
void test_clearerr(void);

/* メイン関数 */
void main(void)
{
	char szfname1[] = "ky204.c";

	Fp1 = fopen(szfname1, "rb");
	if (Fp1 == NULL){
		printf("ファイルのオープンに失敗しました");
		return;
	}

	test_rewind();
	test_clearerr();

	fclose(Fp1);
}

void test_rewind(void)
{
	char szdata[81];

	while(1){
		fgets(szdata, 80, Fp1);
		if (feof(Fp1)){
			printf("最後まで表示しました\n");
			break;
		}
	}

	rewind(Fp1);

	printf("rewind:現在のファイルポジション%ld\n", ftell(Fp1));
}

void test_clearerr(void)
{
	char szdata[81];

	while(1){
		fgets(szdata, 80, Fp1);
		if (feof(Fp1)){
			printf("最後まで表示しました\n");
			break;
		}
	}

	clearerr(Fp1);

	printf("clearerr:現在のファイルポジション%ld", ftell(Fp1));
}

