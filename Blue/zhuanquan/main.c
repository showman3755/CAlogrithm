#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include "compare.h"
#include "repeat.h"
#include "datahand.h"

#define random(x) (rand()%x)     //产生0-100之间的随机数

//函数声明
void Get_Time(void);             //获取系统时间函数

int main(void)
{
	int result = 0;
	int number;
	int i;
	number = DeleContinuSame(array, 620);
	Get_Time();
	for (i = 0; i < number; i++)
	{
		printf("%d\r\n", array[i]);
		result = ReapeatFunction(array, NUMBER);
		if (result)
		{
			Get_Time();
		}
		Sleep(20);
	}
	
//	printf("%d\r\n", numLong);
	system("pause");

	return 0;
}

void Get_Time(void)
{
	int xtn;
	int xty;
	int xtr;
	int xts;
	int xtf;
	int xtm;
	time_t nowtime;
	struct tm *timeinfo;

	time(&nowtime);
	timeinfo = localtime(&nowtime);

	xtn = timeinfo->tm_year + 1900;
	xty = timeinfo->tm_mon + 1;
	xtr = timeinfo->tm_mday;
	xts = timeinfo->tm_hour;
	xtf = timeinfo->tm_min;
	xtm = timeinfo->tm_sec;

	printf("现在的时间是：%d年%d月%d日,%d时%d分%d秒\r\n", xtn, xty, xtr, xts, xtf, xtm);
}
