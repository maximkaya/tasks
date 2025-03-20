#include <iostream>
#include <vector>


std::string getHundreds(int num) {
    std::vector<std::string> hundreds = {"", "сто", "двісті", "триста", "чотириста","п'ятсот", "шістсот", "сімсот", "вісімсот", "дев'ятсот"};
    
    return hundreds[num];
}


std::string getTens(int num) {
    std::vector<std::string> tens = {"", "десять", "двадцять", "тридцять", "сорок","п’ятдесят", "шістдесят", "сімдесят", "вісімдесят", "дев’яносто"};
    
    return tens[num];
}


std::string getTeens(int num) {
    std::vector<std::string> teens = {"десять", "одинадцять", "дванадцять", "тринадцять", "чотирнадцять", "п'ятнадцять", "шістнадцять", "сімнадцять", "вісімнадцять", "дев'ятнадцять"};
    
    return teens[num - 10];
}


std::string getOnes(int num) {
    std::vector<std::string> ones = {"", "один", "два", "три", "чотири", "п'ять", "шість", "сім", "вісім", "дев'ять"};
    
    return ones[num];
}


std::string numberToWords(int n) {
    if (n == 1000) return "штука"; 

    std::string result;

    int hundreds = n / 100;         
    int tens = (n % 100) / 10;      
    int ones = n % 10;              

    if (hundreds > 0) result += getHundreds(hundreds) + " ";

    if (tens == 1) { 
        result += getTeens(10 + ones);
    } 
        else { 
        if (tens > 0) result += getTens(tens) + " ";
        if (ones > 0) result += getOnes(ones);
    }

    return result;
}

int main() 
{
    int n;
    std::cout << "Число від 1 до 1000: ";
    std::cin >> n;

    std::string result = numberToWords(n);

    if (n < 1 || n > 1000) {
        std::cout << "Бро, передивись умову ";

        return 1;
    }


    std::cout << "Чисельні слова: " << result << std::endl;
    
    return 0;
}
