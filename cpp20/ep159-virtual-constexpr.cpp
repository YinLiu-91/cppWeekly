#include<array>
// 虚函数的constexpr
struct Base{
    [[nodiscard]]constexpr virtual int get_value()const =0;
};

struct Derived:Base
{
    [[nodiscard]]constexpr virtual int get_value() const override{
        return 5;
    }
};
struct Derived2:Base
{
    [[nodiscard]]constexpr virtual int get_value() const override{
        return 10;
    }
};

constexpr auto get_some_value()
{
    const Derived d2;
    const Derived d;
    const Derived2 d4;
    const Derived2 d5;

    const std::array<const Base*,4>data{&d2,&d,&d4,&d5};
    int sum=0;
    for(const auto *elem:data)
    sum+=elem->get_value();
    return sum;
}

int main()
{
    constexpr auto v=get_some_value();
    return v;
}