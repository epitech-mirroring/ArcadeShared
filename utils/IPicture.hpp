/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include <string>

class IPicture {
public:
    string getPath() = 0;
    void setPath(string path) = 0;
};
