/* ����˵�� UDP�׽���ͨ��ʾ��*/

#ifndef UDPMODEL_H
#define UDPMODEL_H

#include "Winsock2.h"  
#include "iostream"  
#include "stdio.h"  
#pragma comment(lib, "ws2_32.lib")  


//�������ݴ�����*��������
class UdpSever
{
private: //˽�г�Ա
	//Ĭ�϶˿�
	#define MODEL_PORT		    8085  

	SOCKET socServer;
	SOCKADDR_IN addrSrv;
	// a instance of SOCKADDR_IN, which is used in format of SOCKADDR.  
	SOCKADDR_IN addr_Clt;

public: //���г�Ա
	char RecvBuf[100];
	char RecvLen = 0;
	float RecvOutput;

public: //���з���
	//���캯��
	UdpSever();
	
	void Init();
	void Close();
	void SendData(char *dataToSend, char length);
	void ReceiveData(char *dataRecv, char *length);
};


#endif