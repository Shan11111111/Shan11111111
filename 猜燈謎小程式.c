//p10-4.c
#include<stdio.h>
#include<string.h>
//�q�O���p�C�� 
void intro(void);
int main(){
	
	char word[20];
	char *str="apple";
	intro();
	printf("�п�J�z������:");
	scanf("%s",word);
	int result;
	result=strcmp(word,str);
	if (result==0){
		printf("\n\n�z����F!���׬O%s",str);
	}else{
		printf("�z�����F!���׬O%s",str);
	}

	return 0;
} 

void intro(void){
	printf("~~~~~~~~~�w��Ө�q�r���T�֫�~~~~~~~~~\n");
	printf("�C���W�h:�z�ݭn�q�X�@�ӭ^��r���A�B���e���i�X�{�Ů�A�i�H�O�W���άO�ʵ�\n\n");
	printf("���D:�֨঳���]�����A���l���n�ҼˡA�s�ֱa�פ@�_�١A���ಢ������i�C �]���@���G�^\n");
}


