#include<array>
constexpr auto get_value()
{
    int *i=new int{5};
    return i;
}

constexpr auto deref_delete()
{
    auto ptr =get_value();
   
    auto value=*ptr;
     delete ptr;
    return value;
}
int main()
{
    constexpr auto arrSize=deref_delete();
    std::array<int,arrSize> arr;//验证是否编译期间赋值，无错误提示则为编译期间值
    return 0;

}

// 在编译期可以使用new
// 但是需要在constexpr上下文中释放它
// 注意不要使用已经释放的内存