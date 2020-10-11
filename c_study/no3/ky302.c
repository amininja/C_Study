/* ky302.c */

/* インクルード */
#include <stdio.h>
#include <time.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
  clock_t stime;
  char stinp[80];

  stime = clock();
  if (stime < (clock_t)0){
    printf("clock関数を使うことができません");
      return;
  }

  printf("1番目の文字を入力してください");
  scanf("%s", stinp);
  printf("文字:%sが入力されるまで %.3fsec\n",stinp , 
    (float)((clock()-stime)/CLOCKS_PER_SEC));

  printf("2番目の文字を入力してください");
  scanf("%s", stinp);
  printf("文字:%sが入力されるまで %.3fsec\n",stinp , 
    (float)((clock()-stime)/CLOCKS_PER_SEC));

  return;
}