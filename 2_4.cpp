/* if- else �� ����ϱ�
����� ���� ���߱�*/

#include <iostream>

int main()
{
	int lucky_number = 3;
	std::cout << "�� ��� ���� ���߾� ������~" << std::endl;

	int user_input; //����� �Է�

	while (1)
	{
		std::cout << "�Է� : ";
		std::cin >> user_input;
		if (lucky_number == user_input)
		{
			std::cout << "���߼̽��ϴ�~~" << std::endl;
			break;
		}
		else
		{
			std::cout << "�ٽ� �����غ�����~" << std::endl;
		}
	}

	return 0;
}