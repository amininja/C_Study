/* ky201.c */

/* インクルード */
#include <stdio.h>

/* GLOBAL変数 */
FILE *Fp1;


/* 関数宣言 */
void main(void);
void disp_list(void);
void change_data(int, char);

/* メイン関数 */
void main(void)
{
	char szfname1[] = "ky201.dat";
	char c_change;
	int ni;

	Fp1 = fopen(szfname1, "r+b");
	if (Fp1 == NULL){
		printf("ファイル１のオープンに失敗しました");
		return;
	}

	/* 一覧表示 */
	disp_list();

	/* ユーザーに置き換え位置と文字を指定させる */
	printf("何番目のデータを置き換えますか？");
	scanf("%d%*[^\n]", &ni);
	scanf("%*c");

	printf("置き換える文字は？");
	scanf("%c%*[^\n]", &c_change);
	scanf("%*c");

	printf("%d番目の文字を%cに置き換えます\n", ni, c_change);

	/* データ変更 */
	change_data(ni, c_change);

	/* 一覧表示 */
	printf("\n置き換えた結果です\n");
	disp_list();

	fclose(Fp1);
}

/* 一覧表示 */
void disp_list(void)
{
	char szdata[81];

	fseek(Fp1, 0L, SEEK_SET);

	fgets(szdata, 80, Fp1);
	printf("ファイルの内容->%s\n", szdata);
}

/* 指定場所の文字を変更 */
void change_data(int npos, char cdata)
{
	fseek(Fp1, (long)npos-1, SEEK_SET);

	fputc(cdata, Fp1);
}

