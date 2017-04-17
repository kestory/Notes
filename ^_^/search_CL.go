https://www.zhihu.com/question/20161362
https://sspai.com/post/34150
双引号 完全匹配搜索
减号 减号前面必须是空格，减号后面紧跟着需要排除的词
	南京大学 -研究生
	苹果 -手机
星号*是常用的通配符
	搜索*擎
	许*谦
intitle: 指令返回的是页面 title 中包含关键词的页面//in&&all
allintitle:搜索返回的是页面标题中包含多组关键词的文件。
	allintitle:SEO 搜索引擎优化
	==intitle:SEO intitle:搜索引擎优化

inurl: 指令用于搜索查询词出现在 url 中的页面。返回的结果都是网址url 中包含“搜索引擎优化”的页面
	inurl:搜索引擎优化
	inurl:github kestory//通过这个命令我找到了我以前删掉的rep的连接，然后打开404 not found哈哈
allinurl:SEO 搜索引擎优化
	==inurl:SEO inurl:搜索引擎优化

inanchor:指令返回的结果是导入链接锚文字中包含搜索词的页面。
	inanchor:点击这里//返回的结果页面本身并不一定包含“点击这里”这四个字
	//而是指向这些页面的链接锚文字中出现了“点击这里”这四个字。可以用来找到某个关键词的竞争对收
related:返回与某个网站有关联的页面
	related:http://cnseotool.com
	//得到与点石网站有关联的其他页面。 这种关联一般认为指的是有共同外部链接的网站。
filetype:pdf
site:www.zhihu.com

You have designed the search engine, you know you should not ask her question.
Think about how an answer would be phrased, and search that.

Want:NYTimes articles about test scores in college, but not the SATs, written between 2008 and 2010.
How:
site:nytimes.com ~college "test scores" -SATs 2008..2010

Want:A report on the different air speed velocities(速率) of common swallows.
How:
filetype:pdf air speed intitle:velocity of *swallow
"Google Scholar"
Want:Papers about photosynthesis(光合作用) by Dr. Ronald L. Green and Dr. Thomas P. Buttz.
How:
author:green photosynthesis
"Others"
define:happy
1/7*(5-4)+8
100pounds=?kg



