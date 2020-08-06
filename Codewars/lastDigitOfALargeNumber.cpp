#include <string>
#include <set>
#include <math.h>
using namespace std;

int last_digit(const std::string &s1, const std::string &s2)
{
        set<int> rem_1 = {0, 1, 5, 6};
        set<int> rem_2 = {4, 9};
        set<int> rem_4 = {2, 3, 7, 8};

        int base = s1[s1.size() - 1] - 48;
        if (rem_1.find(base) != rem_1.end())
                return base;
        else if (rem_2.find(base) != rem_2.end())
        {
                int power = (s2[s2.size() - 1] - 48) % 2;
                if (power == 0)
                        return (int)(pow(base, 2)) % 10;
                else
                        return (int)(pow(base, power)) % 10;
        }
        else
        {
                int power = (s2[s2.size() - 1] - 48) % 4;
                if (power == 0)
                        return (int)(pow(base, 4)) % 10;
                else
                        return (int)(pow(base, power)) % 10;
        }
        return 0;
}