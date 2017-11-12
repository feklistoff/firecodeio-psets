bool is_anagram(std::string input1, std::string input2)
{
    if (input1.size() != input2.size())
        return false;
    
    int alph[26] = {};
    
    for (int i = 0; i < input1.size(); i++)
    {
        alph[int(input1[i]-'a')] += 1;
        alph[int(input2[i]-'a')] -= 1;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (alph[i] != 0)
            return false;
    }
    
    return true;
}