/*
 * @Author: your name
 * @Date: 2021-02-09 18:48:14
 * @LastEditTime: 2021-02-09 19:15:10
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \cppWeekly\cpp20\ep242-concepts-if-constexpr.cpp
 */
#include<vector>
#include<list>
#include<array>
#include<cassert>

auto allocated_size(const auto & container)
{
    // 对于if，如果某代码能编译，则进入if，否则进入else，从而能够判断使用capacity还是size
    if constexpr (requires{container.capacity();}) 
    {
        return container.capacity();
    }else
    {
        return container.size();
    }
}

int main()
{
    std::vector<int>vec;
    assert(allocated_size(vec)==0);

    vec.push_back(1);
    assert(allocated_size(vec)==1);

    vec.push_back(2);
    assert(allocated_size(vec)==2);

    vec.push_back(2);
    assert(allocated_size(vec)==4);

    std::array<int,10>array; // 如果不加requires的话，这里不行，因为数组没有capacity成员
    assert(allocated_size(vec)==10);
    return 0;

}