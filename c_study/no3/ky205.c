/* ky205.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
int main(int argc, char *argv[]);

/* ���C���֐� */
int main(int argc, char *argv[])
{
	FILE *fp1;

	fp1 = fopen(argv[1], "r");
	if (fp1 == NULL){
		perror("�t�@�C���Ȃ�");
		return(1);
	}

	perror("�t�@�C��������܂���");
	fclose(fp1);

	return(0);
}
