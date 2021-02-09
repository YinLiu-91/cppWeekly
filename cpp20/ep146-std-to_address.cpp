// std::to_address 用法，即将一个类指针的变量传递给它，从而得到其地址
#include<memory>
#include<iostream>
#include<vector>
int main()
{
    auto l=[](const auto & p)
    {
        std::cout<<std::to_address(p)<<'\n';
    };
    auto int_ptr=std::make_unique<int>(15);

    auto int_ptr2=std::make_unique<int>(15);
    int i{17};

    l(int_ptr);
    l(&i);
    //l(i); ///无法运行
    std::vector<int> ivec{1,2,3,4};
    l(ivec.begin()); //迭代器也可以，迭代器是一个指针
}