#include <bits/stdc++.h>
using namespace std;

class TheFansAndMeetingsDivOne {
public:
	double find( vector <int> minJ, vector <int> maxJ, vector <int> minB, vector <int> maxB, int k ) {
		int n = minJ.size();

		double result = 0.0;
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < n; ++j) {
				if(min(maxJ[i], maxB[j]) >= max(minJ[i], minB[j])) {
					int m = min(maxJ[i], maxB[j])-max(minJ[i], minB[j])+1;
					result += (double) m*(1.0/(maxJ[i]-minJ[i]+1) * 1.0/(maxB[j]-minB[j]+1));
				}
			}
		}
		return result*1.0/(n*n);
	
	}
};

// BEGIN CUT HERE
#include <algorithm>
#include <cmath>
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
	
	static const double MAX_DOUBLE_ERROR = 1e-9;
	static bool topcoder_fequ(double expected, double result) {
		if (std::isnan(expected)) {
			return std::isnan(result);
		} else if (std::isinf(expected)) {
			if (expected > 0) {
				return result > 0 && std::isinf(result);
			} else {
				return result < 0 && std::isinf(result);
			}
		} else if (std::isnan(result) || std::isinf(result)) {
			return false;
		} else if (std::fabs(result - expected) < MAX_DOUBLE_ERROR) {
			return true;
		} else {
			double mmin = std::min(expected * (1.0 - MAX_DOUBLE_ERROR), expected * (1.0 + MAX_DOUBLE_ERROR));
			double mmax = std::max(expected * (1.0 - MAX_DOUBLE_ERROR), expected * (1.0 + MAX_DOUBLE_ERROR));
			return result > mmin && result < mmax;
		}
	}
	double moj_relative_error(double expected, double result) {
		if (std::isnan(expected) || std::isinf(expected) || std::isnan(result) || std::isinf(result) || expected == 0) {
			return 0;
		}
		return std::fabs(result-expected) / std::fabs(expected);
	}
	
	int verify_case(int casenum, const double &expected, const double &received, std::clock_t elapsed) { 
		std::cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			std::sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (topcoder_fequ(expected, received)) {
			verdict = "PASSED";
			double rerr = moj_relative_error(expected, received); 
			if (rerr > 0) {
				std::sprintf(buf, "relative error %.3e", rerr);
				info.push_back(buf);
			}
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
			int minJ[]                = {1};
			int maxJ[]                = {9};
			int minB[]                = {5};
			int maxB[]                = {5};
			int k                     = 1;
			double expected__         = 0.1111111111111111;

			std::clock_t start__      = std::clock();
			double received__         = TheFansAndMeetingsDivOne().find(vector <int>(minJ, minJ + (sizeof minJ / sizeof minJ[0])), vector <int>(maxJ, maxJ + (sizeof maxJ / sizeof maxJ[0])), vector <int>(minB, minB + (sizeof minB / sizeof minB[0])), vector <int>(maxB, maxB + (sizeof maxB / sizeof maxB[0])), k);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int minJ[]                = {5, 2, 5, 1, 1, 2, 4, 1};
			int maxJ[]                = {7, 6, 7, 3, 4, 3, 5, 1};
			int minB[]                = {8, 9, 7, 11, 12, 7, 8, 40};
			int maxB[]                = {9, 10, 9, 33, 14, 7, 11, 40};
			int k                     = 2;
			double expected__         = 4.724111866969009E-5;

			std::clock_t start__      = std::clock();
			double received__         = TheFansAndMeetingsDivOne().find(vector <int>(minJ, minJ + (sizeof minJ / sizeof minJ[0])), vector <int>(maxJ, maxJ + (sizeof maxJ / sizeof maxJ[0])), vector <int>(minB, minB + (sizeof minB / sizeof minB[0])), vector <int>(maxB, maxB + (sizeof maxB / sizeof maxB[0])), k);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int minJ[]                = {4, 7, 4};
			int maxJ[]                = {7, 7, 7};
			int minB[]                = {40, 40, 40};
			int maxB[]                = {40, 40, 40};
			int k                     = 1;
			double expected__         = 0.0;

			std::clock_t start__      = std::clock();
			double received__         = TheFansAndMeetingsDivOne().find(vector <int>(minJ, minJ + (sizeof minJ / sizeof minJ[0])), vector <int>(maxJ, maxJ + (sizeof maxJ / sizeof maxJ[0])), vector <int>(minB, minB + (sizeof minB / sizeof minB[0])), vector <int>(maxB, maxB + (sizeof maxB / sizeof maxB[0])), k);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int minJ[]                = {3, 6, 2, 1, 1, 10, 3};
			int maxJ[]                = {6, 9, 5, 6, 5, 10, 9};
			int minB[]                = {1, 1, 1, 1, 8, 3, 1};
			int maxB[]                = {3, 9, 7, 3, 10, 6, 5};
			int k                     = 4;
			double expected__         = 0.047082056525158976;

			std::clock_t start__      = std::clock();
			double received__         = TheFansAndMeetingsDivOne().find(vector <int>(minJ, minJ + (sizeof minJ / sizeof minJ[0])), vector <int>(maxJ, maxJ + (sizeof maxJ / sizeof maxJ[0])), vector <int>(minB, minB + (sizeof minB / sizeof minB[0])), vector <int>(maxB, maxB + (sizeof maxB / sizeof maxB[0])), k);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 4: {
			int minJ[]                = ;
			int maxJ[]                = ;
			int minB[]                = ;
			int maxB[]                = ;
			int k                     = ;
			double expected__         = ;

			std::clock_t start__      = std::clock();
			double received__         = TheFansAndMeetingsDivOne().find(vector <int>(minJ, minJ + (sizeof minJ / sizeof minJ[0])), vector <int>(maxJ, maxJ + (sizeof maxJ / sizeof maxJ[0])), vector <int>(minB, minB + (sizeof minB / sizeof minB[0])), vector <int>(maxB, maxB + (sizeof maxB / sizeof maxB[0])), k);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 5: {
			int minJ[]                = ;
			int maxJ[]                = ;
			int minB[]                = ;
			int maxB[]                = ;
			int k                     = ;
			double expected__         = ;

			std::clock_t start__      = std::clock();
			double received__         = TheFansAndMeetingsDivOne().find(vector <int>(minJ, minJ + (sizeof minJ / sizeof minJ[0])), vector <int>(maxJ, maxJ + (sizeof maxJ / sizeof maxJ[0])), vector <int>(minB, minB + (sizeof minB / sizeof minB[0])), vector <int>(maxB, maxB + (sizeof maxB / sizeof maxB[0])), k);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			int minJ[]                = ;
			int maxJ[]                = ;
			int minB[]                = ;
			int maxB[]                = ;
			int k                     = ;
			double expected__         = ;

			std::clock_t start__      = std::clock();
			double received__         = TheFansAndMeetingsDivOne().find(vector <int>(minJ, minJ + (sizeof minJ / sizeof minJ[0])), vector <int>(maxJ, maxJ + (sizeof maxJ / sizeof maxJ[0])), vector <int>(minB, minB + (sizeof minB / sizeof minB[0])), vector <int>(maxB, maxB + (sizeof maxB / sizeof maxB[0])), k);
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
