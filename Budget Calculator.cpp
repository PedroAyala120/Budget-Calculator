//This program will hold different monthly expenses in a structure and calculate if the user went over budget
//Pedro Ayala
#include <iostream>

using namespace std;

struct MonthlyBudget    //struct of budget data
{
    int Housing	= 500;
    int Utilities = 150;
    int HouseholdExpenses = 65;
    int Transportation = 50;
    int Food = 250;
    int Medical	= 30;
    int Insurance = 100;
    int Entertainment = 150;
    int Clothing = 75;
    int Miscellaneous = 50;
};

struct MonthlySpending  //struct to save user input
{
    int Housing;
    int Utilities;
    int HouseholdExpenses;
    int Transportation;
    int Food;
    int Medical;
    int Insurance;
    int Entertainment;
    int Clothing;
    int Miscellaneous;
};

//Initialize Functions
void UserInput(MonthlySpending& spending);
void Calculate(const MonthlyBudget& budget, const MonthlySpending& spending);

int main()
{
    MonthlySpending spending;

    UserInput(spending);
    Calculate(MonthlyBudget(), spending); // pass default constructed MonthlyBudget object since it has no user input


    return 0;
}

//////////////////////////////////////////////
///////   Function For User Input    ////////
////////////////////////////////////////////
void UserInput(MonthlySpending& spending)
{

    cout << "Enter how much you spent on housing: ";
    cin >> spending.Housing;
    cout << "Enter how much you spent on Utilities: ";
    cin >> spending.Utilities;
    cout << "Enter how much you spent on Household Expenses: ";
    cin >> spending.HouseholdExpenses;
    cout << "Enter how much you spent on Transportation: ";
    cin >> spending.Transportation;
    cout << "Enter how much you spent on Food: ";
    cin >> spending.Food;
    cout << "Enter how much you spent on Medical: ";
    cin >> spending.Medical;
    cout << "Enter how much you spent on Insurance: ";
    cin >> spending.Insurance;
    cout << "Enter how much you spent on Entertainment: ";
    cin >> spending.Entertainment;
    cout << "Enter how much you spent on Clothing: ";
    cin >> spending.Clothing;
    cout << "Enter how much you spent on Miscellaneous: ";
    cin >> spending.Miscellaneous;

}

/////////////////////////////////////////////////
////  function to calculate monthly budget  ////
///////////////////////////////////////////////
void Calculate(const MonthlyBudget& budget, const MonthlySpending& spending)
{

    //calculate total spending
    int totalSpending = spending.Housing + spending.Utilities +
                        spending.HouseholdExpenses + spending.Transportation +
                        spending.Food + spending.Medical + spending.Insurance +
                        spending.Entertainment + spending.Clothing + spending.Miscellaneous;

    //calculate difference between budget and spending
    int difference = budget.Housing + budget.Utilities +
                     budget.HouseholdExpenses + budget.Transportation +
                     budget.Food + budget.Medical + budget.Insurance +
                     budget.Entertainment + budget.Clothing + budget.Miscellaneous - totalSpending;

    //output results
    cout << "Your total spending for this month was $" << totalSpending << endl;
    if (difference >= 0)
    {
        cout << "Congratulations! You were under budget by $" << difference << endl;
    }
    else
    {
        cout << "Sorry, you went over budget by $" << -difference << endl;
    }
}

