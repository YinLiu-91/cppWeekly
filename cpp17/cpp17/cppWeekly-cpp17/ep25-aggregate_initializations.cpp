// ����struct�ĳ�ʼ�������Բ���ȷд�����캯����������˳��ֱ�ӳ�ʼ��
struct Base
{
	int i;

};

struct Derived:Base
{
	int j;
	int k;


};

int main()
{
	Derived d{ 1,2,3 };// c++11 �޷�����ͨ����c++17����
	return 0;
}