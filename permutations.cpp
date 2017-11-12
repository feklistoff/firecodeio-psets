#include <map>

bool permutation(std::string input1, std::string input2)
{
    if (input1.length() != input2.length())
        return false;
    
    if (!input1.length() && !input2.length())
        return true;
    
    int in1[26] = {};
    int in2[26] = {};
    
    for (int i = 0; i < input1.length(); i++)
    {
        int indx = std::tolower(input1[i]) - 'a';
        in1[indx] += 1;
        indx = std::tolower(input2[i]) - 'a';
        in2[indx] += 1;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (in1[i] != in2[i])
            return false;
    }
    
    return true;
}