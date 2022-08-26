#include <vector>
#include <memory>
#include <iostream>
#include <string>

class AircraftPosition
{
    int n;
    int m;
public:
    AircraftPosition()
    {
        n = 1;
        if (dice())
            return;
        m = 1;
    }
};

int main()
{
    int a;
    std::string hello;
    std::unique_ptr<std::string> ptr{new std::string{"abc"}};
    ptr.reset(new std::string{"xyz"});
    ptr.reset(NULL);
    std::vector<int> vec{1, 2, 3, 4};
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << '\n';
}
