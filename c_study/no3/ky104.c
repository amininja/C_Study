/* ky104.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 	*/
void main(void);

/* ���C���֐� */
void main(void)
{
	FILE *fp;
	char szfname[] = "ky104.dat";
	int n1;
	long l1;
	float f1;

	fp = fopen(szfname, "r");
	if (fp == NULL){
		printf("�t�@�C���̃I�[�v���Ɏ��s���܂���");
		return;
	}

	while (fscanf(fp, "%d,%f,%ld", &n1, &f1, &l1) != EOF)
		printf("<%d><%f><%ld>\n", n1, f1, l1);

	fclose(fp);
}
