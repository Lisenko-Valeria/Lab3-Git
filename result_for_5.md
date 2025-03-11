Оценка 5:
1.	Создать ветку branch1, переключиться на нее.
<img src="img/screen60.jpg"> 
2.	Выполнить команду
<img src="img/screen61.jpg"> 
3.	Закоммитить это изменение.
<img src="img/screen62.jpg"> 
4.	Переключиться на главную ветку и выполнить команду.
echo "This is an indispensable truth!" > file.txt.
5.	Закоммитить изменения в master.
<img src="img/screen63.jpg"> 
6.	Каков вывод git log --oneline --graph --all.
<img src="img/screen64.jpg"> 
7.	Использовать команду git merge, чтобы смержить ветку branch1 в master (получим конфликт, это норм).
8.	Что показывает git status?
<img src="img/screen65.jpg"> 
9.	Посмотреть содержимое файла file.txt и в любом любимом текстовом редакторе исправить конфликт. Желательно делать это в VSCode или любой другой умной среде, но если нет VSCode и не боитесь Vim и подобных редакторов, то можно через команду git mergetool.
<img src="img/screen66.jpg"> 
10.	Что показывает git log --oneline --graph?
<img src="img/screen67.jpg"> 
11.	Запушить изменения.
<img src="img/screen68.jpg"> 
<img src="img/screen69.jpg"> 
Починим Merge конфликты для сортировки MergeSort на Python. Содержимое base.py, lefty.py и righty.py находится в конце этого документа.
1.	Находясь в ветке master, создать файл mergesort.py с содержимым из base.py (см. приложение).
<img src="img/screen71.jpg"> 
2.	Проиндексировать файл и закоммитить.
<img src="img/screen72.jpg"> 
3.	Создать новую ветку Mergesort-Impl и переключиться на нее.
<img src="img/screen73.jpg"> 
4.	Содержимое файла mergesort.py заменить на код из righty.py.
<img src="img/screen74.jpg"> 
5.	Закоммитить изменения.
<img src="img/screen75.jpg"> 
6.	Переключиться на master и изменить все содержимое mergesort.py на lefty.py.
<img src="img/screen77.jpg"> 
<img src="img/screen76.jpg"> 
7.	Закоммитить изменения.
<img src="img/screen78.jpg"> 
8.	Что показывает git log --oneline --graph? так как мы находимся в main ветке, то отображаются коммит добавления mergesort.py и изменения его содержания на код из righty.py
<img src="img/screen79.jpg"> 
9.	Что показывает git branch?
<img src="img/screen80.jpg"> 
10.	Необходимо смержить Mergesort-Impl в master.
<img src="img/screen81.jpg"> 
<img src="img/screen82.jpg"> 
Различия состоят в том, что cтрочки left = m[:middle] и right = m[middle:] стоят в разном порядке, что не меняет сути и четвертая переменная называется разными именами, что также не меняет суть. complete merge
<img src="img/screen85.jpg"> 
Сделаем коммит
<img src="img/screen86.jpg"> 
11.	После исправления всех merge конфликтов запушить в master изменения.
12.	Запушить документ с результатами вашей работы
<img src="img/screen87.jpg">
<img src="img/screen88.jpg">  

