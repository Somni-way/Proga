# Лабораторная работа 9 – Git



Оценка 3:



!\[01.git\_status.png](screenshots/01.git\_status.png)

Команда показывает текущее состояние рабочей директории. На этом этапе репозиторий чист.



!\[02.git\_log.png](screenshots/02.git\_log.png)

История коммитов пуста, так как это новый репозиторий.



!\[03.create\_sort\_c.png](screenshots/03.create\_sort\_c.png)

Создание файла с функцией сортировки (пузырьковая сортировка).



!\[04.status\_untracked.png](screenshots/04.status\_untracked.png)

Файл не появился в списке, так как не выполнена команда git add.



!\[05.git\_add.png](screenshots/05.git\_add.png)

Команда добавляет файл в область подготовки (staging area).



!\[06.status\_staged.png](screenshots/06.status\_staged.png)

Теперь файл находится в "Changes to be committed" - готов к коммиту.



!\[07.git\_commit.png](screenshots/07.git\_commit.png)

Фиксация изменений с описательным сообщением.



!\[08.status\_clean.png](screenshots/08.status\_clean.png)

Рабочая директория чиста - все изменения зафиксированы.



!\[09\_add\_comment.png](screenshots/09\_add\_comment.png)

Добавляем комментарий к коду для документации.



!\[10.modified\_file.png](screenshots/10.modified\_file.png)

Git обнаружил изменения в файле, но они еще не проиндексированы.



!\[11\_add\_modified.png](screenshots/11\_add\_modified.png)

Добавляем изменения в staging area.



!\[12ready\_to\_commit.png](screenshots/12ready\_to\_commit.png)

Изменения готовы для коммита.



!\[13.second\_change.png](screenshots/13.second\_change.png)

Добавляем второй комментарий.



!\[14.second\_commit.png](screenshots/14.second\_commit.png)

Фиксация второго набора изменений.



!\[15.status\_and\_log.png](screenshots/15.status\_and\_log.png)

Проверяем состояние и смотрим историю.



!\[16.final\_commit.png](screenshots/16.final\_commit.png)

Завершаем работу с файлом sort.c.



!\[17.git\_push.png](screenshots/17.git\_push.png)

Синхронизация локальных изменений с удаленным репозиторием.



!\[18.create\_branch.png](screenshots/18.create\_branch.png)

Создание ветки "mybranch" для изолированной разработки.



!\[19.switch\_branch.png](screenshots/19.switch\_branch.png)

Переход на созданную ветку для работы в ней.



!\[20\_compare\_status.png](screenshots/20\_compare\_status.png)

Показывает, что статус одинаков в обеих ветках до внесения изменений.



!\[21.create\_file1.png](screenshots/21.create\_file1.png)

Создание файла с именем пользователя в ветке mybranch.



!\[22\_commit\_file1.png](screenshots/22\_commit\_file1.png)

Фиксация изменений в ветке mybranch.



!\[23\_log\_graph.png](screenshots/23\_log\_graph.png)

Визуализация истории коммитов с отображением ветвления.



!\[24.switch\_master.png](screenshots/24.switch\_master.png)

Переключение обратно на основную ветку master.



!\[25.create\_file2.png](screenshots/25.create\_file2.png)

Создание отдельного файла в ветке master, чтобы показать различия.



!\[26\_all\_branches.png](screenshots/26\_all\_branches.png)

Отображение истории всех веток, показывает расхождение master и mybranch.



!\[27\_check\_files.png](screenshots/27\_check\_files.png)

В ветке mybranch есть file1.txt, но нет file2.txt (который создан в master).



!\[28\_diff\_branches.png](screenshots/28\_diff\_branches.png)

Показывает различия между ветками - какие файлы и изменения есть в одной ветке, но нет в другой.



!\[29\_push\_mybranch.png](screenshots/29\_push\_mybranch.png)

Пушим mybranch и проверяем его на GitHub.

