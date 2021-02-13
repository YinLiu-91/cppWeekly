#include<string>
#include<iostream>
size_t length_string(const std::string& s)
{
    return s.size();
}

size_t length_string_view(const std::string_view& s)
{
    return s.size();
}

int main()
{
    std::cout << length_string("Hello World and World Peace");
    // 不拷贝，直接对字符串引用，使用string_view变得更加高效
    return length_string_view("Hello World and World Peace"); 
}