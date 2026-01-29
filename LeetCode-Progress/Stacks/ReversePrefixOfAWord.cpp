class Solution {
public:
    string reversePrefix(string word, char ch) {
        if(word.find(ch)==string::npos)
            return word;
        stack<char> st;
        for(auto it : word)
        {
            st.push(it);
            if(it == ch)
            {
                break;
            }
        }
        int n = st.size();
        for(int i = 0; i < n; i++)
        {
            word[i] = st.top();
            st.pop();
        }
        return word;
    }
};