#include <iostream>
#include <vector>

double polynom(const std::vector<double>& k, double x) {
    double result = 0.0;
    // Iteration über die Koeffizienten in absteigender Reihenfolge (k_n, k_{n-1}, ..., k_0)
    for (double coeff : k) {
        // result = result * x + coeff
        result = result * x + coeff;
    }
    return result;
}

int main(){
	//Init vector vec[0] = grade 4 (vec.size()-1)
	std::vector<double> vec{3,6,3,0,2};
	double n;
	//Input x=n
	std::cout << "Input a number, which you want to multiplicate this polynom" << std::endl;
	std::cin>>n;

	
	std::cout << "The result of the polynom is " << polynom(vec,n) << std::endl;
	
}
