#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main(void)
{
	try {
		vector<int> v;
		int x, i;
		while (cin >> x) v.push_back(x);
		for (i = 0; i <= v.size(); ++i)
			cout << "v[" << i << "] == " << v[i] << endl;
		return 0;
	} catch (out_of_range) {
		cerr << "Oops Range error\n";
		return 1;
	} catch (...) {
		cerr << "Exception someting went wrong\n";
		return 2;
	}
}
