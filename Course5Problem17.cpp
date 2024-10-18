#include <iostream>

using namespace std;

string ReadPassword()
{

	string Password ="";

	cout << "Enter a password of 3 capital letters to guess\n";

	cin >> Password;

	return Password;
}

bool  GeneratePassword(string Password)
{

	string Letters = "";
	int Counter = 0;

	for (int i = 65; i <= 90; i++)
	{

		for (int j = 65; j <= 90; j++)
		{

			for (int k = 65; k <= 90; k++)
			{
				Counter++;

					Letters = char(i);
					Letters += char(j);
					Letters += char(k);

					cout << "Trial {" << Counter << "} " << Letters << "\n";

					if (Letters == Password)
					{
						cout << "Pssword " << Password << "\n";
						cout << "Found at trial " << Counter;
						return true;
					}

					Letters = "";

			}


		}

	}

	return false;
}



int main()
{

	GeneratePassword(ReadPassword());

}
