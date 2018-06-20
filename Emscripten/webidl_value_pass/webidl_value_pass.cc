/*
#include <iostream>

using namespace std;
*/

class WebIDL {
public:
	WebIDL () = default;
	WebIDL (int x) : x(x) {}
	int getValueXByValue (void) const {
		return x;
	}
	WebIDL passThroughToValue (WebIDL* i) const {
		return WebIDL(i->getValueXByValue());
	}
	WebIDL* passThroughByPointer (WebIDL* i) const {
		return i;
	}
	WebIDL& passThroughByReference (WebIDL &i) const {
		return i;
	}
private:
	int x;
};

/*
int main (int argc, char **argv) {
	WebIDL* i = new WebIDL(1);
	WebIDL* j = new WebIDL(2);
	WebIDL k = i->passThroughToValue(j);
	cout << k.getValueXByValue() << endl;
}
*/