#ifndef __DS18B20_H
#define __DS18B20_H 
#include "sys.h"   
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
//ALIENTEKս��STM32������
//DS18B20��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/12
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) �������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
//////////////////////////////////////////////////////////////////////////////////

//IO��������
#define DS18B20_IO_IN()  {GPIOG->CRH&=0XFFFF0FFF;GPIOG->CRH|=8<<12;}
//  GPIOG->CRH&=0XFFFF0FFF;GPIOG->CRH|=8<<12; //��PG11����Ϊ����ģʽ����
//	GPIOG->CRH=0XFFFF8FFF����Ĵ���λ����CNF1��CNF0��MODE1��MODE0�ֱ���1000.�������������롣
#define DS18B20_IO_OUT() {GPIOG->CRH&=0XFFFF0FFF;GPIOG->CRH|=3<<12;}
//  GPIOG->CRH&=0XFFFF0FFF;GPIOG->CRH|=3<<12;//�ǰ�PG11����Ϊ�������ģʽ����
//  GPIOG->CRH&=0XFFFF3FFF����Ĵ���λ����CNF1��CNF0��MODE1��MODE0�ֱ���0011.����������ٶ�Ϊ50HZ��

////IO��������											   
#define	DS18B20_DQ_OUT PGout(11) //���ݶ˿�	PA0 
#define	DS18B20_DQ_IN  PGin(11)  //���ݶ˿�	PA0 
   	
u8 DS18B20_Init(void);//��ʼ��DS18B20
short DS18B20_Get_Temp(void);//��ȡ�¶�
void DS18B20_Start(void);//��ʼ�¶�ת��
void DS18B20_Write_Byte(u8 dat);//д��һ���ֽ�
u8 DS18B20_Read_Byte(void);//����һ���ֽ�
u8 DS18B20_Read_Bit(void);//����һ��λ
u8 DS18B20_Check(void);//����Ƿ����DS18B20
void DS18B20_Rst(void);//��λDS18B20    
#endif














