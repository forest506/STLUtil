
#ifdef _WIN32
#include <Windows.h>
#else
#include <sys/types.h>
#include <dirent.h>
#endif

namespace STLUtil{

// source: https://stackoverflow.com/a/2072890/192001
bool ends_with(std::string const &value, std::string const &ending)
{
    if (ending.size() > value.size())
    {
        return false;
    }
    return std::equal(ending.rbegin(), ending.rend(), value.rbegin());
}

}