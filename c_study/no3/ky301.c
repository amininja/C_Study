/* ky301.c */

/* インクルード */
#include <stdio.h>
#include <time.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	time_t ntime;
	struct tm *pst_tm1;
	char szstr[81];

	ntime = time(NULL);
	pst_tm1 = localtime(&ntime);

	/* tm構造体を使った表示 */
	printf ("%d年%d月%d日 %d時%d分%d秒\n",
		pst_tm1->tm_year+1900, pst_tm1->tm_mon+1, pst_tm1->tm_mday,
		pst_tm1->tm_hour, pst_tm1->tm_min, pst_tm1->tm_sec);

	/* asctimeを使った表示 */
	printf("%s", asctime(pst_tm1));

	/* strftimeを使った表示 */
	strftime(szstr, 80, "%Y年%m月%d日 %H時%M分%S秒", pst_tm1);
	printf("%s\n", szstr);

	/* ctimeを使った表示 */
	printf("%s", ctime(&ntime));

	return;
}
