#include<map>

int main()
{
    std::map<int,int> m;
    // 返回关联容器中是否包含某个key（不是value)
    m.insert({3,2});
    int boolValue=m.contains(1);//3则返回1（true),否则为0
    return boolValue;
}