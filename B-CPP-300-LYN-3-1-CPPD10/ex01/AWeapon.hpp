/*
** EPITECH PROJECT, 2019
** AWeapon.hpp
** File description:
** @epitech.eu
*/

#ifndef AWEAPON_HPP_
    #define AWEAPON_HPP_

    #include <string>

    class AWeapon {
        private:
            std::string name;
            int apCost;
            int damage;
        public:
            AWeapon(std::string const &, int, int);
            virtual ~AWeapon();

            std::string const & getName() const;
            int getAPCost() const;
            int getDamage() const;
            virtual void attack() const = 0;
    };

#endif /* !AWEAPON_HPP_ */