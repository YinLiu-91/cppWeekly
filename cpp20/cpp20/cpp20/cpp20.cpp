#include<set>

struct S {
    int i;
    int j;
    auto operator<=>(const S& rhs)const = default;
    // bool operator<(const S& rhs)const 
    // {
    //     return i<rhs.i||i==rhs.i&&j<rhs.j;
    // }
};

int main()
{
    std::set<S> s;
    s.insert({ 1,2 });
    s.insert({ 1,3 });
}