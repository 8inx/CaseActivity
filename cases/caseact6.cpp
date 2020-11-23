#include<iostream>
#include<string>
#include<limits>
#include<stdlib.h>
using namespace std;
int main()
{
    float g = 0;
    string value ="";
    string remarks="";
    char repeat = 'Y';
    do
    {
        cout << "\n Input Grade in Percentage (%)\t: " ;
        cin >> g;
        if(g >= 50 && g <= 100)
        {
            if (g >= 97 && g <= 100)
            {
                remarks = "Excellent" ;
                value = "1.00";
            }
            else if (g >= 94 && g <= 96)
            {
                remarks = "Very Good" ;
                value = "1.25";
            }
            else if (g >= 91 && g <= 93)
            {
                remarks = "Very Good" ;
                value = "1.50";
            }
            else if (g >= 88 && g <= 90)
            {
                remarks = "Good" ;
                value = "1.75";
            }
            else if (g >= 85 && g <= 87)
            {
                remarks = "Good" ;
                value = "2.00";
            }
            else if (g >= 83 && g <= 84)
            {
                remarks = "Fair" ;
                value = "2.25";
            }
            else if (g >= 80 && g <= 82)
            {
                remarks = "Fair" ;
                value = "2.50";
            }
            else if (g >= 78 && g <= 79)
            {
                remarks = "Passed" ;
                value = "2.75";
            }
            else if (g >= 75 && g <= 77)
            {
                remarks = "Passed" ;
                value = "3.00";
            }
            else if (g >= 70 && g <= 74)
            {
                remarks = "Conditional" ;
                value = "4.00";
            }
            else
            {
                remarks = "Failed" ;
                value = "5.00";
            }

            //system( "clear||cls" );
            //cout << "\n Input Grade in Percentage (%)\t: " << g << "\n\n";
            cout << "\n";
            cout << " Equivalent Numerical Grade\t: " << value << "\n\n";
            cout << " Remarks \t\t\t: " << remarks << "\n\n";
            cout << " Input another grade? [Y/N]: " ;
            cin >> repeat;
            cout << "\n__________________________________________________\n";
            //system( "clear||cls" );
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n ERROR! Invalid input grade.\n" ;
            cout << "\n__________________________________________________\n";
        }
    }while(repeat == 'y' || repeat == 'Y' );
    return 0;
}