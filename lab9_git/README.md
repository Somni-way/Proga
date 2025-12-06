# Лабораторная работа 9 – Git



Оценка 3:



![01.git_status.png](screenshots/01.git_status.png)

Команда показывает текущее состояние рабочей директории. На этом этапе репозиторий чист.



![02.git_log.png](screenshots/02.git_log.png)

История коммитов пуста, так как это новый репозиторий.



![03.create_sort_c.png](screenshots/03.create_sort_c.png)

Создание файла с функцией сортировки (пузырьковая сортировка).



![04.status_untracked.png](screenshots/04.status_untracked.png)

Файл не появился в списке, так как не выполнена команда git add.



![05.git_add.png](screenshots/05.git_add.png)

Команда добавляет файл в область подготовки (staging area).



![06.status_staged.png](screenshots/06.status_staged.png)

Теперь файл находится в "Changes to be committed" - готов к коммиту.



![07.git_commit.png](screenshots/07.git_commit.png)

Фиксация изменений с описательным сообщением.



![08.status_clean.png](screenshots/08.status_clean.png)

Рабочая директория чиста - все изменения зафиксированы.



![09_add_comment.png](screenshots/09_add_comment.png)

Добавляем комментарий к коду для документации.



![10.modified_file.png](screenshots/10.modified_file.png)

Git обнаружил изменения в файле, но они еще не проиндексированы.



![11_add_modified.png](screenshots/11_add_modified.png)

Добавляем изменения в staging area.



![12ready_to_commit.png](screenshots/12ready_to_commit.png)

Изменения готовы для коммит.



![13.second_change.png](screenshots/13.second_change.png)

Добавляем второй комментарий.



![14.second_commit.png](screenshots/14.second_commit.png)

Фиксация второго набора изменений.



![15.status_and_log.png](screenshots/15.status_and_log.png)

Проверяем состояние и смотрим историю.



![16.final_commit.png](screenshots/16.final_commit.png)

Завершаем работу с файлом sort.c.



![17.git_push.png](screenshots/17.git_push.png)

Синхронизация локальных изменений с удаленным репозиторием.



![18.create_branch.png](screenshots/18.create_branch.png)

Создание ветки "mybranch" для изолированной разработки.



![19.switch_branch.png](screenshots/19.switch_branch.png)

Переход на созданную ветку для работы в ней.



![20_compare_status.png](screenshots/20_compare_status.png)

Показывает, что статус одинаков в обеих ветках до внесения изменений.



![21.create_file1.png](screenshots/21.create_file1.png)

Создание файла с именем пользователя в ветке mybranch.



![22_commit_file1.png](screenshots/22_commit_file1.png)

Фиксация изменений в ветке mybranch.



![23_log_graph.png](screenshots/23_log_graph.png)

Визуализация истории коммитов с отображением ветвления.



![24.switch_master.png](screenshots/24.switch_master.png)

Переключение обратно на основную ветку master.



![25.create_file2.png](screenshots/25.create_file2.png)

Создание отдельного файла в ветке master, чтобы показать различия.



![26_all_branches.png](screenshots/26_all_branches.png)

Отображение истории всех веток, показывает расхождение master и mybranch.



![27_check_files.png](screenshots/27_check_files.png)

В ветке mybranch есть file1.txt, но нет file2.txt (который создан в master).



![28_diff_branches.png](screenshots/28_diff_branches.png)

Показывает различия между ветками - какие файлы и изменения есть в одной ветке, но нет в другой.



![29_push_mybranch.png](screenshots/29_push_mybranch.png)

Пушим mybranch и проверяем его на GitHub.
