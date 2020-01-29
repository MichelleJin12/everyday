#include <iostream>

int main()
{
	int a; int ans = 0;
	std::cin >> a;
	while (a--)
	{
		int b;
		std::cin >> b;
		for (int l1 = 1; l1 <= 3; l1++)
		{
			if (l1 == b) ans++;
			for (int l2 = 1; l2 <= 3; l2++)
			{
				if (l2 == b) ans++;
				for (int l3 = 1; l3 <= 3; l3++)
				{
					if (l3 == b) ans++;
					for (int l4 = 1; l4 <= 3; l4++)
					{
						if (l4 == b) ans++;
						for (int l5 = 1; l5 <= 3; l5++)
						{
							if (l5 == b) ans++;
							for (int l6 = 1; l6 <= 3; l6++)
							{
								if (l6 == b) ans++;
								for (int l7 = 1; l7 <= 3; l7++)
								{
									if (l7 == b) ans++;
									for (int l8 = 1; l8 <= 3; l8++)
									{
										if (l8 == b) ans++;
										for (int l9 = 1; l9 <= 3; l9++)
										{
											if (l9 == b) ans++;
											for (int l0 = 1; l0 <= 3; l0++)
											{
												if (l0 == b)ans++;
											}
										}
									}
								}
							}

						}
					}
				}
			}

		}
		std::cout << ans << std::endl;
	}

	return 0;
}