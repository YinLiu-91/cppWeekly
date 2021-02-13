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
    // ��������ֱ�Ӷ��ַ������ã�ʹ��string_view��ø��Ӹ�Ч
    return length_string_view("Hello World and World Peace"); 
}