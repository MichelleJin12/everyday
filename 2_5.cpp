/* switch �� �̿��ϱ� */

#include <iostream>

int main()
{
	int user_input;

	std::cout << "���� ������ ǥ�����ݴϴ� " << std::endl
		<< "1. �̸� " << std::endl
		<< "2. ���� " << std::endl
		<< "3. ���� " << std::endl;
	std::cin >> user_input;

	switch (user_input)
	{
	case 1:
		std::cout << "Psi ! " << std::endl;
		break;
	case 2:
		std::cout << "99 ��" << std::endl;
		break;
	case 3:
		std::cout << "����" << std::endl;
		break;
	default:
		std::cout << "�ñ��� �� ������~ " << std::endl;
		break;
	}

	return 0;
}