/* ky107.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 	*/
void main(void);

/* ���C���֐� */
void main(void)
{
	FILE *fp1;
	FILE *fp2;
	char szfname1[] = "ky107.c";
	char szfname2[] = "ky107.txt";
	char szdata[81];

	fp1 = fopen(szfname1, "r");
	if (fp1 == NULL){
		printf("�t�@�C���P�̃I�[�v���Ɏ��s���܂���");
		return;
	}
	fp2 = fopen(szfname2, "w");
	if (fp2 == NULL){
		printf("�t�@�C���Q�̃I�[�v���Ɏ��s���܂���");
		fclose(fp1);
		return;
	}

	while (fgets(szdata, 80, fp1) != NULL)
		fputs(szdata, fp2);

	fclose(fp1);
	fclose(fp2);
}
