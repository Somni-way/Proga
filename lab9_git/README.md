# Лабораторная работа 9 – Git



Оценка 3:



![01_git_status.png](screenshots/01_git_status.png)

Команда показывает текущее состояние рабочей директории. На этом этапе репозиторий чист.



![02_git_log.png](screenshots/02_git_log.png)

История коммитов пуста, так как это новый репозиторий.



![03_create_sort_c.png](screenshots/03_create_sort_c.png)

Создание файла с функцией сортировки (пузырьковая сортировка).



![04_status_untracked.png](screenshots/04_status_untracked.png)

Файл не появился в списке, так как не выполнена команда git add.



![05_git_add.png](screenshots/05_git_add.png)

Команда добавляет файл в область подготовки (staging area).



![06_status_staged.png](screenshots/06_status_staged.png)

Теперь файл находится в "Changes to be committed" - готов к коммиту.



![07_git_commit.png](screenshots/07_git_commit.png)

Фиксация изменений с описательным сообщением.



![08_status_clean.png](screenshots/08_status_clean.png)

Рабочая директория чиста - все изменения зафиксированы.



![09_add_comment.png](screenshots/09_add_comment.png)

Добавляем комментарий к коду для документации.



![10_modified_file.png](screenshots/10_modified_file.png)

Git обнаружил изменения в файле, но они еще не проиндексированы.



![11_add_modified.png](screenshots/11_add_modified.png)

Добавляем изменения в staging area.



![12ready_to_commit.png](screenshots/12_ready_to_commit.png)

Изменения готовы для коммит.



![13_second_change.png](screenshots/13_second_change.png)

Добавляем второй комментарий.



![14_second_commit.png](screenshots/14_second_commit.png)

Фиксация второго набора изменений.



![15_status_and_log.png](screenshots/15_status_and_log.png)

Проверяем состояние и смотрим историю.



![16_final_commit.png](screenshots/16_final_commit.png)

Завершаем работу с файлом sort.c.



![17_git_push.png](screenshots/17_git_push.png)

Синхронизация локальных изменений с удаленным репозиторием.



![18_create_branch.png](screenshots/18_create_branch.png)

Создание ветки "mybranch" для изолированной разработки.



![19_switch_branch.png](screenshots/19_switch_branch.png)

Переход на созданную ветку для работы в ней.



![20_compare_status.png](screenshots/20_compare_status.png)

Показывает, что статус одинаков в обеих ветках до внесения изменений.



![21_create_file1.png](screenshots/21_create_file1.png)

Создание файла с именем пользователя в ветке mybranch.



![22_commit_file1.png](screenshots/22_commit_file1.png)

Фиксация изменений в ветке mybranch.



![23_log_graph.png](screenshots/23_log_graph.png)

Визуализация истории коммитов с отображением ветвления.



![24_switch_master.png](screenshots/24_switch_master.png)

Переключение обратно на основную ветку master.



![25_create_file2.png](screenshots/25_create_file2.png)

Создание отдельного файла в ветке master, чтобы показать различия.



![26_all_branches.png](screenshots/26_all_branches.png)

Отображение истории всех веток, показывает расхождение master и mybranch.



![27_check_files.png](screenshots/27_check_files.png)

В ветке mybranch есть file1.txt, но нет file2.txt (который создан в master).



![28_diff_branches.png](screenshots/28_diff_branches.png)

Показывает различия между ветками - какие файлы и изменения есть в одной ветке, но нет в другой.



![29_push_mybranch.png](screenshots/29_push_mybranch.png)

Пушим mybranch и проверяем его на GitHub.


**Оценка 4**

---

## **Часть 4: Продвинутая работа с Git**

![01_switch_mybranch.png](screenshots_4/01_switch_mybranch.png)
  
*Переход на ветку mybranch для продолжения работы.*

![02_add_main.png](screenshots_4/02_add_main.png)
  
*Добавление функции main() в файл sort.c для тестирования сортировки.*

![03_git_diff.png](screenshots_4/03_git_diff.png)
  
*Команда показывает все незаиндексированные изменения в файле sort.c.*

![04_diff_staged.png](screenshots_4/04_diff_staged.png)
  
*В staged области пока нет изменений (пусто).*

![05_add_to_stage.png](screenshots_4/05_add_to_stage.png)  

*Индексация изменений файла sort.c.*

