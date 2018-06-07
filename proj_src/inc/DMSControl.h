#ifndef _DMS_CONTROL_H_
#define _DMS_CONTROL_H_
#include "qmi_client.h"
#include "device_management_service_v01.h"
#include "simcom_common.h"

#ifndef TRUE
	#define TRUE 1
#endif

#ifndef FALSE
	#define FALSE 0
#endif

typedef unsigned char boolean;
typedef unsigned char uint8;


    
	int dms_init();
	void dms_deinit();

	/*****************************************************************************
	* Function Name : get_imei
	* Description   : 查询sim卡 IMSI
	* Input         : 无
	* Output        : pImsi
	* Return        : 0： succes     -1： Fail
	* Auther        : qjh
	* Date          : 2018.04.26
	*****************************************************************************/	
	int get_imei(char *pImei);
	/*****************************************************************************
	* Function Name : get_meid
	* Description   : 查询sim卡 MEID
	* Input         : 无
	* Output        : pMeid
	* Return        : 0： succes     -1： Fail
	* Auther        : qjh
	* Date          : 2018.04.26
	*****************************************************************************/		
	int get_meid(char *pMeid);
	/*****************************************************************************
	* Function Name : get_meid
	* Description   : 从NV中读取预设的MAC地址
	* Input         : device_type
					  DMS_DEVICE_MAC_WLAN_V01 = 0   ---- WIFI MAC地址
					  DMS_DEVICE_MAC_BT_V01   = 1   ---- 蓝牙 MAC地址
					  DMS_DEVICE_MAC_LAN_V01  = 2   ---- ETH  MAC地址               
	* Output        : mac_addr   需要预先分配至少6个byte的字符数组
	* Return        : 0： succes     -1： Fail
	* Auther        : qjh
	* Date          : 2018.04.26
	*****************************************************************************/		
	int get_mac_address_from_nv(dms_device_mac_enum_v01 device_type, uint8_t *mac_addr);

#endif


