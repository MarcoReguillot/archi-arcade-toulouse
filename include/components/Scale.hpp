/*
** EPITECH PROJECT, 2022
** SCALE
** File description:
** SCALE
*/

#ifndef SCALE
    #define SCALE

    #include "IComponent.hpp"

    namespace arcade {
        class Scale : public IComponent {
            public:
                Scale(double width = 0, double height = 0) : _width(width), _height(height) {}

                double _width;
                double _height;
        };
    }

#endif /* !SCALE */
