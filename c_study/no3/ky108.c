/* ky108.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	FILE *fp1;
	FILE *fp2;
	char szfname1[] = "ky108.c";
	char szfname2[] = "ky108.txt";
	char szdata[81];
	int ni;

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

	ni = 1;
	while (fgets(szdata, 80, fp1) != NULL){
		fprintf(fp2, "%02d:%s", ni, szdata);
		ni++;
	}

	fclose(fp1);
	fclose(fp2);
}
