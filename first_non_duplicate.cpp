#include <map>

char first_non_repeating(std::string str)
{
    map<char, int> count;
    map<char, int>::iterator it;
    
    for (int i = 0; i < str.length(); i++)
    {
        if (count.find(str[i]) == count.end())
            count[str[i]] = 1;
        else
            count[str[i]]++;
    }
    
    for (it = count.begin(); it != count.end(); it++)
    {
        if (it->second == 1)
            return it->first;
    }
    
    return '0';
}