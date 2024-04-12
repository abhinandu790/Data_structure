#include"Question9lab2.h"
int PostfixEvaluator::evaluatePostfix(string exp)
{
	stack<int> sd;
	
	for(int i=0;i<exp.size();++i)
	    if(isdigit(exp[i]))
	        sd.push(exp[i]-'0');
		else
		{
			int value1=sd.top();
			sd.pop();
			int value2=sd.top();
			sd.pop();
			switch(exp[i])
			{
				case '+':
					sd.push(value2+value1);
					break;
			    case '-':
			    	sd.push(value2-value1);
			    	break;
			    	case '*':
			    		sd.push(value2*value1);
			    		break;
			    	case '/':
			    		sd.push(value2/value1);
			    		break;
			    		
			}
		 } 
		 
		 return sd.top();
	
 } 

