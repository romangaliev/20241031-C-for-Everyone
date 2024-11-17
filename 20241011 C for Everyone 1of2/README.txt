https://www.coursera.org/learn/c-for-everyone
"C for Everyone: Programming Fundamentals"
this is part 1 of 2 parts of the "C for Everyone"

and 1 of 4 parts of 
"Coding for Everyone: C and C++ Specialization"
https://www.coursera.org/specializations/coding-for-everyone
///////
Link to the sharable certificate ( grades are not public) 
https://coursera.org/share/917e71de1c1355e1667261fd1aae20f5
Grade Achieved: 95.76%
https://www.coursera.org/verify/CVES0ROUCXWW
->
https://www.coursera.org/account/accomplishments/verify/CVES0ROUCXWW

///////////////////////
С помощью .gitignore Исключиl папку .vs из комита, так как она тяжёлая
==========
1) каждый новый .С файл добавляем путем добавления нового проекта к солюшину
И делаем это с помощью моейго темплейта, который создаёт уже .С файл
Называется "C project 64 bit template" 

2) Затем в свойствах проекта меняем стартовый проект на новый.

3) А предыдущий проект выгружаем из солюшина, чтобы он заново не дебажился

4) ПЕРЕД КОММИТОМ готового проекта
Обязательно удаляем папки x64 и Debug в корневой папке солющина и папке проекта
так как они весят по 60МБ, чтобы не пушить их на GitHub.
Оставляем только 4 служебных маленьких файла
....c
.vcxproj
.vcxproj.filters
.vcxproj.user

5)после этого комитим. И переходим к новому проекту.Понеслась!
git add .
git commit -m "5.1.х соощение - DONE"
git push origin master

===
Удаление последнего неправильного комита (файлы исходников не удаляются, только комит)
git reset HEAD~1
