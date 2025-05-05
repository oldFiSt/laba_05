#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "weaponfactory.h"
#include <QInputDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    for (auto* w : weapons) delete w;
    delete ui;
}

void MainWindow::refreshWeaponList() {
    ui->listWidget->clear();
    int totalCost = 0;  // Переменная для подсчета общей стоимости

    // Проходим по всем оружиям и добавляем их в список
    for (IWeapon* weapon : weapons) {
        int weaponTotalCost = weapon->getPrice() * weapon->getCount();  // Стоимость оружия
        totalCost += weaponTotalCost;  // Добавляем к общей стоимости
        ui->listWidget->addItem(weapon->getName() + " x" + QString::number(weapon->getCount()) +
                                " | Цена: " + QString::number(weapon->getPrice()) +
                                " | Общая стоимость: " + QString::number(weaponTotalCost));
    }

    // Обновляем текст с общей стоимостью
    ui->totalCostLabel->setText("Общая стоимость: " + QString::number(totalCost));
}


void MainWindow::on_pushButton_clicked() {
    QStringList weaponTypes = {"AK-47", "Knife"};
    bool ok;
    // Открываем диалоговое окно для выбора типа оружия
    QString type = QInputDialog::getItem(this, "Тип оружия", "Выберите тип:", weaponTypes, 0, false, &ok);
    if (!ok || type.isEmpty()) return;  // Если не выбрано или окно закрыто - выходим.

    // Открываем диалоговое окно для ввода количества оружия
    int count = QInputDialog::getInt(this, "Количество", "Введите количество:", 1, 1, 100000, 1, &ok);
    if (!ok) return;

    CraftWeapon* factory = nullptr;
    if (type == "AK-47") {
        factory = new CraftAK();
    } else if (type == "Knife") {
        factory = new CraftKnife();
    }

    if (factory) {
        IWeapon* weapon = factory->create(type, 24000, count);
        weapons.append(weapon);
        refreshWeaponList(); // Обновляем отображение списка оружия
        delete factory; // Удаляем фабрику
    }
}

void MainWindow::on_pushButton_2_clicked() {
    int row = ui->listWidget->currentRow();
    if (row < 0 || row >= weapons.size()) return; // Проверяем, выбран ли элемент

    IWeapon* weapon = weapons[row];  // Получаем выбранное оружие

    bool ok;

    // Открываем диалог для изменения названия
    QString newName = QInputDialog::getText(this, "Изменить название", "Введите новое название:", QLineEdit::Normal, weapon->getName(), &ok);
    if (ok && !newName.isEmpty()) {
        // Обновляем имя оружия
        weapon->setName(newName);
    }

    // Открываем диалог для изменения количества
    int newCount = QInputDialog::getInt(this, "Изменить количество", "Введите новое количество:", weapon->getCount(), 1, 10000, 1, &ok);
    if (ok) {
        // Обновляем количество
        weapon->setCount(newCount);
    }

    // Обновляем отображение списка
    refreshWeaponList();
}

void MainWindow::on_pushButton_3_clicked() {
    int row = ui->listWidget->currentRow();
    if (row < 0 || row >= weapons.size()) return;  // Проверяем, выбран ли элемент

    delete weapons[row];  // Удаляем оружие
    weapons.removeAt(row); // Убираем оружие из списка
    refreshWeaponList(); // Обновляем список
}
