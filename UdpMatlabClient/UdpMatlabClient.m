clc
clear

ip='192.168.1.102'; 
port=8085;

data_all=[];%���ڴ洢���е�����
u = udp(ip, port, 'Timeout', 60,'InputBufferSize',10240);%�������ip������˿ڵ�UDP��������60�볬ʱ�������С1024
fopen(u);
fwrite(u,-15.6,'float');    %����һ�����ݸ�udp����������������֪��matlab��ip�Ͷ˿�

t=1;
recLen=1;
while(1)
    %����
    receive = fread(u,recLen,'float')
    %����
    fwrite(u,-125.622,'float');
    t=t+1
end

fclose(u);
delete(u);
