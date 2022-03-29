/*
** EPITECH PROJECT, 2022
** dev
** File description:
** IGraphical
*/

#ifndef IGRAPHICAL_HPP_
#define IGRAPHICAL_HPP_

#include <cstdint>
#include <functional>

#include "IScene.hpp"
namespace arcade
{

    class IGraphical
    {
    public:
        virtual ~IGraphical() = default;

        virtual void init(IScene &scene) = 0;
        virtual void update(IScene &scene, const std::uint64_t &deltaTime) = 0;
        virtual void destroy(IScene &scene) = 0;

    protected:
    private:
    };
}

#endif /* !IGRAPHICAL_HPP_ */
