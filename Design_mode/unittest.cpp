// Design_mode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "DataRecvier.h"
#include "DataSender.h"
int main()
{

	DataRecvier a("DataRecvier a");
	DataRecvier b("DataRecvier b");
	DataSender c;
	c.Attach(&a);
	c.Attach(&b);
	c.notify();
	system("pause");
    return 0;
}

