#include <stdio.h>
#include <stdbool.h>

struct person{
	unsigned int number;           //编号
	char* name;                    //姓名
	char* sex;                     //性别
	unsigned short age;            //年龄 
	unsigned short hight;          //身高(cm)
	float weight;                  //体重(kg)
	bool remark;                   //备注
}person1, person2, person3;

void PersonInnit_1(void)
{
	//person1 = { 1001, "lisi", 19, "man", 165, 55, true };        //在VS 2013上编译不能通过
	//person2 = { .number = 1002, .name = "wangxue", .age = 18, .sex = "woman", .hight = 160, .weight = 45, .remark = true };//在VS 2013上编译不能通过
	person3.number = 1003;
	person3.name = "zhaoliu";
	person3.sex = "man";
	person3.age = 18;
	person3.hight = 170;
	person3.weight = 55.0;
	person3.remark = true;

	printf("person3 the number %d\r\n", person3.number);
	printf("person3 the name %s\r\n", person3.name);
	printf("person3 the age %d\r\n", person3.age);
	printf("person3 the sex %s\r\n", person3.sex);
	printf("person3 the hight %d\r\n", person3.hight);
	printf("person3 the weight %d\r\n", person3.weight);
	printf("person3 the remark %d\r\n", person3.remark);
	printf("-------------------------------------\r\n");
}
