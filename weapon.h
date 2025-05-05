#ifndef WEAPON_H
#define WEAPON_H

#include <QString>

class IWeapon {
public:
    virtual ~IWeapon() {}
    virtual void strike() = 0;
    virtual QString getName() const = 0;
    virtual int getCount() const = 0;
    virtual void setCount(int newCount) = 0;
    virtual void setName(const QString& newName) = 0; // Добавим функцию для изменения названия
    virtual int getPrice() const = 0;
};

class Gun : public IWeapon {
public:
    Gun(const QString& name, int price, int count);

    void strike() override;
    QString getName() const override;
    int getCount() const override;
    void setCount(int newCount) override;
    void setName(const QString& newName) override;
    int getPrice() const override;  // Добавлено для реализации метода getPrice

private:
    QString name;
    int price;
    int count;
};

class Knife : public IWeapon {
public:
    Knife(const QString& name, int price, int count);

    void strike() override;
    QString getName() const override;
    int getCount() const override;
    void setCount(int newCount) override;
    void setName(const QString& newName) override;
    int getPrice() const override;  // Добавлено для реализации метода getPrice

private:
    QString name;
    int price;
    int count;
};

#endif // WEAPON_H
