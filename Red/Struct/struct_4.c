#include <stdio.h>
#include <stdbool.h>
#include "person.h"

typedef struct person{
	unsigned int number;           //编号
	char* name;                    //姓名
	char* sex;                     //性别
	unsigned short age;            //年龄 
	unsigned short hight;          //身高(cm)
	float weight;                  //体重(kg)
	bool remark;                   //备注
}PERSON_InitStruct;

void PersonInit_4(void)
{
	int i;
	PERSON_InitStruct person[NUM];              //结构体数组

	for (i = 0; i < NUM; i++)                   //在实际开发中，这里可连接数据库获取数据
	{
		person[i].number = 1001;
		person[i].name = "zhangsan";
		person[i].sex = "man";
		person[i].age = 20;
		person[i].hight = 170;
		person[i].weight = 65.5;
		person[i].remark = true;
	}

	for (i = 0; i < NUM; i++)
	{
		printf("person[%d].number = %d\r\n", i, person[i].number);
		printf("person[%d].name = %s\r\n", i, person[i].name);
		printf("person[%d].sex = %s\r\n", i, person[i].sex);
		printf("person[%d].age = %d\r\n", i, person[i].age);
		printf("person[%d].hight = %d\r\n", i, person[i].hight);
		printf("person[%d].weight = %.1f\r\n", i, person[i].weight);
		printf("person[%d].remark = %d\r\n", i, person[i].remark);
		printf("-------------------------------------\r\n");
	}
}
