/*
5.15(178)
Modifique o programa GradeBook das figuras 5.9-Figura 5.11 para que ele calcule a media de notas
baseada em pontos para o conjunto de notas. Uma nota A vale 4 pontos, B vale 3 pontos, etc.

*/

using namespace std;

#include <C:\Users\lbystronski\Downloads\GRADEBOOK.H>

int main()
{

  GradeBook myGradeBook( "CS101 C++ Programming" );

  myGradeBook.displayMessage();
  myGradeBook.inputGrades();
  myGradeBook.displayGradeReport();

   return 0;
}

