#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <thread>
#include <future>

double average(std::string datasetName) {
    std::ifstream file;
    file.open(datasetName);
    if (!file.is_open()) {
        std::cerr << "Could not open the file named: " << datasetName << "\n";
        return 1;
    }
    std::string line;
    double sum=0;
    int nr=0;
    while (file) {
        std::getline(file, line);
        if(line!=""){
            sum += stod(line);
            nr++;
        }
    }
    return sum / nr;
}

double median(std::string datasetName) {
    std::ifstream file;
    file.open(datasetName);
    if (!file.is_open()) {
        std::cerr << "Could not open the file named: " << datasetName << "\n";
        return 1;
    }
    std::string line;
    std::vector<double> numbers;
    double med = 0;
    while (file) {
        std::getline(file, line);
        if (line != "") {
            numbers.push_back(stod(line));
        }
    }
    std::sort(numbers.begin(), numbers.end());
    if (numbers.size() % 2 == 0) {
        med = (numbers[numbers.size()/2-1]+ numbers[(numbers.size()/2)]) / 2.0;
    }
    else {
        med = numbers[numbers.size() / 2];
    }
    return med;
}


int main()
{
    std::string fileName = "data.txt";
    auto av = std::async(average, fileName);
    auto med = std::async(median, fileName);

    if (av.get() > med.get()) {
        std::cout << "Average is bigger than median.\n";
    }
    else if(av.get() < med.get()){
        std::cout << "Median is bigger than average";
    }
    else {
        std::cout << "Average and median are equal";
    }

}

