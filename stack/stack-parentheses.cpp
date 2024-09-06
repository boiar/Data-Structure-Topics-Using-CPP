#include <iostream>
#include <stack>
#include <string

bool isBalanced(const std::string &expression) {
    std::stack<char> s;
    
    for (char ch : expression) {
        // If the character is an opening bracket, push it to the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        // If the character is a closing bracket, check if it matches the top of the stack
        else if (ch == ')' || ch == '}' || ch == ']') {
            // If the stack is empty, it's unbalanced
            if (s.empty()) {
                return false;
            }
            char top = s.top();
            s.pop();
            // Check if the top element matches the closing bracket
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    
    // If the stack is empty, all opening brackets had matching closing brackets
    return s.empty();
}


int main(){
    std::string expression;
    std::cout << "Enter an expression: ";
    std::cin >> expression;
    
    if (isBalanced(expression)) {
        std::cout << "The expression is balanced.\n";
    } else {
        std::cout << "The expression is not balanced.\n";
    }

    return 0;

}

