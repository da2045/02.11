


struct Complex {
    double real; 
    double imag; 
};

Complex add(const Complex& a, const Complex& b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}


Complex subtract(const Complex& a, const Complex& b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}


Complex multiply(const Complex& a, const Complex& b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}


Complex divide(const Complex& a, const Complex& b) {
    Complex result;
    double denominator = b.real * b.real + b.imag * b.imag;
    result.real = (a.real * b.real + a.imag * b.imag) / denominator;
    result.imag = (a.imag * b.real - a.real * b.imag) / denominator;
    return result;
}

int main() {
    Complex a, b;

    std::cout << "Vvedit realnu ta uiavnu chastyny pershoho kompleksnoho chysla: ";
    std::cin >> a.real >> a.imag;

    std::cout << "Vvedit realnu ta uiavnu chastyny druhoho kompleksnoho chysla: ";
    std::cin >> b.real >> b.imag;

    Complex sum = add(a, b);
    Complex difference = subtract(a, b);
    Complex product = multiply(a, b);
    Complex quotient = divide(a, b);

    std::cout << "Suma: " << sum.real << " + " << sum.imag << "i" << std::endl;
    std::cout << "Riznytsia: " << difference.real << " + " << difference.imag << "i" << std::endl;
    std::cout << "Mnozhennia: " << product.real << " + " << product.imag << "i" << std::endl;
    std::cout << "Dilenia: " << quotient.real << " + " << quotient.imag << "i" << std::endl;

    return 0;
}
