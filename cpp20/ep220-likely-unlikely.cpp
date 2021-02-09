#include<vector>
// 允许编译器为包含该语句的执行路径，比任何其他不包含该语句的执行路径，更可能或更不可能的情况进行优化。
struct S
{
    int id;
    int data;
};

#ifdef USE_LIKELY
#define LIKELY [[likely]]
#define UNLIKELY [[unlikely]]
#else
#define LIKELY
#define UNLIKELY
#endif

S& get_value(std::vector<S>&ss,const int id)
{
    const auto value
    =std::find_if(begin(ss),
    end(ss),
    [id](const auto &s)
    {
        return s.id==id;
    }
    );
    if(value==ss.end()) UNLIKELY // 最不可能
    {
        ss.push_back({id,0});
    }
    else LIKELY //最有可能
    {
        return *value;
    }

}