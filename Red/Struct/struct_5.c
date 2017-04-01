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

void PersonInit_5(void)
{
	PERSON_InitStruct person = { 1001, "zhangsan", "man", 20, 170, 60.0, true };
	PERSON_InitStruct *p = &person;             //结构体指针
	
	printf("p -> number = %d\r\n", p -> number);
	printf("p -> name = %s\r\n", p -> name);
	printf("p -> sex = %s\r\n", p -> sex);
	printf("p -> age = %d\r\n", p -> age);
	printf("p -> hight = %d\r\n", p -> hight);
	printf("p -> weight = %.2f\r\n", p -> weight);
	printf("p -> remark = %d\r\n", p -> remark);
	printf("-------------------------------------\r\n");

	PERSON_InitStruct *p2 = (PERSON_InitStruct *)malloc(sizeof(PERSON_InitStruct));   //malloc返回的是所分配内存块的指针，即地址，用于访问这个struct
	//printf("*sizeof(PERSON_InitStruct) = %d\r\n", sizeof(PERSON_InitStruct));       //打印结构体所占的内存空间的大小
	if (p2 != NULL)
	{
		(*p2).number = 1002;                        //两种不同的赋值方式
		(*p2).name = "wangwu";
		(*p2).sex = "man";
		(*p2).age = 22;
		(*p2).hight = 175;
		(*p2).weight = 60.5;
		(*p2).remark = true;

		p2 -> number = 1002;
		p2 -> name = "wangwu";
		p2 -> sex = "man";
		p2 -> age = 22;
		p2 -> hight = 175;
		p2 -> weight = 60.5;
		p2 -> remark = true;

		printf("p2 -> number = %d\r\n", p2 -> number);
		printf("p2 -> name = %s\r\n", p2 -> name);
		printf("p2 -> sex = %s\r\n", p2 -> sex);
		printf("p2 -> age = %d\r\n", p2 -> age);
		printf("p2 -> hight = %d\r\n", p2-> hight);
		printf("p2 -> weight = %.2f\r\n", p2 -> weight);
		printf("p2 -> remark = %d\r\n", p2 -> remark);
		printf("-------------------------------------\r\n");

		free(p2);          //释放内存空间
	}
}
