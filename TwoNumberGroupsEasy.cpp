#include <bits/stdc++.h>
using namespace std;

class TwoNumberGroupsEasy {
public:
    int solve( vector <int> A, vector <int> numA, vector <int> B, vector <int> numB ) {

    }
};

// BEGIN CUT HERE
#include <cstdio>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
namespace moj_harness {
	using std::string;
	using std::vector;
	int run_test_case(int);
	void run_test(int casenum = -1, bool quiet = false) {
		if (casenum != -1) {
			if (run_test_case(casenum) == -1 && !quiet) {
				std::cerr << "Illegal input! Test case " << casenum << " does not exist." << std::endl;
			}
			return;
		}
		
		int correct = 0, total = 0;
		for (int i=0;; ++i) {
			int x = run_test_case(i);
			if (x == -1) {
				if (i >= 100) break;
				continue;
			}
			correct += x;
			++total;
		}
		
		if (total == 0) {
			std::cerr << "No test cases run." << std::endl;
		} else if (correct < total) {
			std::cerr << "Some cases FAILED (passed " << correct << " of " << total << ")." << std::endl;
		} else {
			std::cerr << "All " << total << " tests passed!" << std::endl;
		}
	}
	
	int verify_case(int casenum, const int &expected, const int &received, std::clock_t elapsed) { 
		std::cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			std::sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (expected == received) {
			verdict = "PASSED";
		} else {
			verdict = "FAILED";
		}
		
		std::cerr << verdict;
		if (!info.empty()) {
			std::cerr << " (";
			for (size_t i=0; i<info.size(); ++i) {
				if (i > 0) std::cerr << ", ";
				std::cerr << info[i];
			}
			std::cerr << ")";
		}
		std::cerr << std::endl;
		
		if (verdict == "FAILED") {
			std::cerr << "    Expected: " << expected << std::endl; 
			std::cerr << "    Received: " << received << std::endl; 
		}
		
		return verdict == "PASSED";
	}

	int run_test_case(int casenum__) {
		switch (casenum__) {
		case 0: {
			int A[]                   = {1,2,3,4};
			int numA[]                = {2,1,1,1};
			int B[]                   = {5,6,7,8};
			int numB[]                = {1,1,1,2};
			int expected__            = 2;

			std::clock_t start__      = std::clock();
			int received__            = TwoNumberGroupsEasy().solve(vector <int>(A, A + (sizeof A / sizeof A[0])), vector <int>(numA, numA + (sizeof numA / sizeof numA[0])), vector <int>(B, B + (sizeof B / sizeof B[0])), vector <int>(numB, numB + (sizeof numB / sizeof numB[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int A[]                   = {5,7};
			int numA[]                = {1,1};
			int B[]                   = {12,14};
			int numB[]                = {1,1};
			int expected__            = 0;

			std::clock_t start__      = std::clock();
			int received__            = TwoNumberGroupsEasy().solve(vector <int>(A, A + (sizeof A / sizeof A[0])), vector <int>(numA, numA + (sizeof numA / sizeof numA[0])), vector <int>(B, B + (sizeof B / sizeof B[0])), vector <int>(numB, numB + (sizeof numB / sizeof numB[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int A[]                   = {100};
			int numA[]                = {2};
			int B[]                   = {1};
			int numB[]                = {1};
			int expected__            = 1;

			std::clock_t start__      = std::clock();
			int received__            = TwoNumberGroupsEasy().solve(vector <int>(A, A + (sizeof A / sizeof A[0])), vector <int>(numA, numA + (sizeof numA / sizeof numA[0])), vector <int>(B, B + (sizeof B / sizeof B[0])), vector <int>(numB, numB + (sizeof numB / sizeof numB[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int A[]                   = {1};
			int numA[]                = {1};
			int B[]                   = {1};
			int numB[]                = {1};
			int expected__            = 0;

			std::clock_t start__      = std::clock();
			int received__            = TwoNumberGroupsEasy().solve(vector <int>(A, A + (sizeof A / sizeof A[0])), vector <int>(numA, numA + (sizeof numA / sizeof numA[0])), vector <int>(B, B + (sizeof B / sizeof B[0])), vector <int>(numB, numB + (sizeof numB / sizeof numB[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			int A[]                   = {5};
			int numA[]                = {1};
			int B[]                   = {6};
			int numB[]                = {1};
			int expected__            = 2;

			std::clock_t start__      = std::clock();
			int received__            = TwoNumberGroupsEasy().solve(vector <int>(A, A + (sizeof A / sizeof A[0])), vector <int>(numA, numA + (sizeof numA / sizeof numA[0])), vector <int>(B, B + (sizeof B / sizeof B[0])), vector <int>(numB, numB + (sizeof numB / sizeof numB[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 5: {
			int A[]                   = {733815053,566264976,984867861,989991438,407773802,701974785,599158121,713333928,530987873,702824160};
			int numA[]                = {8941,4607,1967,2401,495,7654,7078,4213,5485,1026};
			int B[]                   = {878175560,125398919,556001255,570171347,643069772,787443662,166157535,480000834,754757229,101000799};
			int numB[]                = {242,6538,7921,2658,1595,3049,655,6945,7350,6915};
			int expected__            = 7;

			std::clock_t start__      = std::clock();
			int received__            = TwoNumberGroupsEasy().solve(vector <int>(A, A + (sizeof A / sizeof A[0])), vector <int>(numA, numA + (sizeof numA / sizeof numA[0])), vector <int>(B, B + (sizeof B / sizeof B[0])), vector <int>(numB, numB + (sizeof numB / sizeof numB[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 6: {
			int A[]                   = ;
			int numA[]                = ;
			int B[]                   = ;
			int numB[]                = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = TwoNumberGroupsEasy().solve(vector <int>(A, A + (sizeof A / sizeof A[0])), vector <int>(numA, numA + (sizeof numA / sizeof numA[0])), vector <int>(B, B + (sizeof B / sizeof B[0])), vector <int>(numB, numB + (sizeof numB / sizeof numB[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			int A[]                   = ;
			int numA[]                = ;
			int B[]                   = ;
			int numB[]                = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = TwoNumberGroupsEasy().solve(vector <int>(A, A + (sizeof A / sizeof A[0])), vector <int>(numA, numA + (sizeof numA / sizeof numA[0])), vector <int>(B, B + (sizeof B / sizeof B[0])), vector <int>(numB, numB + (sizeof numB / sizeof numB[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 8: {
			int A[]                   = ;
			int numA[]                = ;
			int B[]                   = ;
			int numB[]                = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = TwoNumberGroupsEasy().solve(vector <int>(A, A + (sizeof A / sizeof A[0])), vector <int>(numA, numA + (sizeof numA / sizeof numA[0])), vector <int>(B, B + (sizeof B / sizeof B[0])), vector <int>(numB, numB + (sizeof numB / sizeof numB[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
		default:
			return -1;
		}
	}
}


#include <cstdlib>
int main(int argc, char *argv[]) {
	if (argc == 1) {
		moj_harness::run_test();
	} else {
		for (int i=1; i<argc; ++i)
			moj_harness::run_test(std::atoi(argv[i]));
	}
}
// END CUT HERE
