/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include <iostream>

class IPicture {
public:
    virtual std::string getPath() = 0;
    virtual void setPath(std::string path) = 0;
};
