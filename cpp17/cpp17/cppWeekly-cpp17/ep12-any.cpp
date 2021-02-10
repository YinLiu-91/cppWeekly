#include<iostream>
#include<any>
#include<vector>
#include<string>

int main()
{
	std::vector<std::any> v{ 5,3.4,std::string("Hello World") };
	std::cout << v.size() << '\n';
	std::cout << std::any_cast<int>(v[1]) << '\n';
	std::cout<<std::
	return 0;
	

}
