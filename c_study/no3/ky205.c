/* ky205.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
int main(int argc, char *argv[]);

/* メイン関数 */
int main(int argc, char *argv[])
{
	FILE *fp1;

	fp1 = fopen(argv[1], "r");
	if (fp1 == NULL){
		perror("ファイルなし");
		return(1);
	}

	perror("ファイルがありました");
	fclose(fp1);

	return(0);
}
