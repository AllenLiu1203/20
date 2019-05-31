#include<stdio.h>
#include<stdlib.h>

struct Phone{
	
	char *phone_brand;
	char *phone_model;
	char *phone_yearofmanufacture;
	int   phone_price;
	char *use_name;
	char *use_cellphone;
	
}phone[2]; 
int main(void){
	int a=0;
	struct Phone phone[5]={"iphone","6s","2015/12/20",22000,"x","0911111111",
	                     "iphone","7","2019/11/3",16999,"y","0922222222",
						 "iphone","8","2017/5/24",21588,"x","0933333333",
						 "iphone","8 plus","2019/4/8",26788,"w","09444444444",
						 "iphone","xr","2019/9/12",18999,"n","0255555555"};
	for(a=0;a<5;a++){
		printf("%s的資料----------\n",phone[a].use_name);
		printf("手機品牌:");
		puts(phone[a].phone_brand);
		printf("手機型號:");
		puts(phone[a].phone_model);
		printf("手機出廠日期:");
		puts(phone[a].phone_yearofmanufacture);
		printf("手機價格:");
		printf("%d\n",phone[a].phone_price);
		printf("使用者:");
		puts(phone[a].use_name);
		printf("手機號碼:");
		puts(phone[a].use_cellphone);
		printf("----------------\n\n");
	}                    
	
	system("pause");
	return 0;
	
}
