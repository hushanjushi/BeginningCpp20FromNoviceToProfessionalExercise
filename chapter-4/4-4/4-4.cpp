import <iostream>;
import <format>;
import <cctype>;

bool YesNoToBool(char input) {
	if (input == 'y') {
		return true;
	}
	else if (input == 'n') {
		return false;
	}
}

int main() {
	std::cout << "Please input your age(in postive integer):\n";
	unsigned age;
	std::cin >> age;
	if (age < 21 && age > 35) {
		std::cout << "You are out of our age requirement.\n";
		return 1;
	}

	std::cout << "Please input your gender('f' for female and 'm' for male):\n";
	char gender;
	std::cin >> gender;
	if (std::isupper(gender)) {
		gender = std::tolower(gender);
	}
	if (gender != 'f') {
		std::cout << "You are out of our gender requirement.\n";
		return 1;
	}

	std::cout << "Please input your degree\n('n' for none,'a' for associate,'b' for bachelor,'p' for professional,'m' for master,'d' for doctor):\n";
	enum class AcademicDegree { 
		none ='n',
		associate='a', 
		bachelor='b',
		professional='p',
		master='m',
		doctor='d'
	};
	AcademicDegree degree{};
	char degreeChar{};
	std::cin >> degreeChar;

	switch (std::tolower(degreeChar))
	{
	case 'n': degree = AcademicDegree::none;         break;
	case 'a': degree = AcademicDegree::associate;    break;
	case 'b': degree = AcademicDegree::bachelor;     break;
	case 'p': degree = AcademicDegree::professional; break;
	case 'm': degree = AcademicDegree::master;       break;
	case 'd': degree = AcademicDegree::doctor;       break;
	default:
		std::cout << "You are out of our degree requirement.\n";
		return 1;
	}

	bool married, speaksHindi, speaksUrdu;
	{
		char input;
		std::cout << "Are you married(Y or N)?\n";
		std::cin >> input;
		if (std::isupper(input)) {
			input = tolower(input);
		}
		if (input == 'n') {
			married = YesNoToBool(input);
		}
		else if (input == 'y') {
			std::cout << "You are out of our married requirement.\n";
			return 1;
		}
		else {
			std::cout << "You input unexisted choice.\n";
			return 1;
		}
		std::cout << "Can you Hindi(Y or N)?\n";
		std::cin >> input;
		if (std::isupper(input)) {
			input = tolower(input);
		}
		if (input == 'y') {
			speaksHindi = YesNoToBool(input);
		}
		else if (input == 'n') {
			std::cout << "You are out of our language requirement.\n";
			return 1;
		}
		else {
			std::cout << "You input unexisted choice.\n";
			return 1;
		}
		std::cout << "Can you Urdu(Y or N)?\n";
		std::cin >> input;
		if (std::isupper(input)) {
			input = tolower(input);
		}
		if (input == 'y') {
			speaksUrdu = YesNoToBool(input);
		}
		else if (input == 'n') {
			std::cout << "You are out of our language requirement.\n";
			return 1;
		}
		else {
			std::cout << "You input unexisted choice.\n";
			return 1;
		}
	}
	std::cout << "Congratulation! You are the talent we need.\n";
}