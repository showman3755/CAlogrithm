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
};

void PersonInit_2(void)
{
	struct person person1 = {1001, "zhangsan", "man", 20, 170, 60.0, true};
	struct person person2 = { .number = 1002, .name = "lisi", .sex = "man", .age = 22, .hight = 175, .weight = 65.5, .remark = true};
	struct person person3;
	person3.number = 1003;
	person3.name = "zhaodi";
	person3.sex = "man";
	person3.age = 23;
	person3.hight = 168;
	person3.weight = 60.5;
	person3.remark = true;

	printf("person1 the number %d\r\n", person1.number);
	printf("person1 the name %s\r\n", person1.name);
	printf("person1 the sex %s\r\n", person1.sex);
	printf("person1 the age %d\r\n", person1.age);
	printf("person1 the hight %d\r\n", person1.hight);
	printf("person1 the weight %.1f\r\n", person1.weight);
	printf("person1 the remark %d\r\n", person1.remark);
	printf("-------------------------------------\r\n");

	printf("person2 the number %d\r\n", person2.number);
	printf("person2 the name %s\r\n", person2.name);
	printf("person2 the sex %s\r\n", person2.sex);
	printf("person2 the age %d\r\n", person2.age);
	printf("person2 the hight %d\r\n", person2.hight);
	printf("person2 the weight %.1f\r\n", person2.weight);
	printf("person2 the remark %d\r\n", person2.remark);
	printf("-------------------------------------\r\n");

	printf("person3 the number %d\r\n", person3.number);
	printf("person3 the name %s\r\n", person3.name);
	printf("person3 the sex %s\r\n", person3.sex);
	printf("person3 the age %d\r\n", person3.age);
	printf("person3 the hight %d\r\n", person3.hight);
	printf("person3 the weight %.1f\r\n", person3.weight);
	printf("person3 the remark %d\r\n", person3.remark);
	printf("-------------------------------------\r\n");
}
