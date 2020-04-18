#include <fstream>
#include <iostream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("1.board");

  // Write to the file
  MyFile << "0,1,0,0,0,0,\n0,1,0,0,0,0,\n0,1,0,0,0,0,\n0,1,0,0,0,0,\n0,0,0,0,1,0,";

  // Close the file
  getchar();
  MyFile.close();
  getchar();
}
