#include<functional>

int f(int i,int j,int k){
    return i+j+k;
}
int main(int argc ,char* argv[])
{
auto func=std::bind_front(&f,1,3);
return func(argc);
   
}