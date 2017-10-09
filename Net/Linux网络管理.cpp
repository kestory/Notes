1-1
ISO:	国际标准组织 		International Standardization Organization
OSI:	开放系统互联模式 	Open System Interconnect Reference Model
IOS:	国际标准化组织 	International Organization for Standardization
	网间网操作系统 	Internet work 0perating System

2-1
//Linux配置IP方法
1.ifconfig配置临时IP
2.setup工具配置永久IP
3.修改网络配置文件
4.图形界面配置IP
// 如果在局域网中有可自动分配IP的服务器(DHCP 服务器), 则可设置自动获取IP. 如果没有DHCP服务器则需要手动设置IP.

1 ifconfig 命令临时配置IP 地址
// 临时配置, 重启计算机或服务, 即失效.
// 一般用于做实验和测试.
1-1 主要用于查看网络状态
1-1-1 lo : Local Loopback 本地网卡
// 任何计算机都有，不插网线都可以ping通
1-2 eth : 实际网卡
1-2-1 encap : 网卡类型
1-2-2 HWaddr : MAC地址
1-2-3 Bcast : 广播地址
1-2-4 UP BROADCAST... : 网卡参数
1-2-5 RX : 当前 接收 数据包数量
1-2-6 TX : 当前 发送 数据包数量
1-2-7 Base address : 网卡在内存中实际地址
// 有时, 通过配置修改后未必生效, 会有IP冲突, 网卡损坏等原因造成, 必须是在命令行中可查看到的, 视为生效.
1-3 临时配置IP 和 子网掩码
// ifconfig eth0 192.168.0.200 netmask 255.255.255.0

2 setup 工具永久配置 IP 地址
// 属于redhat系列专有命令
// 配置成功后需重启服务 : service network restart

