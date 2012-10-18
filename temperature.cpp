#include <iostream>
using namespace std;

int main(void)
{
	double temp, sum = 0, high_temp, low_temp;
	int no_of_temps = 0;
	while (cin >> temp) {
		++no_of_temps;
		sum += temp;
		if (no_of_temps == 1) {
			high_temp = temp;
			low_temp  = temp;
		}
		if (temp > high_temp) high_temp = temp;
		if (temp < low_temp)  low_temp  = temp;
	}
	cout << "High temperature: " << high_temp << endl
		 << "Low temperature: "  << low_temp  << endl
		 << "Average temperature: " << sum / no_of_temps << endl;

	return 0;
}
