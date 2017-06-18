Packet List&&Packet Details&&Packet Bytes
Packet Details分别是 链路，网络，运输，应用

在展开的数据包中选中后右击可以添加到列
点击选中一个包，右键选择Follow(追踪流)--TCP Stream，可查看包的详细内容
点击任意协议，右键Wiki Protocol Page(wiki 协议界面)可以查看该协议页面

IP过滤（如：ip.addr == x.x.x.x，ip.src == x.x.x.x, ip.dst == x.x.x.x）
协议过滤（如：HTTP、HTTPS、SMTP、ARP等）
端口过滤（如：tcp.port == 21、udp.port == 53）
组合过滤（如：ip.addr == x.x.x.x && tcp.port == 21、tcp.port == 21 or udp.port == 53）


TCP抓包分析
用 tcp.flags.syn == 1 过滤三次握手的包
用 tcp.flags.fin == 1  过滤得四次断开的包 //TCP包中Info列标志位为[FIN,ACK]的包是TCP四次断开的包

通过高亮显示颜色来推断出一个完整的会话//高亮显示三次握手和四次断开
选好某帧	右击->对话着色(Colorize Conversation)->TCP->Color1

为了方便分析可以File->Export Specified Packets(导出特定分组...)然后在Range: 70 - 90就会导出你要的那块
