class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character, Integer> hp = new HashMap<>();
        int max = 0;
        for (int i = 0, j = 0; i < s.length(); i++) {
            if (hp.containsKey(s.charAt(i))) {
                j = Math.max(j, hp.get(s.charAt(i)) + 1);
            }
            hp.put(s.charAt(i), i);
            max = Math.max(max, i + 1 - j);
        }
        return max;
    }
}