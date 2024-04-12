#include<string>
#include<stack>
#include"Question10lab2.h"
using namespace std;

 bool isopenbracket(char bracket)
 {
 	return bracket=='('|| bracket=='['|| bracket=='{';
 }
 
 bool isclosingbracket(char bracket)
 {
 	return bracket==')'|| bracket ==']'|| bracket== '}';
 }
 
 bool ismatchpair(char opening, char closing)
 {
 	return (opening =='('&& closing==')')|| (opening=='['&& closing==']')|| (opening=='{'&& closing=='}');
 	       
 }
 
bool isbalanced(string& exp)
{
	stack<char>brackets;
	
    for(int i=0;i<exp.length();++i )
   {
   	char bracket=exp[i];
  	if(isopenbracket(bracket))
	  {
	  	brackets.push(bracket);
	  }
	  else if(isclosingbracket(bracket))
   {
	  if(brackets.empty()||!ismatchpair(brackets.top(),bracket))
	{
		return false;
	}
	brackets.pop();
  }  
  
  
  }
  return brackets.empty();
}

   
