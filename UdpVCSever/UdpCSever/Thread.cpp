
#include "Thread.h"


//���ݰ���ʼ��
DataPack dataPack;

//UDP��ʼ��
UdpSever udpSever;


DWORD WINAPI ThreadReceive(LPVOID lpParam)
{
	while (1)
	{
		printf("Receive Data...\n");
		udpSever.ReceiveData(udpSever.RecvBuf, &udpSever.RecvLen);//���ݽ���
		dataPack.PackAnalyze(udpSever.RecvBuf, udpSever.RecvLen, &udpSever.RecvOutput);//���ݷ���

	}
	return 0;
}





