#include<iostream>
#include<cmath>
#include<iomanip>
#include<numbers>

int main()
{
    std::cout<<std::setprecision(30)<<M_PI<<'\n';
    std::cout<<std::setprecision(30)<<std::numbers::pi_v<long  double><<'\n'; //更准了
     std::cout<<std::setprecision(30)<<std::numbers::pi_v<float><<'\n'; //更不准了
    return 0;
}