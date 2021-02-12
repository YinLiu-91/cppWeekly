// ¾ÉµÄ
namespace org_old
{
namespace group_old {
namespace project_old
{
namespace internal_old
{
struct MyStruct
{

};
}
}
}
}

// c++17
namespace org::group::project::internal
{
struct MyStruct {

};

}


int main()
{
	org_old::group_old::project_old::internal_old::MyStruct s;
	org::group::project::internal::MyStruct s2;
}