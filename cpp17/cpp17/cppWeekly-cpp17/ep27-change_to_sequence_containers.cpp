#include<vector>

int main()
{
	std::vector<std::vector<int>> v;
	//v.emplace_back({ 3,1 });
	v.emplace_back( 3, 1 ).push_back(3); //������д�������ʽ����v[0]={1,1,1,3}
	return 0;
}