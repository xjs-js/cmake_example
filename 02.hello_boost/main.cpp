#include <iostream>
#include <boost/filesystem.hpp>

int main(int argc, char* argv[])
{
    boost::filesystem::path cur_path = boost::filesystem::current_path();
    std::cout << cur_path.string() << std::endl;
    return 0;
}