class Solution {
private:
    string ones[10] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[10] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[10] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string thousands[4] = {"", "Thousand", "Million", "Billion"};
    
    string helper(int num) {
        string result = "";
        if (num >= 100) {
            result += ones[num / 100] + " Hundred";
            num %= 100;
            if (num > 0) result += " ";
        }
        if (num >= 20) {
            result += tens[num / 10];
            if (num % 10) result += " " + ones[num % 10];
        } else if (num > 0) {
            result += (num < 10) ? ones[num] : teens[num - 10];
        }
        return result;
    }
public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";
        vector<string> parts;
        int groupIndex = 0;
        while (num > 0) {
            if (num % 1000) {
                string part = helper(num % 1000);
                if (groupIndex > 0) part += " " + thousands[groupIndex];
                parts.push_back(part);
            }
            num /= 1000;
            groupIndex++;
        }
        reverse(parts.begin(), parts.end());
        string result = "";
        for (int i = 0; i < parts.size(); i++) {
            if (i > 0) result += " ";
            result += parts[i];
        }
        return result;
    }
};