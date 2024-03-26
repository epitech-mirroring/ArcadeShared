/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include "../IDriver.hpp"
#include "IError.hpp"

class IDriverError: public IError {
public:
    virtual ~IDriverError() = default;
    virtual int getCode() const = 0;
    virtual const std::unique_ptr<IDriver> &getDriver() const = 0;
    virtual const char *what() const noexcept = 0;
};
