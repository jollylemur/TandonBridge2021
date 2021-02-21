#include <iostream>
using namespace std;


void printPineTree(int n, char symbol);
//Based on userTriangles = n, determines the number of rows in each triangle
//and the number of spaces in the margin for each triangle
//Calls printShiftedTriangle 

void printShiftedTriangle(int n, int m, char symbol);
//Based on the input from printPineTree, creates each triangle in the pine tree


int main() {

	int userTriangles;
	char userCharacter;

	cout << "Please enter the desired number of triangles: ";
	cin >> userTriangles;
	cout << "Please enter a character to fill the tree: ";
	cin >> userCharacter;

    printPineTree(userTriangles, userCharacter);

    return 0;
}


void printPineTree(int n, char symbol) {
    for (int currentTriangle = 1, triangleCount = n; currentTriangle <= n; currentTriangle++, triangleCount--) {
        int triangleSize = currentTriangle + 1;                                                                         //Determines the number of rows in the triangle
        int triangleMargin = triangleCount - 1;                                                                         //Determines the number of spaces in the margin per triangle
        printShiftedTriangle(triangleSize, triangleMargin, symbol);
    }
}

void printShiftedTriangle(int n, int m, char symbol) {
    for (int triangleRow = 1; triangleRow <= n; triangleRow++) {
        
        //Creates the requiredmargin for each triangle
        for (int marginSpace = 0; marginSpace < m; marginSpace++) {
            cout << " ";
        }

        //Creates the triangle spaces per row
        for (int triangleSpace = (n - triangleRow); triangleSpace > 0; triangleSpace--) {
            cout << " ";
        }

        //Writes the character based on row number
        for (int triangleCharacter = 0; triangleCharacter <= (2 * (triangleRow - 1)); triangleCharacter++) {
            cout << symbol;
        }
        cout << endl;
    }
}