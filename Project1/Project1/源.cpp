#include <iostream>
#include <ctime>
//time() ������������У�
//Ҳ����ʹ��time.h���ͷ�ļ�,��C++������<ctime>ͳһһЩ

using namespace std;


int main()
{
	srand(time_t(NULL));
	// srand()���ŵ��о������ӵ���ֵ��Ĭ�������srand(1)
	// time(NULL)���Ի�õ��µ�ϵͳʱ�䣬Ҳ������time(0)

	int random_number = rand() % 10;
	//�������ɵ����������ͨ��ȡ��ķ�ʽ���Ʒ�Χ

	cout << random_number << endl;
	//ÿ��ִ�еĽ���ǲ�ͬ�ģ��ﵽ�����������Ŀ��


	return 0;
}
