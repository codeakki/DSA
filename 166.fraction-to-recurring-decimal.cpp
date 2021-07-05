/*
 * @lc app=leetcode id=166 lang=cpp
 *
 * [166] Fraction to Recurring Decimal
 */

// @lc code=start
class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator==0) return "0"; // If the numerator is 0 we can say that the final result is also going to be zero

        long long num=numerator; // for holding edge cases 
        long long den=denominator;

        bool b1=num<0;
        bool b2=den<0;

        if(b1) num=-num; //We convert both numerator and denominator into positive numbers.
        if(b2)den=-den;


        string res="";
        //main code start 
        if(b1^b2) res+="-"; //Add a - if numerator is positive and denominator is negative

        long long quo = num/den;
        long long rem =num%den;
        //Calculate the integral part of the final result.
		if(quo > 0)
		{
			ostringstream oss;
			oss << quo;
			res += oss.str();
		}
		else 
		{
			res += "0";
		}

		if(0 == rem) return res; // That the remainder is 0 means there isn't a fractional part of the result, 
		//so we return the integral part.

		/*
		In the following, we record the numerator to be divided by the denominator and the length of the temporary result.
		If a numerator has been met before, circulation happens, so we stop the computation and insert a parathesis, and return 
		the result.
		*/
		num = rem;

		unordered_map<long long, int> m;
		m[num] = res.size();

		num *= 10;
		res.append(".");
		m[num] = res.size();

		while(num > 0)
		{
			if(num < den)
			{// If the numerator is less than the denominator, we multiply the numerator with 10, and append a 'o'
				// to the result. And we record the numerator and the temporary size of the result.
				num *= 10;
				res.append("0");
				m[num] = res.size();
			}

			if(num > den)
			{
				char ch = '0' + num/den; // Compute the quotient and push the quotient to the result.
				res.push_back(ch);
				num %= den; // Compute the remainder; 
				num *= 10; // multiply the remainder with 10, and it will be the new numerator.
				if(m.end() == m.find(num)) // This numerator occurs for the first time, so we record it.
				{
					m[num] = res.size();
				}
				else // Circulation happens, so we return the result.
				{
					string temp = res.substr(0, m[num]) + "(" + res.substr(m[num], string::npos) + ")";
					res = temp;
					break;
				}
			}
		}
		return res;


    }
};
// @lc code=end

