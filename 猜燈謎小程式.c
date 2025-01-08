//p10-4.c
#include<stdio.h>
#include<string.h>
//猜燈謎小遊戲 
void intro(void);
int main(){
	
	char word[20];
	char *str="apple";
	intro();
	printf("請輸入您的答案:");
	scanf("%s",word);
	int result;
	result=strcmp(word,str);
	if (result==0){
		printf("\n\n您答對了!答案是%s",str);
	}else{
		printf("您答錯了!答案是%s",str);
	}

	return 0;
} 

void intro(void){
	printf("~~~~~~~~~歡迎來到猜字詞娛樂城~~~~~~~~~\n");
	printf("遊戲規則:您需要猜出一個英文字詞，且內容不可出現空格，可以是名詞或是動詞\n\n");
	printf("問題:皮兒有紅也有黃，身子圓圓好模樣，連皮帶肉一起啃，味兒甜甜有營養。 （打一水果）\n");
}


