# Sea Battle 🚢

## Как запустить игру
---
<details>

<summary>👩‍💻 Сборка на Windows (Протестировано на Qt 6.9.0)</summary>

- Необходимо установить Qt Creator.
Гайд по установке: https://vc.ru/dev/1125830-kak-ustanovit-qt-qt5-qt6-v-rossii-cherez-onlain-installyator-pri-blokirovke-ip-adresov
- После того, как Qt Creator был установлен необходимо загрузить zip-архив проекта в папку Game_file.
- Запускаем Qt Creator, нажиманием `Open Project`, находим папку Game_file и выбираем файл untitled10.pro.
Все файлы должны автоматически перенестись.
- Проект запустился, теперь проверяем, что выставлены нужные настройки. Для успешных последующих шагов необходимо запустить программу в режиме `Выпуск`, на рисунке представлен пример, как это должно выглядеть.


  <img width="68" height="133" alt="изображение" src="https://github.com/user-attachments/assets/568b1df4-f957-4a4c-b808-a5b4fd128d6c" />

- После успешного запуска программы в окне `Вывод приложения` появится путь к exe файлу, который необходимо скопировать.
  

<img width="903" height="82" alt="изображение" src="https://github.com/user-attachments/assets/7c0910b5-dd65-4e1c-8b37-2bf21b0ff78e" />

- Создаём папку в которой будет храниться наша игра. К примеру назовём её Sea_Game.
- Далее запускаем `Командную строку`.
- В проводнике находим папку Qt.
- Копируем путь D(Название диска может отличаться)\Qt\6.9.0\mingw_64\bin
- Прописываем следующую команду:
```
D\Qt\6.9.0\mingw_64\bin\windeployqt -- dir D\Sea_Game D:\WW\release\SeaBattle.exe
```
- После того как файлы собрались необходимо просто перенести SeaBattle.exe в папку Sea_Game.
- Теперь всё готово.
</details>


<details>

<summary>💻 Сборка на Linux (Протестировано на Qt 6.4.2) </summary>

- Устанавливаем Qt Creator.
Гайд по установке: https://vc.ru/dev/1125830-kak-ustanovit-qt-qt5-qt6-v-rossii-cherez-onlain-installyator-pri-blokirovke-ip-adresov

- После установки, скачиваем zip-архив проекта в папку Game_file.

- Запускаем Qt Creator, нажиманием `Open Project`, находим папку Game_file и выбираем файл untitled10.pro.
Все файлы должны автоматически перенестись.

- Проект запустился, теперь проверяем, что выставлены нужные настройки. Для успешных последующих шагов необходимо запустить программу в режиме `Выпуск`, на рисунке представлен пример, как это должно выглядеть.


  <img width="68" height="133" alt="изображение" src="https://github.com/user-attachments/assets/568b1df4-f957-4a4c-b808-a5b4fd128d6c" />

- Запускаем сборку и ждём ее окончания.
- После сборки заходим в папку build/Desktop-Debug и находим там исоплняемый файл - `SeaBattle`. Это и есть наша игра. Пример можно наблюдать ниже.

<img width="1474" height="429" alt="изображение" src="https://github.com/user-attachments/assets/d1eb14fe-bf1c-494b-a1b9-c137f69e68b1" />

</details>
