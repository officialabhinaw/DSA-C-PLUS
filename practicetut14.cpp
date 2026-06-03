#include <iostream>
using namespace std;
int main()
{
    int pps, dsa, dstl, pythan, cloud;
    int sum, totalmarks;
    float percentage;
    cout << "Enter the marks of pps =";
    cin >> pps;
    cout << "Enter the marks of dsa=";
    cin >> dsa;
    cout << "Enter the marks of dstl=";
    cin >> dstl;
    cout << "Enter the marks of python=";
    cin >> pythan;
    cout << "Enter the marks of cloud=";
    cin >> cloud;
    sum = pps + dsa + dstl + pythan + cloud;
    cout << "The total marks is =" << sum << endl;
    cout << "Total marks of paper=";
    cin >> totalmarks;
    percentage = (sum * 100) / totalmarks;
    cout << "The percentage =" << percentage << endl;

    // now per subject grade

    cout << "Percentage ka grade";
    if (percentage >= 90)
    {
        cout << "\n Greade A \n  Excellect\n";
    }
    else if (percentage >= 80)
    {
        cout << "\n Greade B \n verygood\n";
    }
    else if (percentage >= 70)
    {
        cout << "\n Greade C \n good\n";
    }
    else if (percentage >= 50)
    {
        cout << "\n Greade D \n imprvement\n ";
    }
    else if (percentage >= 33)
    {
        cout << "\n Greade E \n just pass\n ";
    }
    else
    {
        cout << "\n Greade F \n fail\n";
    }
    // subject by grade dsa

    cout << "DSA ka grade";
    if (dsa >= 90)
    {
        cout << "\n Greade A \n Excellect\n";
    }
    else if (dsa >= 80)
    {
        cout << "\n Greade B \n very good\n";
    }
    else if (dsa >= 70)
    {
        cout << "\n Greade C \n good\n";
    }
    else if (dsa >= 50)
    {
        cout << "\n Greade D \n imprvement\n ";
    }
    else if (dsa >= 33)
    {
        cout << "\n Greade E \n just pass \n";
    }
    else
    {
        cout << "\n Greade F \n fail\n";
    }
    // subject by grade pps

    cout << "pps ka grade";
    if (pps >= 90)
    {
        cout << "\n Greade A \n Excellect\n";
    }
    else if (pps >= 80)
    {
        cout << "\n Greade B \n verygood\n";
    }
    else if (pps >= 70)
    {
        cout << "\n Greade C \n good\n";
    }
    else if (pps >= 50)
    {
        cout << "\n Greade D \n imprvement \n";
    }
    else if (pps >= 33)
    {
        cout << "\n Greade E \n just pass\n ";
    }
    else
    {
        cout << "\n  Greade F \n fail\n";
    }
    // subject by grade dstl

    cout << "DSTL  ka grade";
    if (dstl >= 90)
    {
        cout << "\n  Greade A \n Excellect\n";
    }
    else if (dstl >= 80)
    {
        cout << "\n Greade B \n verygood\n";
    }
    else if (dstl >= 70)
    {
        cout << "\n  Greade C \n good\n";
    }
    else if (dstl >= 50)
    {
        cout << "\n Greade D \n imprvement \n";
    }
    else if (dstl >= 33)
    {
        cout << "\n  Greade E \n just pass \n";
    }
    else
    {
        cout << "\n  Greade F \n fail\n";
    }
    // subject by grade pythan

    cout << "pythan ka grade";
    if (pythan >= 90)
    {
        cout << "\n Greade A \n Excellect\n";
    }
    else if (pythan >= 80)
    {
        cout << "\n  Greade B \n verygood\n";
    }
    else if (pythan >= 70)
    {
        cout << "\n Greade C \n good\n";
    }
    else if (pythan >= 50)
    {
        cout << "\n  Greade D \n imprvement\n ";
    }
    else if (pythan >= 33)
    {
        cout << "\n  Greade E \n just pass\n ";
    }
    else
    {
        cout << "\nGreade F \n fail\n";
    }
    // subject by grade cloud

    cout << " cloud ka practgrade";
    if (cloud >= 90)
    {
        cout << "\n Greade A \n Excellect\n";
    }
    else if (cloud >= 80)
    {
        cout << "\n  Greade B \n verygood\n";
    }
    else if (cloud >= 70)
    {
        cout << "\n  Greade C \n good\n";
    }
    else if (cloud >= 50)
    {
        cout << "\n  Greade D \n imprvement\n ";
    }
    else if (cloud >= 33)
    {
        cout << "\n  Greade E \n just pass\n ";
    }
    else
    {
        cout << "\n  Greade F \n fail\n";
    }

    return 0;
}