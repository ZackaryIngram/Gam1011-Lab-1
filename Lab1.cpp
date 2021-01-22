#include <iostream>
#include <string>

using namespace std;

class Platform
{
private:
	string platName, manu;
	string games[5] = { "Call of Duty", "Dead by Daylight", "Skyrim", "Minecraft", "Roblox" }; //Array for games
	string* ptrGames; // Pointer for games array

public:
	//setter
	void setGames(string g)
	{
		games[5] = g;
	}
	void setPlatName(string p)
	{
		platName = p;
	}

	//acessor
	string getPlatName()
	{
		return platName;
	}
	string getGames()
	{
		return games[5];
	}
	
};

class Game
{
private:
	string gameName, publisher, developer;
	int achievements[200]; //Array for achievements
	int* ptrAchievements;  // Pointer for achievements array
	
public:

	//setter
	void setGameName(string gn)
	{
		gameName = gn;
	}
	void setPublisher(string pub)
	{
		publisher = pub;
	}
	void setDeveloper(string dev)
	{
		developer = dev;
	}
	
	
	//acessor
	string getGameName()
	{
		return gameName;
	}
	string getPublisher()
	{
		return publisher;
	}
	string getDeveloper()
	{
		return developer;
	}
};

class Achievement
{
private:
	string title, description;
	int scoreValue;
public:
	//setter
	void setTitle(string t)
	{
		title = t;
	}
	void setScoreValue(int sv)
	{
		scoreValue = sv;
	}
	void setDescription(string d)
	{
		description = d;
	}
	//acessor
	string getTitle()
	{
		cin >> title; //Gets title from user
		return title;
	}
	int getScoreValue()
	{
		cin >> scoreValue;//Gets score value from user
		return scoreValue;
	}
	string getDescription()
	{
		cin >> description;//Gets description from user
		return description;
	}
	string printTitle() //Prints Achievement title
	{
		cout << title;
		return title;
	}
	int printScoreValue() // Prints Achievement score
	{
		cout << scoreValue;
		return scoreValue;
	}
	string printDescription() // Print Achievement description
	{
		cout << description;
		return description;
	}
};

int main()
{
	Achievement titleObj,scoreObj, descObj; //All Achievement objects
	titleObj.setTitle(" ");
	scoreObj.setScoreValue(0);
	descObj.setDescription(" ");

	Platform gameObj, manuObj, platObj;//All Platform objects

	Game nameObj, devObj, pubObj;//All Game objects

	char retry = 'y'; //restart
	int choice; //choice of console 1-3
	int game; // choice of game 1-5
	
	while (retry == 'y' || retry == 'Y')
	{

		cout << "1) Xbox " << endl << "2) Play Station " << endl << "3) PC " << endl;
		cout << "Enter your platform: " << endl;
		cin >> choice;

		if (choice == 1)
		{
			cout << "You are an Xbox player !" << endl;
			cout << "Now choose which game you would like to enter an achievement for: " << endl;
			cout << "1) COD " << endl << "2) Dead by Daylight " << endl << "3) Skyrim " << endl << "4) Minecraft " << endl <<  "5) Roblox" << endl;
			cin >> game;

			if (game == 1)
			{
				cout << "Game: COD " << endl;
			}
			else if (game == 2)
			{
				cout << "Game: Dead by Daylight " << endl;
			}
			else if (game == 3)
			{
				cout << "Game: Skyrim " << endl;
			}
			else if (game == 4)
			{
				cout << "Game: Minecraft " << endl;
			}
			else if (game == 5)
			{
				cout << "Game: Roblox " << endl;
			}
			else
			{
				cout << "Error! Enter a game between from the choice above !" << endl;
			}

		}
		else if (choice == 2)
		{
			cout << "You are a Play Station player !" << endl;
			cout << "Now choose which game you would like to enter an achievement for: " << endl;
			cout << "1) COD " << endl << "2) Dead by Daylight " << endl << "3) Skyrim " << endl << "4) Minecraft " << endl <<  "5) Roblox" << endl;
			cin >> game;

			if (game == 1)
			{
				cout << "Game: COD " << endl;
			}
			else if (game == 2)
			{
				cout << "Game: Dead by Daylight " << endl;
			}
			else if (game == 3)
			{
				cout << "Game: Skyrim " << endl;
			}
			else if (game == 4)
			{
				cout << "Game: Minecraft " << endl;
			}
			else if (game == 5)
			{
				cout << "Game: Roblox " << endl;
			}
			else
			{
				cout << "Error! Enter a game between from the choice above !" << endl;
			}


		}
		else if (choice == 3)
		{
			cout << "You are a PC player !" << endl;
			cout << "Now choose which game you would like to enter an achievement for: " << endl;
			cout << "1) COD " << endl << "2) Dead by Daylight " << endl << "3) Skyrim " << endl << "4) Minecraft " << endl << "5) Roblox" << endl;
			cin >> game;

			if (game == 1)
			{
				cout << "Game: COD " << endl;
			}
			else if (game == 2)
			{
				cout << "Game: Dead by Daylight " << endl;
			}
			else if (game == 3)
			{
				cout << "Game: Skyrim " << endl;
			}
			else if (game == 4)
			{
				cout << "Game: Minecraft " << endl;
			}
			else if (game == 5)
			{
				cout << "Game: Roblox " << endl;
			}
			else
			{
				cout << "Error! Enter a game between from the choice above !" << endl;
			}
			  
		}
		else
		{
			cout << "Invalid option, please choose between 1-3" << endl;

		}

		cout << "Enter achievement title " << endl;
		titleObj.getTitle(); //no spaces
		
		cout << "Enter the achievement score " << endl;
		scoreObj.getScoreValue(); //must enter an integer
	
		cout << "Enter achievement description ! " << endl;
		descObj.getDescription(); //no spaces
		
		//Final prints for user achievement data 
		cout << "Achievement: " << titleObj.printTitle() << endl;
		cout << "Achievement Score: " << scoreObj.printScoreValue() << endl;
		cout << "Achievement Description: " << descObj.printDescription() << endl;

		cout << "Would you like to continue ? Enter Y to continue" << endl;
		cin >> retry; //If user enters y, the program goes back to the top of the loop
	}
	

	return 0;
}