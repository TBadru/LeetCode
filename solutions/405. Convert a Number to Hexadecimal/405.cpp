class Solution {
 public:
  string toHex(int num) {
    unsigned unsignedNum = static_cast<unsigned>(num);
    if (unsignedNum == 0)
      return "0";

    constexpr char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7',
                            '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    string ans;

    while (unsignedNum != 0) {
      ans += hex[unsignedNum & 0xf];
      unsignedNum >>= 4;
    }

    ranges::reverse(ans);
    return ans;
  }
};
