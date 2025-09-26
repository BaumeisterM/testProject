#include <iostream>
#include <string>
#include <type_traits> // for is_same_v<T, U>


// rename the output
template<typename T>
std::string getTypeName() {
    if constexpr (std::is_same_v<T, int>) return "int";
    else if constexpr (std::is_same_v<T, unsigned int>) return "unsigned int";
    else if constexpr (std::is_same_v<T, char>) return "char";
    else if constexpr (std::is_same_v<T, float>) return "float";
    else if constexpr (std::is_same_v<T, double>) return "double";
    else return typeid(T).name(); // Fallback
}

template<typename T>
void getType(const T& var) {
    std::cout << "The data type of the variable is: " << getTypeName<T>() << std::endl;
}


int main(){
	//Outputs the corresponding data type
	int i;
	getType(i);
	unsigned int ui;
	getType(ui);
	char c;
	getType(c);
	float f;
	getType(f);
}