![06_diff_after_add.png](screenshots_4/06_diff_after_add.png)  

*После add изменения перешли в staged, поэтому git diff пуст, а git diff --staged показывает изменения.*

![07_remove_number.png](screenshots_4/07_remove_number.png)  

*Изменение массива в функции main() - удаление одного элемента.*

![08_diff_after_change.png](screenshots_4/08_diff_after_change.png)  

*Теперь есть изменения и в staged (старые), и в unstaged (новые).*

![09_status_double.png](screenshots_4/09_status_double.png)  

*Файл sort.c отображается дважды: в Changes to be committed и Changes not staged for commit.*

![10_restore_staged.png](screenshots_4/10_restore_staged.png)  

*Удаление файла из staging area (отмена git add).*

![11_status_after_restore.png](screenshots_4/11_status_after_restore.png)  

*Теперь все изменения только в unstaged области.*

![12_commit_changes.png](screenshots_4/12_commit_changes.png)  

*Фиксация всех текущих изменений в файле sort.c.*

![13_log_after_commit.png](screenshots_4/13_log_after_commit.png)  

*История коммитов после внесения изменений.*

![14_add_printf.png](screenshots_4/14_add_printf.png)  

*Добавление вывода сообщения в консоль.*

![15_check_content.png](screenshots_4/15_check_content.png)  

*Проверка, что printf добавлен правильно.*

![16_status_printf.png](screenshots_4/16_status_printf.png)  

*Git обнаружил новое изменение в файле.*

![17_restore_file.png](screenshots_4/17_restore_file.png)  

*Восстановление файла до состояния последнего коммита.*

![18_check_after_restore.png](screenshots_4/18_check_after_restore.png)  

*Убеждаемся, что printf удален из файла.*

![19_status_clean_again.png](screenshots_4/19_status_clean_again.png)  

*Рабочая директория снова чиста после восстановления файла.*

![20_push_mybranch.png](screenshots_4/20_push_mybranch.png)  

*Отправка обновленной ветки mybranch на удаленный репозиторий.*

---

## **Работа с ветками и merge**

![21_create_greeting.png](screenshots_4/21_create_greeting.png)  

*Создание нового файла в ветке master.*

![22_add_content.png](screenshots_4/22_add_content.png)  

*Добавление текста в файл greeting.txt.*

![23_create_feature_branch.png](screenshots_4/23_create_feature_branch.png)  

*Создание новой ветки с соглашением feature/* для изолированной разработки.*

![24_status_feature.png](screenshots_4/24_status_feature.png)  

*Статус Git в новой ветке feature/uppercase.*

![25_uppercase_hello.png](screenshots_4/25_uppercase_hello.png)  

*Изменение текста в файле на верхний регистр (HELLO).*

![26_commit_uppercase.png](screenshots_4/26_commit_uppercase.png)  

*Коммит изменений в ветке feature/uppercase.*

![27_list_branches.png](screenshots_4/27_list_branches.png)  

*Список всех локальных веток в репозитории.*

![28_all_branches_graph.png](screenshots_4/28_all_branches_graph.png)  

*Графическое представление истории всех веток.*

![29_switch_master.png](screenshots_4/29_switch_master.png)  

*Возврат на основную ветку master для слияния.*

![30_check_content_master.png](screenshots_4/30_check_content_master.png)  

*Проверка содержимого файла greeting.txt в ветке master.*

![31_diff_branches.png](screenshots_4/31_diff_branches.png)  

*Сравнение различий между ветками master и feature/uppercase.*

![32_merge_branches.png](screenshots_4/32_merge_branches.png)  

*Выполнение слияния ветки feature/uppercase в master.*

![33_check_after_merge.png](screenshots_4/33_check_after_merge.png)  

*Проверка содержимого файла после успешного слияния.*

![34_delete_branch.png](screenshots_4/34_delete_branch.png)  

*Удаление ненужной ветки feature/uppercase после слияния.*

![35_merge_mybranch.png](screenshots_4/35_merge_mybranch.png)  

*Слияние ветки mybranch в основную ветку master.*

![36_log_after_merge.png](screenshots_4/36_log_after_merge.png)  

*История коммитов после всех операций слияния.*

![37_push_master.png](screenshots_4/37_push_master.png)
  
*Отправка обновленной основной ветки master на удаленный репозиторий.*