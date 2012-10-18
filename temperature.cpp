#include <iostream>
using namespace std;

int main(void)
{
	double temp, high_temp, low_temp, sum = 0;
	int no_of_temps = 0;
	while (cin >> temp) {
		sum += temp;
		if (!no_of_temps)     high_temp = low_temp = temp;
		if (temp > high_temp) high_temp = temp;
		if (temp < low_temp)  low_temp  = temp;
		++no_of_temps;
	}
	cout << "High temperature: "    << high_temp << endl
		 << "Low temperature: "     << low_temp  << endl
		 << "Average temperature: " << sum / no_of_temps << endl;

	return 0;
}
