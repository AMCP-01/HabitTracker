//Simple Habit Tracker
#include <iostream>
using namespace std;
struct MarkingsOfHobbies {
	bool hobbiesMarked[5] = { false, false, false, false, false };
	string habit[5] = { "Empty", "Empty", "Empty", "Empty", "Empty" };
};
void HabitThatCounts(MarkingsOfHobbies& thyHobbiees) {
	int habitCounter;

	for (habitCounter = 0; habitCounter < 5; habitCounter++)
	{
		if (thyHobbiees.hobbiesMarked[habitCounter] == false)
		{
			cout << habitCounter + 1 << ". " << thyHobbiees.habit[habitCounter] << " Not Done" << endl;
		}
		else
		{
			cout << habitCounter + 1 << ". " << thyHobbiees.habit[habitCounter] << " Done" << endl;
		}

	}
}
int main()
{
	int choice, hobbyEdit, hobbyMarking;
	MarkingsOfHobbies habitualActions;
	do
	{
		cout << "1. View" << endl << "2. Edit" << endl << "3. Tracking" << endl << "0. Exit" << endl << "Decision: ";
		cin >> choice;

		if (1 == choice)
		{

			do
			{
				cout << endl << "Here is the list of all your Hobbies" << endl;
				HabitThatCounts(habitualActions);
				system("pause");
				system("cls");
				break;
			} while (true);

		}
		else if (2 == choice)
		{
			do
			{
				HabitThatCounts(habitualActions);
				cout << endl << "Please select the habit you wish to edit: ";
				cin >> hobbyEdit;
				cout << endl << "What would you like to put instead? Please write it down: ";
				cin >> habitualActions.habit[hobbyEdit - 1];
				cout << endl << "Change Successful!" << endl;
				system("pause");
				system("cls");
				break;

			} while (true);
		}
		else if (3 == choice)
		{
			do
			{
				HabitThatCounts(habitualActions);
				cout << endl << "Please select the habit you wish to mark as done: ";
				cin >> hobbyMarking;

				habitualActions.hobbiesMarked[hobbyMarking - 1] = true;
				cout << endl << "Marking Done";
				system("pause");
				system("cls");
				break;

			} while (true);
		}
		else if (0 == choice)
		{
			break;
		}

		else
		{
			cout << endl << "Invalid Choice" << endl;
		}

	} while (true);
	return 0;
}
