#include <cmath>

class random {
protected:
	double t = rand() % 3;
	double num;
public:
	random() {
		if (t == 0) {
			num = 3.25;
		}
		else if (t == 1) {
			num = 7;
		}
		else {
			num = 17.75;
		}
	}
	double set_num() {
		return this->num;
	}
};
