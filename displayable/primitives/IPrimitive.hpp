/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include <memory>
#include "../IDisplayable.hpp"
#include "../../utils/IColor.hpp"

class IPrimitive: public virtual IDisplayable {
public:
    ~IPrimitive() override = default;
    [[nodiscard]] virtual const std::unique_ptr<IColor> &getColor() const = 0;
};
