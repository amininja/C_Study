/* ky302.c */

/* �C���N���[�h */
#include <stdio.h>
#include <time.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
  clock_t stime;
  char stinp[80];

  stime = clock();
  if (stime < (clock_t)0){
    printf("clock�֐����g�����Ƃ��ł��܂���");
      return;
  }

  printf("1�Ԗڂ̕�������͂��Ă�������");
  scanf("%s", stinp);
  printf("����:%s�����͂����܂� %.3fsec\n",stinp , 
    (float)((clock()-stime)/CLOCKS_PER_SEC));

  printf("2�Ԗڂ̕�������͂��Ă�������");
  scanf("%s", stinp);
  printf("����:%s�����͂����܂� %.3fsec\n",stinp , 
    (float)((clock()-stime)/CLOCKS_PER_SEC));

  return;
}