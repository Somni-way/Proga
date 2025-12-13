# Лабораторная работа №9 — Git

---
![mem](https://cs15.pikabu.ru/post_img/2024/07/31/6/1722417904146575878.jpg)
___

## **Оценка 3**

1. **Инициализация и проверка состояния**  
   ![01_git_status.png](screenshots/01_git_status.png)
   > Команда показывает текущее состояние рабочей директории. На этом этапе репозиторий чист.

2. **Просмотр истории коммитов**  
   ![02_git_log.png](screenshots/02_git_log.png)
   > История коммитов пуста, так как это новый репозиторий.

3. **Создание файла с кодом**  
   ![03_create_sort_c.png](screenshots/03_create_sort_c.png)
   > Создание файла с функцией сортировки (пузырьковая сортировка).

4. **Проверка состояния после создания файла**  
   ![04_status_untracked.png](screenshots/04_status_untracked.png)
   > Файл не появился в списке, так как не выполнена команда git add.

5. **Добавление файла в staging area**  
   ![05_git_add.png](screenshots/05_git_add.png)
   > Команда добавляет файл в область подготовки (staging area).

6. **Проверка состояния после добавления**  
   ![06_status_staged.png](screenshots/06_status_staged.png)
   > Теперь файл находится в "Changes to be committed" - готов к коммиту.

7. **Фиксация изменений**  
   ![07_git_commit.png](screenshots/07_git_commit.png)
   > Фиксация изменений с описательным сообщением.

8. **Проверка чистоты рабочей директории**  
   ![08_status_clean.png](screenshots/08_status_clean.png)
   > Рабочая директория чиста - все изменения зафиксированы.

9. **Добавление комментария к коду**  
   ![09_add_comment.png](screenshots/09_add_comment.png)
   > Добавляем комментарий к коду для документации.

10. **Обнаружение изменений Git**  
    ![10_modified_file.png](screenshots/10_modified_file.png)
    > Git обнаружил изменения в файле, но они еще не проиндексированы.

11. **Добавление изменений в staging area**  
    ![11_add_modified.png](screenshots/11_add_modified.png)
    > Добавляем изменения в staging area.

12. **Подготовка к коммиту**  
    ![12_ready_to_commit.png](screenshots/12_ready_to_commit.png)
    > Изменения готовы для коммит.

13. **Добавление второго комментария**  
    ![13_second_change.png](screenshots/13_second_change.png)
    > Добавляем второй комментарий.

14. **Фиксация второго набора изменений**  
    ![14_second_commit.png](screenshots/14_second_commit.png)
    > Фиксация второго набора изменений.

15. **Проверка состояния и истории**  
    ![15_status_and_log.png](screenshots/15_status_and_log.png)
    > Проверяем состояние и смотрим историю.

16. **Завершение работы с файлом sort.c**  
    ![16_final_commit.png](screenshots/16_final_commit.png)
    > Завершаем работу с файлом sort.c.

17. **Синхронизация с удаленным репозиторием**  
    ![17_git_push.png](screenshots/17_git_push.png)
    > Синхронизация локальных изменений с удаленным репозиторием.

18. **Создание ветки**  
    ![18_create_branch.png](screenshots/18_create_branch.png)
    > Создание ветки "mybranch" для изолированной разработки.

19. **Переход на созданную ветку**  
    ![19_switch_branch.png](screenshots/19_switch_branch.png)
    > Переход на созданную ветку для работы в ней.

20. **Сравнение статуса в ветках**  
    ![20_compare_status.png](screenshots/20_compare_status.png)
    > Показывает, что статус одинаков в обеих ветках до внесения изменений.

21. **Создание файла в ветке mybranch**  
    ![21_create_file1.png](screenshots/21_create_file1.png)
    > Создание файла с именем пользователя в ветке mybranch.

22. **Фиксация изменений в ветке mybranch**  
    ![22_commit_file1.png](screenshots/22_commit_file1.png)
    > Фиксация изменений в ветке mybranch.

23. **Визуализация истории коммитов**  
    ![23_log_graph.png](screenshots/23_log_graph.png)
    > Визуализация истории коммитов с отображением ветвления.

24. **Переключение обратно на master**  
    ![24_switch_master.png](screenshots/24_switch_master.png)
    > Переключение обратно на основную ветку master.

25. **Создание отдельного файла в master**  
    ![25_create_file2.png](screenshots/25_create_file2.png)
    > Создание отдельного файла в ветке master, чтобы показать различия.

26. **Отображение истории всех веток**  
    ![26_all_branches.png](screenshots/26_all_branches.png)
    > Отображение истории всех веток, показывает расхождение master и mybranch.

27. **Проверка файлов в ветках**  
    ![27_check_files.png](screenshots/27_check_files.png)
    > В ветке mybranch есть file1.txt, но нет file2.txt (который создан в master).

28. **Показать различия между ветками**  
    ![28_diff_branches.png](screenshots/28_diff_branches.png)
    > Показывает различия между ветками - какие файлы и изменения есть в одной ветке, но нет в другой.

29. **Пушим mybranch на GitHub**  
    ![29_push_mybranch.png](screenshots/29_push_mybranch.png)
    > Пушим mybranch и проверяем его на GitHub.

---

## **Оценка 4**

1. **Переход на ветку mybranch**  
   ![01_switch_mybranch.png](screenshots_4/01_switch_mybranch.png)
   > Переход на ветку mybranch для продолжения работы.

2. **Добавление функции main() в sort.c**  
   ![02_add_main.png](screenshots_4/02_add_main.png)
   > Добавление функции main() в файл sort.c для тестирования сортировки.

3. **Показать незаиндексированные изменения**  
   ![03_git_diff.png](screenshots_4/03_git_diff.png)
   > Команда показывает все незаиндексированные изменения в файле sort.c.

4. **Проверка staged области**  
   ![04_diff_staged.png](screenshots_4/04_diff_staged.png)
   > В staged области пока нет изменений (пусто).

5. **Индексация изменений файла sort.c**  
   ![05_add_to_stage.png](screenshots_4/05_add_to_stage.png)
   > Индексация изменений файла sort.c.

6. **Проверка изменений после add**  
   ![06_diff_after_add.png](screenshots_4/06_diff_after_add.png)
   > После add изменения перешли в staged, поэтому git diff пуст, а git diff --staged показывает изменения.

7. **Изменение массива в функции main()**  
   ![07_remove_number.png](screenshots_4/07_remove_number.png)
   > Изменение массива в функции main() - удаление одного элемента.

8. **Показать изменения после правки**  
   ![08_diff_after_change.png](screenshots_4/08_diff_after_change.png)
   > Теперь есть изменения и в staged (старые), и в unstaged (новые).

9. **Статус файла sort.c**  
   ![09_status_double.png](screenshots_4/09_status_double.png)
   > Файл sort.c отображается дважды: в Changes to be committed и Changes not staged for commit.

10. **Удаление файла из staging area**  
    ![10_restore_staged.png](screenshots_4/10_restore_staged.png)
    > Удаление файла из staging area (отмена git add).

11. **Статус после восстановления**  
    ![11_status_after_restore.png](screenshots_4/11_status_after_restore.png)
    > Теперь все изменения только в unstaged области.

12. **Фиксация текущих изменений**  
    ![12_commit_changes.png](screenshots_4/12_commit_changes.png)
    > Фиксация всех текущих изменений в файле sort.c.

13. **История коммитов после изменений**  
    ![13_log_after_commit.png](screenshots_4/13_log_after_commit.png)
    > История коммитов после внесения изменений.

14. **Добавление вывода в консоль**  
    ![14_add_printf.png](screenshots_4/14_add_printf.png)
    > Добавление вывода сообщения в консоль.

15. **Проверка содержимого файла**  
    ![15_check_content.png](screenshots_4/15_check_content.png)
    > Проверка, что printf добавлен правильно.

16. **Обнаружение нового изменения**  
    ![16_status_printf.png](screenshots_4/16_status_printf.png)
    > Git обнаружил новое изменение в файле.

17. **Восстановление файла до последнего коммита**  
    ![17_restore_file.png](screenshots_4/17_restore_file.png)
    > Восстановление файла до состояния последнего коммита.

18. **Проверка после восстановления**  
    ![18_check_after_restore.png](screenshots_4/18_check_after_restore.png)
    > Убеждаемся, что printf удален из файла.

19. **Рабочая директория снова чиста**  
    ![19_status_clean_again.png](screenshots_4/19_status_clean_again.png)
    > Рабочая директория снова чиста после восстановления файла.

20. **Отправка обновленной ветки mybranch**  
    ![20_push_mybranch.png](screenshots_4/20_push_mybranch.png)
    > Отправка обновленной ветки mybranch на удаленный репозиторий.

21. **Создание нового файла в master**  
    ![21_create_greeting.png](screenshots_4/21_create_greeting.png)
    > Создание нового файла в ветке master.

22. **Добавление текста в файл greeting.txt**  
    ![22_add_content.png](screenshots_4/22_add_content.png)
    > Добавление текста в файл greeting.txt.

23. **Создание новой ветки feature/uppercase**  
    ![23_create_feature_branch.png](screenshots_4/23_create_feature_branch.png)
    > Создание новой ветки с соглашением feature/* для изолированной разработки.

24. **Статус Git в новой ветке**  
    ![24_status_feature.png](screenshots_4/24_status_feature.png)
    > Статус Git в новой ветке feature/uppercase.

25. **Изменение текста на верхний регистр**  
    ![25_uppercase_hello.png](screenshots_4/25_uppercase_hello.png)
    > Изменение текста в файле на верхний регистр (HELLO).

26. **Коммит изменений в ветке feature/uppercase**  
    ![26_commit_uppercase.png](screenshots_4/26_commit_uppercase.png)
    > Коммит изменений в ветке feature/uppercase.

27. **Список всех локальных веток**  
    ![27_list_branches.png](screenshots_4/27_list_branches.png)
    > Список всех локальных веток в репозитории.

28. **Графическое представление истории всех веток**  
    ![28_all_branches_graph.png](screenshots_4/28_all_branches_graph.png)
    > Графическое представление истории всех веток.

29. **Возврат на основную ветку master**  
    ![29_switch_master.png](screenshots_4/29_switch_master.png)
    > Возврат на основную ветку master для слияния.

30. **Проверка содержимого файла в master**  
    ![30_check_content_master.png](screenshots_4/30_check_content_master.png)
    > Проверка содержимого файла greeting.txt в ветке master.

31. **Сравнение различий между ветками**  
    ![31_diff_branches.png](screenshots_4/31_diff_branches.png)
    > Сравнение различий между ветками master и feature/uppercase.

32. **Выполнение слияния веток**  
    ![32_merge_branches.png](screenshots_4/32_merge_branches.png)
    > Выполнение слияния ветки feature/uppercase в master.

33. **Проверка содержимого файла после слияния**  
    ![33_check_after_merge.png](screenshots_4/33_check_after_merge.png)
    > Проверка содержимого файла после успешного слияния.

34. **Удаление ненужной ветки**  
    ![34_delete_branch.png](screenshots_4/34_delete_branch.png)
    > Удаление ненужной ветки feature/uppercase после слияния.

35. **Слияние ветки mybranch в master**  
    ![35_merge_mybranch.png](screenshots_4/35_merge_mybranch.png)
    > Слияние ветки mybranch в основную ветку master.

36. **История коммитов после всех операций слияния**  
    ![36_log_after_merge.png](screenshots_4/36_log_after_merge.png)
    > История коммитов после всех операций слияния.

37. **Отправка обновленной ветки master**  
    ![37_push_master.png](screenshots_4/37_push_master.png)
    > Отправка обновленной основной ветки master на удаленный репозиторий.

---

## **Оценка 5**

### **Конфликты с файлом file.txt**

1. **Создание новой ветки branch1**  
   ![01_create_branch1.png](screenshots_5/01_create_branch1.png)
   > Создание новой ветки branch1.

2. **Создание файла file.txt в ветке branch1**  
   ![02_create_file_txt.png](screenshots_5/02_create_file_txt.png)
   > Создание файла file.txt в ветке branch1 со строкой "This is a relevant fact".

3. **Фиксация изменений в ветке branch1**  
   ![03_commit_branch1.png](screenshots_5/03_commit_branch1.png)
   > Фиксация изменений в ветке branch1 при помощи коммита.

4. **Создание конфликтующего изменения в master**  
   ![04_conflict_master.png](screenshots_5/04_conflict_master.png)
   > Создание конфликтующего изменения в основной ветке master - тот же файл file.txt получает другое содержимое.

5. **Просмотр истории коммитов перед слиянием**  
   ![05_log_before_merge.png](screenshots_5/05_log_before_merge.png)
   > Просмотр истории коммитов - видны расходящиеся ветки master и branch1.

6. **Попытка слияния приводит к конфликту**  
   ![06_merge_conflict.png](screenshots_5/06_merge_conflict.png)
   > Попытка слияния ветки branch1 в master приводит к конфликту - Git не может автоматически определить, какую версию файла оставить.

7. **Статус Git показывает конфликт**  
   ![07_status_conflict.png](screenshots_5/07_status_conflict.png)
   > Статус Git показывает файл file.txt в состоянии конфликта - требуется ручное разрешение.

8. **Ручное редактирование файла для разрешения конфликта**  
   ![08_resolve_conflict.png](screenshots_5/08_resolve_conflict.png)
   > Ручное редактирование файла file.txt для разрешения конфликта - удаление маркеров и оставление единственной версии.

9. **Фиксация разрешенного конфликта**  
   ![09_commit_resolution.png](screenshots_5/09_commit_resolution.png)
   > Фиксация разрешенного конфликта при помощи коммита.

10. **Просмотр истории после разрешения конфликта**  
    ![10_log_after_resolution.png](screenshots_5/10_log_after_resolution.png)
    > Просмотр истории после успешного разрешения конфликта - видно слияние веток с созданием merge коммита.

11. **Отправка обновленной ветки master**  
    ![11_push_after_conflict.png](screenshots_5/11_push_after_conflict.png)
    > Отправка обновленной ветки master на удаленный репозиторий.

### **Конфликты с mergesort.py**

12. **Создание базовой версии файла mergesort.py**  
    ![12_create_base.png](screenshots_5/12_create_base.png)
    > Создание базовой версии файла mergesort.py с заглушкой.

13. **Фиксация базовой реализации в master**  
    ![13_commit_base.png](screenshots_5/13_commit_base.png)
    > Фиксация базовой реализации в основной ветке master.

14. **Создание отдельной ветки Mergesort-Impl**  
    ![14_create_impl_branch.png](screenshots_5/14_create_impl_branch.png)
    > Создание отдельной ветки Mergesort-Impl.

15. **Реализация сортировки слиянием - версия "righty"**  
    ![15_righty_implementation.png](screenshots_5/15_righty_implementation.png)
    > Реализация сортировки слиянием в ветке Mergesort-Impl - версия "righty".

16. **Фиксация "righty" в ветке Mergesort-Impl**  
    ![16_commit_righty.png](screenshots_5/16_commit_righty.png)
    > Фиксация "righty" в ветке Mergesort-Impl.

17. **Альтернативная реализация сортировки - "lefty"**  
    ![17_lefty_implementation.png](screenshots_5/17_lefty_implementation.png)
    > Альтернативная реализация сортировки - "lefty" в основной ветке master.

18. **Фиксация "lefty" в ветке master**  
    ![18_commit_lefty.png](screenshots_5/18_commit_lefty.png)
    > Фиксация "lefty" в ветке master.

19. **Просмотр истории перед слиянием**  
    ![19_log_before_merge_py.png](screenshots_5/19_log_before_merge_py.png)
    > Просмотр истории перед слиянием - видны две ветки с разными кодами для сортировки.

20. **Попытка слияния приводит к сложному конфликту**  
    ![20_merge_conflict_py.png](screenshots_5/20_merge_conflict_py.png)
    > Попытка слияния ветки Mergesort-Impl в master приводит к сложному конфликту в коде Python.

21. **Ручное разрешение конфликта в mergesort.py**  
    ![21_resolve_py_conflict.png](screenshots_5/21_resolve_py_conflict.png)
    > Ручное разрешение конфликта в файле mergesort.py.

22. **Финальный коммит после разрешения конфликтов**  
    ![22_commit_merge_resolution.png](screenshots_5/22_commit_merge_resolution.png)
    > Финальный коммит после успешного разрешения всех конфликтов кода.
