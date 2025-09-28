#include<iostream>
#include<string>
using namespace std;
bool isFreqSame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for (int i = 0; i < s1.length(); i++) {
            freq[s1[i] - 'a']++;
        }

        int windSize = s1.length();
        for (int i = 0; i + windSize <= s2.length(); i++) {
            int windFreq[26] = {0};
            for (int j = 0; j < windSize; j++) {
                windFreq[s2[i + j] - 'a']++;
            }
            if (isFreqSame(freq, windFreq)) {
                return true;
            }
        }
        return false;
    }

int main(){
      string s1 = "ab";
    string s2 = "eidbaooo";

    if (checkInclusion(s1, s2)) {
        cout << "Yes, \"" << s1 << "\"'s permutation is in \"" << s2 << "\"" << endl;
    } else {
        cout << "No, \"" << s1 << "\"'s permutation is not in \"" << s2 << "\"" << endl;
    }
return 0;
}