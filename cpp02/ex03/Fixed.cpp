/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 18:42:41 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/06/02 20:49:39 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int value)
{
    fixed_val = value << raw;
}

Fixed::Fixed(const float value)
{
    fixed_val = roundf(value * (1 << raw));
}

Fixed::Fixed()
{
    fixed_val = 0;
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this == &other)
        return *this;
    this->fixed_val = other.getRawBits();
    return *this;
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const
{
    return fixed_val;
}

void Fixed::setRawBits(int const raw)
{
    fixed_val = raw;
}

float Fixed::toFloat(void) const
{
    return ((static_cast<float>(fixed_val)) / (1 << raw));
}

int Fixed::toInt(void) const
{
    return (fixed_val >> raw);
}

bool Fixed::operator>(const Fixed &other) const
{
    return (this->fixed_val > other.fixed_val);
}

bool Fixed::operator<(const Fixed &other) const
{
    return (this->fixed_val < other.fixed_val);
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (this->fixed_val >= other.fixed_val);
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (this->fixed_val <= other.fixed_val);
}

bool Fixed::operator==(const Fixed &other) const
{
    return (this->fixed_val == other.fixed_val);
}

bool Fixed::operator!=(const Fixed &other) const
{
    return (this->fixed_val != other.fixed_val);
}

Fixed Fixed::operator+(const Fixed &other) const
{
    return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed &Fixed::operator++(void)
{
    this->fixed_val++;
    return (*this);
}

Fixed &Fixed::operator--(void)
{
    this->fixed_val--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->fixed_val++;
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->fixed_val--;
    return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
