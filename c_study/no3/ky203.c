/* ky203.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
    FILE *fp1; 
    char szfname1[] = "ky203.dat"; 
    int nrtn;

    fp1 = fopen(szfname1, "r"); 
    if (fp1 == NULL){ 
        printf(" �t�@�C���̃I�[�v���Ɏ��s���܂���");
        return; 
    } 
    nrtn = fputc('Z', fp1);
    if (ferror(fp1)) 
        printf(" �G���[�ł�");
    else 
        printf(" ����ł�");
 
    fclose(fp1);
}
