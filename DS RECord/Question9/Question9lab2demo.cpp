#include"Question9lab2.cpp"
#include<iostream>
#include<string>

int main()
{
	PostfixEvaluator evaluator;
	string exp;
	
	cout<<"Enter a Postfix Expression:";
	getline(cin,exp);
	cout<<"Postfix evaluation:"<<evaluator.evaluatePostfix(exp)<<endl;
	return 0;
}










