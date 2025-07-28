#include<iostream>

int main(){

    std::string temperature_scale;
    std::string temperature_scale2;

    double celsius;
    double fahrenheit;
    double kelvin;

    
    while (1)
    {
        std::cout << "Enter the temperature scale you want to convert(Fahrenheit, Celsius, Kelvin): ";
        std::cin >> temperature_scale;

        if (temperature_scale == "Celsius" || temperature_scale == "celsius")
        {
            std::cout << "Enter the temperature scale you want to convert Celsius to: ";
            std::cin >> temperature_scale2;
            if (temperature_scale2 == "fahrenheit" || temperature_scale2 == "Fahrenheit" || temperature_scale2 == "fahrenheit" || temperature_scale2 == "Fahrenheit")
            {
                std::cout << "Enter the temperature in Celsius: ";
                std::cin >> celsius;
                std::cout << "Converting Celsius to Fahrenheit: " << (celsius * 9.0/5.0) + 32 << '\n';
            }
            else if (temperature_scale2 == "kelvin" || temperature_scale2 == "Kelvin") {
                std::cout << "Enter the temperature in Celsius: ";
                std::cin >> celsius;
                std::cout << "Converting Celsius to Kelvin: " << celsius + 273.15 << '\n';
            }
            else if (temperature_scale2 == "celsius" || temperature_scale2 == "Celsius"){
                std::cout << "No conversion needed. The temperature scale is already Celsius.\n";
            }
            else {
            std::cout << "Invalid. \n";
            
            }
        }
        else if (temperature_scale == "Fahrenheit" || temperature_scale == "fahrenheit"){
            std::cout << "Enter the temperature scale you want to convert Fahrenheit to: ";
            std::cin >> temperature_scale2;
           
            if (temperature_scale2 == "Celsius" || temperature_scale2 == "celsius")
            {
                std::cout << "Enter the temperature in Fahrenheit: ";
                std::cin >> fahrenheit;
                std::cout << "Converting Fahrenheit to Celsius: " << (fahrenheit - 32) * 5.0 / 9.0 << '\n';
            }
    
            else if (temperature_scale2 == "Kelvin" || temperature_scale2 == "kelvin"){
    
                std::cout << "Enter the temperature in Fahrenheit: ";
                std::cin >> fahrenheit;
                std::cout << "Converting Fahrenheit to Kelvin: " << ((fahrenheit - 32) * 5.0 / 9.0) + 273.15 << '\n';
            }
            else if (temperature_scale2 == "Fahrenheit" || temperature_scale2 == "fahrenheit"){
                std::cout << "No conversion needed. The temperature scale is already Fahrenheit.\n";            
            }

            else {
            std::cout << "Invalid. \n";
            }
        }

        else if (temperature_scale == "Kelvin" || temperature_scale == "kelvin")
        {
            std::cout << "Enter the temperature scale you want to convert Kelvin to: ";
            std::cin >> temperature_scale2;
    
            if (temperature_scale2 == "Celsius" || temperature_scale2 == "celsius")
            {
                std::cout << "Enter the temperature in Kelvin: ";
                std::cin >> kelvin;
                std::cout << "Converting Kelvin to Celsius: " << kelvin - 273.15 << '\n';
            }
            else if (temperature_scale2 == "Fahrenheit"|| temperature_scale2 == "Fahrenheit" || temperature_scale2 == "fahrenheit")
            {
                std::cout << "Enter the temperature in Kelvin: ";
                std::cin >> kelvin;
                std::cout << "Converting Kelvin to Fahrenheit: " << (kelvin - 273.15) * 9.0 / 5.0 + 32 << '\n';
            }
            else if (temperature_scale2 == "Kelvin" || temperature_scale2 == "kelvin")
            {
                std::cout << "No conversion needed. The temperature scale is already Kelvin.\n"; 
            }
            else {
            std::cout << "Invalid. \n";   
            }
        }
        else if (temperature_scale2 == "Break" || temperature_scale2 == "break"){
            std::cout << "Exiting...\n";
            break;
        }
        else {
            std::cout << "Invalid. \n";
            
        }
    }

    return 0;
}

