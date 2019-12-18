#include "carton_fileio.h"
#include <fstream>

std::string readDataFormatFromFile(std::string filename, 
        std::array<Carton, kMaxArray> &boxes, 
        int &recoredNumber){
    
    std::ifstream data(filename);
    std::string message;
    double x,y,z;

    --recoredNumber;

    while(++recoredNumber < kMaxArray && data >> x >> y >> z){
        try{
            boxes[recoredNumber].setDimensions(x,y,z);
        } catch (std::out_of_range error) {
            message += error.what() + '\n';
        }
    };

    if(data.fail()){
        return "failed to open the data file.\n";
    }

    data.close();
    return message;
}

void wrightDataToFile(std::string fileName,
        const std::array<Carton, kMaxArray> &data, 
        int numberOdRecords){
    
    std::ofstream file(fileName);

    for(int index = 0; index < numberOdRecords; ++index){
        data[index].wrightData(file);
    }
    
    file.close();
}
