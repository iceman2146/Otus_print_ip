
#include <stdint.h>
#include <string>
#include <vector>
#include <list>
#include <tuple>
int main()
{
    int8_t sig_char{-1};
    int16_t short_int{0};
    int32_t simple_int{2130706433};
    int64_t long_int{8875824491850138409};
    std::string simple_string{"Hello, world!"};
    std::vector<int> simple_vector{100,200,300,400};
    std::list<short> simple_list{400,300,200,100};
    std::tuple<int,int,int,int> simple_tuple=std::make_tuple(123,456,789,0);

    return 0;
}