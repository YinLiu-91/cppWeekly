#include<algorithm>
// constexpr算法的使用，会自动使用带constexpr的算法模式，不过有的算法没有constexpr形式
#include<array>
constexpr auto sort(auto data)
{
    std::sort(data.begin(),data.end());
    return data;
}
int  main()
{
    
    constexpr auto sorted_data=sort(std::array{3,1,2});
    return sorted_data[0];
}