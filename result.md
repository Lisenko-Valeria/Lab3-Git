1.	Используйте git status, чтобы узнать, на какой ветке вы находитесь.
main
<img src="img/screen1.jpg">  
2.	Как выглядит git log?
<img src="img/screen2.jpg"> 
3.	Создайте файл sort.c и вставьте туда код функции любой сортировки (только ф-ия сортировки)
<img src="img/screen3.jpg"> 
4.	Как сейчас выглядит вывод git status?
добавился неотслеживаемый файл sort.c
<img src="img/screen4.jpg"> 
5.	Добавьте файл в область stage (add)
<img src="img/screen5.jpg">   
6.	Как сейчас выглядит git status?
<img src="img/screen6.jpg">   
7.	Закоммитить файл в репозиторий
<img src="img/screen7.jpg">  
8.	Как сейчас выглядит git status?
<img src="img/screen8.jpg">
9.	Добавить комментарий с любым текстом в этот же файл
<img src="img/screen9.jpg">
10.	 Как сейчас выглядит git status?
<img src="img/screen10.jpg">
11.	 Добавьте (add) изменение файла
12.	 Как сейчас выглядит git status?
<img src="img/screen12.jpg">
13.	 Измените файл еще раз (можно добавить еще комментарий или убрать старый)
14.	 Сделайте коммит
<img src="img/screen14.jpg">
15.	 Как сейчас выглядит status? Журнал (log)?
<img src="img/screen15.jpg">
16.	 Добавьте в stage и закоммитьте последнее изменение
<img src="img/screen16.jpg">
17.	 Запушим на удаленный репо (git push)
<img src="img/screen17.jpg">
Теперь мы немного поиграем с ветками. 
1.	Используйте git branch mybranch (или git checkout -b mybranch), чтобы создать новую ветку с именем mybranch.
2.	Снова используйте git branch, чтобы увидеть новую созданную ветку.
3.	Используйте git switch mybranch (или git checkout mybranch), чтобы переключиться на новую ветку.
<img src="img/screen18.jpg">
4.	Как изменяется вывод git status при переключении между master и новой веткой, которую вы создали?
<img src="img/screen19.jpg">
<img src="img/screen20.jpg">
5.	Убедитесь, что вы находитесь на своей ветке mybranch, прежде чем продолжить.
<img src="img/screen21.jpg">
6.	Создайте файл с именем file1.txt и своим именем.
7.	Добавьте файл и закоммитьте это изменение.
8.	Используйте git log --oneline --graph, чтобы увидеть, что ваша ветка указывает на новый коммит.
<img src="img/screen22.jpg">
9.	Вернитесь к ветке с именем master.
10.	Используйте git log --oneline --graph, что изменилось?
Пропал новый коммит о добавлении txt файла, изменился указатель HEAD на последний коммит в текущей ветке, так как ветка поменялась 
<img src="img/screen23.jpg">
11.	Создайте новый файл с именем file2.txt и закоммитьте его.
12.	Используйте git log --oneline --graph --all, чтобы увидеть, что ваша ветка указывает на новый коммит, и что теперь у двух веток разные коммиты.
<img src="img/screen24.jpg">
13.	Переключитесь на вашу ветку mybranch.
14.	Наш file2.txt пропал?
да
<img src="img/screen25.jpg">
15.	Используйте git diff mybranch master, чтобы увидеть разницу между двумя ветками.
<img src="img/screen26.jpg">
16.	 Добавить текстовый документ со скриншотами в ветку mybranch. Закоммитить и запушить на удаленный репо ветку mybranch (git push -u origin mybranch)
<img src="img/screen17.jpg">
17.	 Убедиться что в github.com две ветки master и mybranch. Не забыть запушить изменения master ветки в master
<img src="img/screen17.jpg">
