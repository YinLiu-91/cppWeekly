#include<vector>

std::vector<int> make_vec()
{
	return { 1,2,3,4 };
}

int main()
{
	 auto vec = make_vec();

	//const  auto itr = std::find(vec.begin(), vec.end(), 2); // 这里的const表示itr是const，
	//// 即不能如itr++等动作，但是其指向的值是可以改变的
	//if (itr != vec.end())
	//	*itr = 3;

	//const auto itr2 = std::find(vec.rbegin(), vec.rend(), 3);
	//if (itr2 != vec.rend())
	//	*itr2 = 4;

	 if (const auto itr = std::find(vec.begin(), vec.end(), 2); itr != vec.end()) // if statement
	 {
		 *itr = 3;
	 }
	 else if (const auto front = vec.front(); front != 2)
	 {
		 vec.insert(itr, 4);
	 }
	 else
	 {
		 return front;	
	 }
}