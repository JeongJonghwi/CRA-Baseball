#include <stdexcept>

using namespace std;
class Baseball {
public:
	void guess(const std::string& string) {
		if (string.length() != 3) {
			throw length_error("Must be three letters.");
		}
	}
};