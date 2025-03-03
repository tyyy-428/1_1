#include<stdio.h>
int main()
{
	printf("2022141410143 谭云\n");
	/*
	  for(变量初始化；循环条件；每次循环后变量改变值）
	  {
	  
	  }
	 */
	double result = 1;//数据类型有作用域，取决于包裹其的括号
	for(int i = 1;i <= 10;i++)
	{
		double f = 1;//定义变量需要初始化
		for(int n = 1;n <= i;n++)
		{
			f = f * n;
		}
		result += 1 / f;
		//result = result + 1 / f;
	}
	printf("e1=%lf\n",result);
	/*i = 2;
	  {
	 n =  2
	  f = 1 * 1 * 2
	  }
	 result = 1 + 1 /1*/
	result = 1;
	int i = 1;
	double f = 1;//定义变量需要初始化
	do{
		f = 1;
		int n = 1;
		do{
			f = f * n;
			n++;
		   }while(n <= i);
		result += 1 / f;
		i++;
	}while((1 / f) >= 1e-4);
	printf("e2=%lf",result);
	//printf("输出的内容 占位符 输出的内容"，代替占位符的值)
}



