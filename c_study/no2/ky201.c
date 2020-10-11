/* ky201.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 	*/
void main(void);
int Func_plus(int, int);
void Func_disp(int);

/* メイン関数 */
void main(void)
{
	int n1, n2, n3;

	/* 数字の入力 */
	printf("1番目の数値:");
	scanf("%d", &n1);
	printf("2番目の数値:");
	scanf("%d", &n2);

	/* 加算関数を呼び出す */
	n3 = Func_plus(n1, n2);

	/* 結果を表示する関数を呼び出す */
	Func_disp(n3);
}

/* 加算する関数 */
int Func_plus(int n1, int n2)
{
	return n1+n2;
}

/* 結果を表示する関数 */
void Func_disp(int n1)
{
	printf("\n2つの数値を加算すると=%dです", n1);
}


