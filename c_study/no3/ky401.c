/* ky401.c */

/* インクルード */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* 関数宣言 */
int main(int argc, char *argv[]);

/* メイン関数 */
int main(int argc, char *argv[])
{
	assert(argc > 1);
	printf("%s で実行されました", argv[1]);

	return(0);
}
