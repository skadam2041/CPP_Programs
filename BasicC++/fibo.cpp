#include <bits/stdc++.h>
using namespace std;

string reverseStringWordWise(string input)
{
    string ans = "";
	int siz = input.length();
	int i = siz-1, j = siz-1;
	while(i>0){
		if(input[i]==' ')
		{
			string word = input.substr(i+1,j-i);
			ans = ans + word + " ";
			j = i - 1;
		}
		i--;
	}
	string word = input.substr(i,j-i+1);
	ans = ans + word;
	return ans;
}

int main()
{
    string s;
//     cin >> s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}