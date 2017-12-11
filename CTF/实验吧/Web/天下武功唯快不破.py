import base64
import urllib2
import urllib
url = 'http://ctf5.shiyanbar.com/web/10/10.php'
request = urllib2.Request(url)
response = urllib2.urlopen(request)
flag = response.info().getheader('FLAG')
flag = base64.b64decode(flag)
flag = flag.split(':')[1]

postdata = urllib.urlencode({'key': flag})
request1 = urllib2.Request(url, data=postdata)
response1 = urllib2.urlopen(request1)
print response1.read()
