#include <iostream>
/*#include<string>*/
using namespace std;

#include <C:\Users\lbystronski\Downloads\GRADEBOOK.H>


GradeBook::GradeBook( string name )
{
  setCourseName( name );
  aCount = 0;
  bCount = 0;
  cCount = 0;
  dCount = 0;
  fCount = 0;
}

void GradeBook::setCourseName( string name )
{
  if( name.length() <= 25 )
    courseName = name;
  else
  {
     courseName = name.substr( 0, 25);
     cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
       << "LImiting courseName to first 25 characters.\n" << endl;
   }
}

string GradeBook::getCourseName()
{
  return courseName;
}

void GradeBook::displayMessage()
{


  cout << "Welcome to the grade book for\n"
    << getCourseName() << "!\n" << endl;
}

void GradeBook::inputGrades()
{
  int grade;

  cout << "Enter the letter grades."
    << "Enter th EOF character to end input." << endl;


  while ( ( grade = cin.get() ) != 'EOF' )
   {

      switch( grade )
      {
        case 'A':
        case 'a':
          aCount++;
          break;
        case 'B':
        case 'b':
          bCount++;
          break;
        case 'C':
        case 'c':
          cCount++;
          break;
        case 'D':
        case 'd':
          dCount++;
          break;
        case 'F':
        case 'f':
          fCount++;
          break;
        case '\n':
        case '\t':
        case ' ':
          break;
        default:
          cout << "Incorrect letter grade entered."
              << " Enter a new grade." << endl;
      }
    }
}
void GradeBook::displayGradeReport()
{
  cout << "\n\nNumber of students who received each letter grade:"
    << "\nA: " << aCount
    << "\nB: " << bCount
    << "\nC: " << cCount
    << "\nD: " << dCount
    << "\nF: " << fCount
      << endl;

   cout << "Media de notas baseada em pontos: " << (aCount*4+bCount*3+cCount*2+dCount*1+fCount*0)/(aCount+bCount+cCount+dCount+fCount);
}
