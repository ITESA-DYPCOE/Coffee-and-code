class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() == t.length())
        {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            if (s.compare(t) == 0)
            {
                return true;
            }
        }
        return false;
    }
};