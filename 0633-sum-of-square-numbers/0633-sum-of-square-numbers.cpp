class Solution {
public:
    bool judgeSquareSum(int c) {
        int left = 0;

        int right=(int) sqrt(c);

        while(left<=right)

        {

            long long a2plusb2=(long long)(left*left)+(right*right);

            if(a2plusb2 == c )

            return true;

            else if(a2plusb2<c)

            left++;

            else

            right--;

        }

        return false;
    }
};