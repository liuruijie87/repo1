#include <iostream>
#include <ctime>
//time() 包含在这个库中，
//也可以使用time.h这个头文件,但C++还是用<ctime>统一一些

using namespace std;


int main()
{
	srand(time_t(NULL));
	// srand()括号当中就是种子的数值，默认情况是srand(1)
	// time(NULL)可以获得当下的系统时间，也可以用time(0)

	int random_number = rand() % 10;
	//这里生成的随机数可以通过取余的方式限制范围

	cout << random_number << endl;
	//每次执行的结果是不同的，达到生成随机数的目的


	return 0;
}
