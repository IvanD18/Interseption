Репозиторий Макарова Николая
Группа: 4М52 ФИИТ.
Предмет: Case технологии
Преподователь: Морозов Никита Сергеевич
************************
Программа написана на языке C++ с применением библиотеки OpenGL glut для отрисовки окружности и точек ее пересечения с лучами.
Реализовано в среде разработки Visual studio 2015
************************
Программа выполняет поиск точек пересечения заданного луча и лучей повернутых на alfa градусов (alfa/2 в каждую сторону) с окружностью (сферой) в n-мерном пространстве и отрисовку результата в 2-мерном пространстве.Алгоритм реализован с помощью матриц поворота в n-мерном пространстве.
Входные данные:
-Размерность пространства (2...n)
-Координаты прямой в заданном n-мерном пространстве (диапазон оси [-25;25])
-Координаты центра окружности
-Радиус окружности
-Угол альфа рассеивания лучей

На выходе:
-Координаты найденных точек пересечения в n-мерном пространсве
-Вывод изображения результата в 2-мерном пространстве (синими точками обозначены точки пересечения)
************************
Programm- файл исходного кода
************************
FindPoint.exe - файл запуска реализованной программы

***********************
up 10.03.2021
Добавлены виртуальные классы:
Camera
Figure
Light
Scene