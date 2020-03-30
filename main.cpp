#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	cout << std::fixed << setprecision(2);
	cout << "Which file(s) to open?\n";
	cout << "1. lego1.csv" << endl;
	cout << "2. lego2.csv" << endl;
	cout << "3. lego3.csv" << endl;
	cout << "4. All 3 files" << endl;
	int option;
	cin >> option;

   /*======= Load data from file(s) =======*/
	ifstream file[3];
	if (option == 1) {
		file[0].open("lego1.csv");
	}
	else if (option == 2) {
		file[0].open("lego2.csv");
	}
	else if (option == 3) {
		file[0].open("lego3.csv");
	}
	else if (option == 4) {
		file[0].open("lego1.csv");
		file[1].open("lego2.csv");
		file[2].open("lego3.csv");
	}
   
   cout << "1. Most Expensive set" << endl;
	cout << "2. Largest piece count" << endl;
	cout << "3. Search for set name containing..." << endl;
	cout << "4. Search themes..." << endl;
	cout << "5. Part count information" << endl;
	cout << "6. Price information" << endl;
	cout << "7. Minifigure information" << endl;
	cout << "8. If you bought one of everything..." << endl;
	cout << "0. Exit" << endl;
   
	int choice;
	cin >> choice;
   cin.get();  // Clear newline character for any later input
   
   /*======= Print out how many sets were loaded =======*/
   int loadedSets = 0;
   int fileSets[3];
   fileSets[0] = -1;
   fileSets[1] = -1;
   fileSets[2] = -1;
   //Ignore First Line in File (Used Only for Formatting)
   if (option == 4) {
	   loadedSets = -3;
   }
   else {
	   loadedSets = -1;
   }
   string set;
   for (int i = 0; i < 3; i++) {
	   //Count Number of Sets
	   while (getline(file[i], set)) {
		   loadedSets++;
		   fileSets[i]++;
	   }
   }
   cout << "Total number of sets: " << loadedSets << endl;
   //Get Data From Sets
   string sets[loadedSets][6];
   for (int i = 0; i < 3; i++) {
	   while (getline(file[i], set)) {
	   }
   }
   /*======= Based on the choice, execute the appropriate task and show the results =======*/
   switch(choice) {
	case 1:
		   break;
	case 2:
		   break;
	case 3:
		   break;
	case 4:
		   break;
	case 5:
		   break;
	case 6:
		   break;
	case 7:
		   break;
	case 8:
		   break;
	default:
		   break;
   }
	return 0;
}
