#pragma once

#ifndef _Thread_H
#define _Thread_H

#include "stdio.h"  
#include "iostream"  
#include "Udp.h"
#include "DataPack.h"

DWORD WINAPI ThreadReceive(LPVOID lpParam);

//���ݰ���ʼ��
extern DataPack dataPack;

//UDP��ʼ��
extern UdpSever udpSever;

#endif






