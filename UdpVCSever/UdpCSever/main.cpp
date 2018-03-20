#include "stdio.h"  
#include "iostream"  
#include "Thread.h"
#include "Udp.h"

using namespace std;

int main(int argc, char* argv[])
{
	//�����߳�
	CreateThread(NULL, 0, ThreadReceive, NULL, 0, NULL);		//Model�߳�

	while (1)
	{
		//��ʾ�����̵߳ȴ�
		printf("main waitting...............\n");

		if (udpSever.RecvLen > 0)
		{
			//��ʾ��������
			printf("Receive length is %d\n", udpSever.RecvLen);
			printf("Receive data is %f\n", udpSever.RecvOutput);
			udpSever.RecvLen = 0;

			//���͸�����
			float cSendData = -11.11111;
			dataPack.PackPoint(cSendData);
			printf("Send Data: %f\n", cSendData);

			//���ݴ��
			dataPack.PackPoint3(0.22, 0.33, -0.44); //3����
			dataPack.PackPoint6(-11.1, -12.2,-13.3, -14.4, -15.5, -16.6); //6����
			//���ݷ���
			udpSever.SendData(dataPack.Data, dataPack.Length);
			dataPack.Length = 0;
		}
		Sleep(400);
	}

	udpSever.Close();

	//��ͣ�µȴ��û��鿴���
	system("pause");

	return 0;
}