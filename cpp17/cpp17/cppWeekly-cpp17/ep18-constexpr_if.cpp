#include<iostream>
#include <cassert>
#include <string>
#include <vector>
#include <cstdio>
// constexpr if 在编译时判断 





template<typename T>
auto print_type_info(const T& t)
{
	if constexpr (std::is_integral<T>::value) {
		return t + 1;
	}
	else if constexpr (std::is_floating_point_v<T>) // 只要有if 就需加constexpr
		
	{
		//std::cout << "is not integral" << '\n';
		return t + 0.1;
	}
	else if 
	{
		return t;
	}
}

int main()
{
	
	std::cout << print_type_info(5) << '\n';
	std::cout << print_type_info(5.0) << '\n';
	std::cout << print_type_info("a" )<< '\n';
	return 0;


}