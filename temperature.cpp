#include <iostream>
using namespace std;

int main(void)
{
	double temp, high_temp, low_temp, sum = 0;
	int no_of_temps;
	for (no_of_temps = 0; cin >> temp; ++no_of_temps, sum += temp) {
		if (!no_of_temps)     high_temp = low_temp = temp;
		if (temp > high_temp) high_temp = temp;
		if (temp < low_temp)  low_temp  = temp;
	}
	cout << "High temperature: "    << high_temp << endl
		 << "Low temperature: "     << low_temp  << endl
		 << "Average temperature: " << sum / no_of_temps << endl;

	return 0;
}
