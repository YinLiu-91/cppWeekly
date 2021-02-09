#include<array>
#include<iostream>
#include<string>
/// to_array 转换成数组，注意字符串常量会包含\0结束符号？？
int main()
{
    int data[3]={1,2,3};
    auto idata=std::to_array(data);
    /// 注意字符串常量会包含\0结束符号
    auto arr=std::to_array("Helloworld");
    std::string s="Helloworld";
    std::array<int,arr.size()> arrInt;
    std::cout<<arrInt.size()<<s.size();
    return 0;
}