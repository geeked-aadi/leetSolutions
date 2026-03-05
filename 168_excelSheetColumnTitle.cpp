/* let's convert the number 2002 to the letters BXZ by representing it as a number 
in base 26. Note that each part will have an extra 1 added to compensate for the 
fact that we are starting from 1 in our system
Algorithm
1.Initialize an empty string ans which would store the column title.

2.Do the following as long as columnNumber is greater than 0:

3.Subtract 1 from the columnNumber

4.Find the character corresponding to columnNumber % 26 and append it to 
the ans in the end.

5.Assign columnNumber to columnNumber / 26.

6.Reverse the string columnNumber and return it.
*/ 
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;

        while (columnNumber) {
            columnNumber--;
            // Get the last character and append it at the end of string.
            ans = ans + (char)((columnNumber) % 26 + 'A');
            columnNumber = (columnNumber) / 26;
        }

        // Reverse it, as we appended characters in reverse order.
        reverse(ans.begin(), ans.end());
        return ans;
    }
};