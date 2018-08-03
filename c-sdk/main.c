#include <stdio.h>
#include <stdlib.h>

#include "iothub_device_client_ll.h"

int main()
{
	IOTHUB_DEVICE_CLIENT_LL_HANDLE iotHubClientHandle = 
		IoTHubDeviceClient_LL_CreateFromConnectionString("", 
		0);
}