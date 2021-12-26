#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int totalPages;
    int read_inOneDay;
    int total_daysRead;
    int remaingPages;
    cout << "\t\tPlz Enter the Details" << endl;
    cout << "What is the Total pages of Book?:";
    cin >> totalPages;
    cout << "How much pages you read in one Day?:";
    cin >> read_inOneDay;
    cout << "How much Days did you read the Book?:";
    cin >> total_daysRead;
    //To calculate Remaing Pages
    remaingPages = totalPages - read_inOneDay * total_daysRead;
    cout << "You have read " << read_inOneDay * total_daysRead << "pages of the Book Out of " << totalPages << endl;
    cout <<  remaingPages << " pages of your book remain to be read Out of " << totalPages;
    return 0;
    //Two hundred pages of your book remain to be read.
    //You have read two hundred pages of the book.
}
