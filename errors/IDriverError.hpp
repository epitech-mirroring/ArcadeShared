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

class IDriverError: public virtual IError {
public:
    ~IDriverError() override = default;
    [[nodiscard]] virtual const IDriver &getDriver() const = 0;
};
