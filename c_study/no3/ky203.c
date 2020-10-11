/* ky203.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
    FILE *fp1; 
    char szfname1[] = "ky203.dat"; 
    int nrtn;

    fp1 = fopen(szfname1, "r"); 
    if (fp1 == NULL){ 
        printf(" ファイルのオープンに失敗しました");
        return; 
    } 
    nrtn = fputc('Z', fp1);
    if (ferror(fp1)) 
        printf(" エラーです");
    else 
        printf(" 正常です");
 
    fclose(fp1);
}
