/*
** carton_fileio.h for hafb-cpp-fundamentals in c:\Users\CCEClass1.AD.000\Documents\hafb-cpp-fundamentals\Module2\LA2-4\src
**
** Made by 
** Login   <>
**
** Started on  Wed Dec 18 1:07:00 PM 2019 
** Last update Wed Dec 18 1:07:00 PM 2019 
*/

#pragma once

#include <array>
#include <string>
#include "carton.h"

const int kMaxArray = 20;

std::string readDataFormatFromFile(std::string filename, 
        std::array<Carton, kMaxArray> &boxes, 
        int &recoredNumber);

void wrightDataToFile(std::string fileName,
        const std::array<Carton, kMaxArray> &data, 
        int numberOdRecords);