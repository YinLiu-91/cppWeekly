// 对于struct的初始化，可以不明确写出构造函数，按参数顺序直接初始化
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
	Derived d{ 1,2,3 };// c++11 无法编译通过，c++17可以
	return 0;
}