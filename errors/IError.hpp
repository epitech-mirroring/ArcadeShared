/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include <string>
#include <memory>
#include <exception>

class IError: std::exception {
public:
    ~IError() override = default;
    [[nodiscard]] virtual int getCode() const = 0;
    [[nodiscard]] const char *what() const noexcept override = 0;
};
