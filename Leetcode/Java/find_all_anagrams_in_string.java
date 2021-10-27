/*
Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Input: s = "cbaebabacd", p = "abc"
Output: [0,6]

*/

class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        int[] cnt = new int[128];
        for (char c : p.toCharArray()) cnt[c]++;

        List<Integer> ans = new ArrayList<>();
        for (int r = 0, l = 0; r < s.length(); ++r) {
            char c = s.charAt(r);
            cnt[c]--;
            while (cnt[c] < 0) { 
                cnt[s.charAt(l)]++; 
                l++;
            }

            if (cnt[c] == 0 && r - l + 1 == p.length()) { 
                ans.add(l); 
                cnt[s.charAt(l)]++; 
                l++;
            }
        }
        return ans;
    }
}
