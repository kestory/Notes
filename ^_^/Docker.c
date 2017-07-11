http://thoreauz.com/2017/02/14/docker/Docker%E5%AE%89%E8%A3%85%E4%B9%8BMAC/
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
docker start ics-vm
ssh -p 20022 kestory@192.168.99.100

docker stop ics-vm
docker-machine stop ls
docker-machine stop default
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
镜像（Image）
容器（Container）

镜像是静态的定义，容器是镜像运行时的实体。容器可以被创建、启动、停止、删除、暂停等。


仓库（Repository）

Docker 仓库的概念跟 Git 类似，注册服务器可以理解为 GitHub 这样的托管服务。

一个 Docker Registry 中可以包含多个仓库（Repository）；
每个仓库可以包含多个标签（Tag）；
每个标签对应一个镜像。

以 Ubuntu 镜像 为例，ubuntu 是仓库的名字，其内包含有不同的版本标签，如，14.04, 16.04。
我们可以通过 ubuntu:14.04，或者 ubuntu:16.04 来具体指定所需哪个版本的镜像。
如果忽略了标签，比如 ubuntu，那将视为 ubuntu:latest。

仓库名经常以 两段式路径 形式出现，比如 jwilder/nginx-proxy，
前者往往意味着 Docker Registry 多用户环境下的用户名，后者则往往是对应的软件名。
但这并非绝对，取决于所使用的具体 Docker Registry 的软件或服务。
------------------------------------------------------------------------------------------------------------------------------------------------
mkdir mydocker     # create a directory with name "mydocker"
cd mydocker        # enter this directory
touch Dockerfile   # create an empty file with name "Dockerfile", make sure the "D" is capital
创建一个目录，里面放 Dockerfile
ics 的 docker 内容
/*
 # setting base image
FROM 32bit/debian

 # setting source list
RUN echo "deb http://mirrors.163.com/debian/ jessie main non-free contrib" > /etc/apt/sources.list

 # installing tool `gosu`
ENV GOSU_VERSION 1.7
RUN set -x \
    && apt-get update && apt-get install -y --no-install-recommends ca-certificates wget \
    && wget -O /usr/local/bin/gosu "https://github.com/tianon/gosu/releases/download/$GOSU_VERSION/gosu-$(dpkg --print-architecture)" \
    && wget -O /usr/local/bin/gosu.asc "https://github.com/tianon/gosu/releases/download/$GOSU_VERSION/gosu-$(dpkg --print-architecture).asc" \
    && export GNUPGHOME="$(mktemp -d)" \
    && gpg --keyserver ha.pool.sks-keyservers.net --recv-keys B42F6819007F00F88E364FD4036A9C25BF357DD4 \
    && gpg --batch --verify /usr/local/bin/gosu.asc /usr/local/bin/gosu \
    && rm -r "$GNUPGHOME" /usr/local/bin/gosu.asc \
    && chmod +sx /usr/local/bin/gosu \
    && gosu nobody true

 # installing ssh server
RUN apt-get install -y openssh-server
 # defining a variable
ARG username=ics
ARG userpasswd=ics

 # adding user
RUN useradd -ms /bin/bash $username && (echo $username:$userpasswd | chpasswd)

 # setting login user
USER $username
WORKDIR /home/$username

 # setting `sudo` as an alias of `gosu`
RUN echo "alias sudo='gosu root'" >> ~/.bashrc

 # add search path to use `dpkg`
RUN echo "export PATH=$PATH:/usr/local/sbin:/usr/sbin:/sbin" >> ~/.bashrc

 # setting running application
CMD gosu root /usr/sbin/sshd -D

*/
# replace `jack` and `123456` with a username and password you prefer
docker build -t ics-image --build-arg username=jack --build-arg userpasswd=123456 .
// 后面那个点不是句号，指 Dockerfile 所在目录，也可以指定Dockerfile 的绝对路径
// -t 指定要创建的目标镜像名
// --build-arg=[] :设置镜像创建时的变量
docker images
REPOSITORY           TAG          IMAGE ID          CREATED             SIZE
ics-image            latest       7d9495d03763      4 minutes ago       475.7 MB
32bit/debian         latest       fb434121fc77      4 hours ago         272 MB

cd ..           # go back to the parent directory
rm -r mydocker  # remove the `mydocker` directory
//Dockerfile 写完就可以删了
## building the image  ---> create a container

# Creating Debian container
docker create -it --name=ics-vm -p 20022:22 ics-image

解决GDB不能使用的问题
$ docker stop ics-vm
$ docker commit ics-vm ics-intermediate-image
$ docker rm ics-vm
$ docker create -it --name=ics-vm -p 20022:22 --security-opt seccomp=unconfined ics-intermediate-image
------------------------------------------------------------------------------------------------------------------------------------------------
输入 docker 这个命令其实是运行了 Docker 的二进制执行文件，再想想，很多命令都是这样。

docker build  	: 使用 Dockerfile 创建镜像
docker run     	: 创建一个新的容器并运行一个命令
docker create 	: 创建一个新的容器但不启动它



docker run -it ubuntu /bin/bash和在那个GUI里以命令行方式打开一样
