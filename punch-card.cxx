#include <iostream>
#include <vector>
#include <map>

using namespace std;

//            {b,b,0,1,2,3,4,5,6,7,8,9}
map<char, vector<int>> rows = {
	{'A', {1,0,0,1,0,0,0,0,0,0,0,0}},
	{'B', {1,0,0,0,1,0,0,0,0,0,0,0}},
	{'C', {1,0,0,0,0,1,0,0,0,0,0,0}},
	{'D', {1,0,0,0,0,0,1,0,0,0,0,0}},
	{'E', {1,0,0,0,0,0,0,1,0,0,0,0}},
	{'F', {1,0,0,0,0,0,0,0,1,0,0,0}},
	{'G', {1,0,0,0,0,0,0,0,0,1,0,0}},
	{'H', {1,0,0,0,0,0,0,0,0,0,1,0}},
	{'I', {1,0,0,0,0,0,0,0,0,0,0,1}},

	{'J', {0,1,0,1,0,0,0,0,0,0,0,0}},
	{'K', {0,1,0,0,1,0,0,0,0,0,0,0}},
	{'L', {0,1,0,0,0,1,0,0,0,0,0,0}},
	{'M', {0,1,0,0,0,0,1,0,0,0,0,0}},
	{'N', {0,1,0,0,0,0,0,1,0,0,0,0}},
	{'O', {0,1,0,0,0,0,0,0,1,0,0,0}},
	{'P', {0,1,0,0,0,0,0,0,0,1,0,0}},
	{'Q', {0,1,0,0,0,0,0,0,0,0,1,0}},
	{'R', {0,1,0,0,0,0,0,0,0,0,0,1}},

	{'S', {0,0,1,0,1,0,0,0,0,0,0,0}},
	{'T', {0,0,1,0,0,1,0,0,0,0,0,0}},
	{'U', {0,0,1,0,0,0,1,0,0,0,0,0}},
	{'V', {0,0,1,0,0,0,0,1,0,0,0,0}},
	{'W', {0,0,1,0,0,0,0,0,1,0,0,0}},
	{'X', {0,0,1,0,0,0,0,0,0,1,0,0}},
	{'Y', {0,0,1,0,0,0,0,0,0,0,1,0}},
	{'Z', {0,0,1,0,0,0,0,0,0,0,0,1}},

	{'0', {0,0,1,0,0,0,0,0,0,0,0,0}},
	{'1', {0,0,0,1,0,0,0,0,0,0,0,0}},
	{'2', {0,0,0,0,1,0,0,0,0,0,0,0}},
	{'3', {0,0,0,0,0,1,0,0,0,0,0,0}},
	{'4', {0,0,0,0,0,0,1,0,0,0,0,0}},
	{'5', {0,0,0,0,0,0,0,1,0,0,0,0}},
	{'6', {0,0,0,0,0,0,0,0,1,0,0,0}},
	{'7', {0,0,0,0,0,0,0,0,0,1,0,0}},
	{'8', {0,0,0,0,0,0,0,0,0,0,1,0}},
	{'9', {0,0,0,0,0,0,0,0,0,0,0,1}},

	{' ', {0,0,0,0,0,0,0,0,0,0,0,0}}
};


// TODO: Add symbols
int main(int argc, char** argv ) {
	// String values should be inputed here to avoid asking
	// string sample="abc";
	string input;
	if( argc < 2 ) {
		// cout << argc << "\nUsage.... \n\tpunch-card <user input>" << endl;
		getline(cin, input);
	}
	else {
		input = string(argv[1]);
	}

	string symbols = "__0123456789";
	vector<vector<int>> punches;

	for(unsigned short int j=0;j<input.size();++j) {
		input[j] = toupper(input[j]);
		punches.push_back( rows[input[j]] );
	}

	// cout << "[+] Number of punches: " << punches.size() << endl;
	cout << "\t" << input << endl << endl;
	for(unsigned short int i=0;i<12;++i, cout << endl) {
		cout << symbols[i] << "\t";
		for(unsigned short int j=0;j<punches.size();++j) {
			cout << punches[j][i];
		}
		if(i == 2 ) cout << endl;
	}

	return 0;
}
