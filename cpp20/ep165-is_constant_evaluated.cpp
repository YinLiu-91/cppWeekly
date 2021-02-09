#include<type_traits>
// 使用 std::is_constant_evaluated() 判断是否编译器执行了某某
constexpr auto f()
{
    if(std::is_constant_evaluated())
    {
        return 5;
    }
    else
    {
        return 10;
    }
}

int main()
{
    constexpr int v=f(); //这里也需要是constexpr的，不然还是会返回10
    int v1=f();
    return v;
}