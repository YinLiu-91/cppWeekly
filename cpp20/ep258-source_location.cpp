#include<fmt/format.h>
// source_location 类表示关于源码的具体信息，例如文件名、
// 行号以及函数名。以前，希望获得关于调用位置的信息（用于记录、测试或调试目的）
// 的函数必须使用宏，以令如 __LINE__ 与 __FILE__ 的预定义宏于调用方的环境展开。
// source_location 类提供更好的替代

#include<array>
#include<cstdint>
#include<source_location> //


template<typename T>
void log(T t,std::source_location s=std::source_location::current())
{
    auto local=std::source_location();
    fmt::print("[{}] {}:,({},{})\n",local.file_name(),
    local.function_name(),local.line(),local.column(),t);

    fmt::print("[{}] {}:,({},{})\n",s.file_name(),
    s.function_name(),s.line(),s.column(),t);
}

int main(const int ,const char*const *)
{
    [](int)->int{
        auto local=std::source_location::current();
         fmt::print("[{}] {}:,({},{})\n",local.file_name(),
    local.function_name(),local.line(),local.column());
    return 5;
    }(5);
    log("Hello World"/*,*/);
}