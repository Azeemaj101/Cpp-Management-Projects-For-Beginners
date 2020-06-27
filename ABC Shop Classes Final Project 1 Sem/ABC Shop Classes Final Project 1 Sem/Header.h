//_____________________CLASSES____________________//
//_____________________START______________________//
class Token
{
private:
    int TokenNo;
    char CounterID[120];
    int Date;
    int month;
    int Year;
public:
    Token();
    void getTokenData();
    int storeToken();
    void showTokenData();
    void ViewAllToken();
    void searchRecordToken(char*);
    void deleteRecordToken(char*);
    void updateRecordToken(char*);
};
class Expenses
{
private:
    char ID[120];
    int Utility;
    int month;
    int Year;
public:
    Expenses();
    void getExpensesData();
    int storeExpenses();
    void showExpensesData();
    void ViewAllExpenses();
    void searchRecordExpenses(char*);
    void deleteRecordExpenses(char*);
    void updateRecordExpenses(char*);
};
                         //_____________________END_______________________//