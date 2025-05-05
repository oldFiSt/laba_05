#ifndef WEAPONFACTORY_H
#define WEAPONFACTORY_H

#include "weapon.h"

class CraftWeapon {
public:
    virtual ~CraftWeapon() {}
    virtual IWeapon* create(const QString& name, int price, int count) = 0;
};

class CraftAK : public CraftWeapon {
public:
    IWeapon* create(const QString& name, int price, int count) override;
};

class CraftKnife : public CraftWeapon {
public:
    IWeapon* create(const QString& name, int price, int count) override;
};

#endif // WEAPONFACTORY_H
