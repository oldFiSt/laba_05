#include "weaponfactory.h"
#include "weapon.h"  // Убедитесь, что этот заголовок включён

IWeapon* CraftAK::create(const QString& name, int price, int count) {
    return new Gun(name, price, count);
}

IWeapon* CraftKnife::create(const QString& name, int price, int count) {
    return new Knife(name, price, count);
}
