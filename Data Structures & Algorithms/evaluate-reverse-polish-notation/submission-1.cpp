class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        for(string c : tokens){
            if(c == "+"){
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                int d = a + b;
                stack.push(d);
                continue;
            }
            if(c == "-"){
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                int d = b-a;
                stack.push(d);
                continue;
            }
            if(c == "*"){
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                int d = a * b;
                stack.push(d);
                continue;
            }
            if(c == "/"){
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                int d = b/a;
                stack.push(d);
                continue;
            }
            stack.push(stoi(c));
        }
        return stack.top();
    }
};
