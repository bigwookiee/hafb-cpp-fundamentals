/*
** EPITECH PROJECT, 2019
** hafb-cpp-fundamentals
** File description:
** util
*/

#pragma once
#include <array>

int sum(int x, int y);
void updateStep(int step);
void AddressVersionUpdateStep(int& step);

int Max (int x, int y);
int Max (int x, int y, int z);
int Max (const std::array<int, 10> &num);

void cleanArray(std::array<int,10> &nums);
