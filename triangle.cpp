/* Draw A Triangle
 * Date: 01/17/2020
 * triangle.cpp
 */

#include <iostream>
#include <cmath>
using namespace std;

//Parameters:
//  int &height: it takes the valid height from the user and stores it to the 
//  variable.
//  char &character: if the user inputs the valid height then it takes the 
//  triangle building character block, which stores in the main variable 
//  character
//if the get_input is false then the function won't draw the triangle
//returns true or false
bool get_input(int &height, char &character);

//Parameters:
//  int hieght = so it can draw to its height
//  char character = its the building block of the traingle
//draws the triangle
void draw_triangle(int height, char character);

int main()
{
    //variables
    int height = 0;
    char character = '0';
    char drawAgain;

    do
    {
        //if the get_input is true then it will draw the traingle
        if(get_input(height, character))
            draw_triangle(height, character);//draws the traingle
        else
            cout <<"Sorry we can't draw the traingle, because of invalid height\n";
        
        cout <<"\nDo you still wish to draw a triangle? [y]es or [q]uit: ";
        cin >> drawAgain;//asks the user if they want to draw the triangle again or not
        cout << endl;

    } while(drawAgain == 'y' || drawAgain == 'Y');//if user wants to draw the triangle again then it will draw again

    return 0;
}

/*----------------------------------------------------------------------------
 *                          Func Definition
 *                          ---------------                                 */

bool get_input(int &height, char &character)
{   
    //takes the hieght of the traingle from the user
    cout <<"Please enter the height of the traingle: ";
    cin >> height;
    cout << endl;
    
    if(height > 0)
    {
        //if the height is valid then takes the character for the triangle to draw
        cout <<"Please enter a character for your triangle: ";
        cin >> character;
        cout << endl;
        return true;
    }
    else 
        return false;
}

void draw_triangle(int height, char character)
{
    //variables
    int space = height - 1;
    int rowCount = (height*2)-1;
    int ttlCharCount = (height*2);
        
    for(int i = 0; i < height; i++)
    {
        //creates the spaces for triangle
        for(int i = 0; i < space; i++)
            cout <<" ";
        space--;
        
        //draws the traingle with the character
        if((ttlCharCount - rowCount) <= (ttlCharCount - 1))
        {
            for(int i = 0; i < (ttlCharCount - rowCount); i++)
                cout << character;
            
            cout << endl;
            rowCount-=2;
        }
    }
    return;
}
