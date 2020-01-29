#include <iostream>
#define STACK_SIZE 10000

int stack_top = -1;
void push(int stack[]);
void pop(int stack[]);

int main()
{
	int stack[STACK_SIZE] = { 0 };
	std::string com;
	int a;
	std::cin >> a;
	while (a--)
	{
		std::cin >> com;
		if (com == "push") push(stack);
		else if (com == "top") 
		{
			if (stack_top == -1) std::cout << -1 << std::endl;
			else 
			{
				std::cout << stack[stack_top] << std::endl;
			}
		}
		else if (com == "size") std::cout << stack_top+1 << std::endl;
		else if (com == "empty")
		{
			if (stack_top == -1) {
				std::cout << 1 << std::endl;
			}
			else {
				std::cout << 0 << std::endl;
			}
		}
		else if (com == "pop") pop(stack);
		else std::cout << "error" << std::endl;
	}

	return 0;
}

void push(int stack[])
{
	int temp;
	std::cin >> temp;
	stack[++stack_top] = temp;
	
	if (stack_top >= STACK_SIZE)
	{
		std::cout << "STACK IS FULL" << std::endl;
	}
}

void pop(int stack[])
{
	if (stack_top == -1) std::cout << -1 << std::endl;
	else {
		std::cout << stack[stack_top--] << std::endl;
	}
}
