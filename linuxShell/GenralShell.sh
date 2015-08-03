:<<!/*
 * GenralShell.c
 *
 *  Created on: 2015年8月3日
 *      Author: Song Zhi-Cheng
 */
！
grep 做文本查找
sed做文本编辑
awk做文本匹配处理，功能强大，有函数和逻辑控制
#!/bin/sh

#统计文章中出现的字数，行数
#当前目录下文件的个数#统计abc.txt文件中的行数、字数、以及所占字节数-
----------
ls |wc -l
cat abc.txt |wc 
----------



employee文件中记录了工号和姓名
employee.txt:
100 Jason Smith 
200 John Doe 
300 Sanjay Gupta 
400 Ashok Sharma 
bonus文件中记录工号和工资
bonus.txt:
100 $5,000 
200 $500 
300 $3,000 
400 $1,250 
要求把两个文件合并并输出如下
处理结果:
400 ashok sharma $1,250
100 jason smith  $5,000
200 john doe  $500
300 sanjay gupta  $3,000
----------------------------------------------
join nonus.txt employee.txt
----------------------------------------------





查询系统虚拟分区的大小（-F后边的''中间有空格）
-------------------------
free -m|grep Swap|awk -F ' '  '{print $2;}'
---------------------------


输出本机创建20000个目录所用的时间
time for i in {1..2000} ; do mkdir /root/neil$i; done



打印当前sshd的端口和进程id
netstat -anp | grep sshd | sed -n 's/.*:::\([0-9]*\)\ .* \ \([0-9]*\)\/sshd/\1 \2/p'



打印root可以使用可执行文件数
echo "root's bins: $(find ./ -type f | xargs ls -l | sed '/-..x/p' | wc -l)"




将一目录下所有的文件的扩展名改为bak
ls -l |grep -v "total"|awk '{print $9}'|sed s#.*#.b#gp
