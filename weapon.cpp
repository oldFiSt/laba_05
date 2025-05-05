#include "weapon.h"

Gun::Gun(const QString& name, int price, int count)
    : name(name), price(price), count(count) {}

void Gun::strike() {
    // Реализация метода strike для оружия Gun
}

QString Gun::getName() const {
    return name;
}

int Gun::getCount() const {
    return count;
}

void Gun::setCount(int newCount) {
    count = newCount;
}

void Gun::setName(const QString& newName) {
    name = newName;
}

int Gun::getPrice() const {
    return price;  // Возвращаем цену для пистолета
}

Knife::Knife(const QString& name, int price, int count)
    : name(name), price(price), count(count) {}

void Knife::strike() {
    // Реализация метода strike для оружия Knife
}

QString Knife::getName() const {
    return name;
}

int Knife::getCount() const {
    return count;
}

void Knife::setCount(int newCount) {
    count = newCount;
}

void Knife::setName(const QString& newName) {
    name = newName;
}

int Knife::getPrice() const {
    return price;  // Возвращаем цену для ножа
}
