#pragma once

#ifndef _DATAPACK_H
#define _DATAPACK_H

//�������ݰ���,���������͵����ݽ��д��
class DataPack
{
public: //���г�Ա
	char Data[200];//���ݰ����� 
	char Length;//���ݰ�����

public: //���з���
	void PackPoint(float Point); //��������
	void PackPoint3(float P1, float P2, float P3); //3����
	void PackPoint6(float P1, float P2, float P3, float P4, float P5, float P6); //6����
	//���ݰ�֡β
	void PackEnd();
	//������
	void PackAnalyze(char *data_buf, char num, float *output); 
};


#endif
