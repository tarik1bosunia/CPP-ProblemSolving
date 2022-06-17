#include<iostream>
#include <stack>
#include <string>
   
using namespace std;


int prec(char c)
{
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	
	return -1;
}

void infixToPostfix(string s){
    stack<char> stk;
    string result;

	for(int i = 0; i< s.length(); i++){
		char c = s[i];

		if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z')||(c >= '0' && c <= '9')){
			result = result + c;
		}else if(c == '('){
			stk.push(c);
		}else if(c == ')'){
			while (stk.top() != '('){
				result = result + stk.top();
				stk.pop();
			}
			stk.pop();
		}	
		else {
			while (!stk.empty() && prec(s[i]) <= prec(stk.top())) {
				if (c == '^' && stk.top() == '^')
					break;
				else {
					result += stk.top();
					stk.pop();
				}
			}
			stk.push(c);
		}
	}
	while (!stk.empty()) {
		result += stk.top();
		stk.pop();
	}
	cout << "result: " << result << endl;
	cout << "stk: ";
	while(!stk.empty()){
		cout << stk.top() << " ";
		stk.pop();
	}
}

int main()
{
    string exp = "10+b/11*13/10";
	infixToPostfix(exp);
	return 0;
}