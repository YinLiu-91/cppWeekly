#include<iostream>
int main()
{
	const int case_i = 3;
	
	switch (case_i)
	{
	case 1:
		std::cout << "case_i=: " << case_i;
		break;
	case 2:
		std::cout << "case_i=: " << case_i;
		break;
	case 3:
		std::cout << "case_i=: " << case_i << '\n';
		// break;
		[[fallthrough]]; 
	default:
		std::cout << "default" << '\n';
		break;
	}
}