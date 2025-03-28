//ECE 385 USB Host Shield code
//based on Circuits-at-home USB Host code 1.x
//to be used for ECE 385 course materials
//Revised October 2020 - Zuofu Cheng

#include <system.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <alt_types.h>
#include "text_mode_vga.h"

//extern HID_DEVICE hid_device;

//static BYTE addr = 1; 				//hard-wired USB address
//const char* const devclasses[] = { " Uninitialized", " HID Keyboard", " HID Mouse", " Mass storage" };

//BYTE GetDriverandReport() {
//	BYTE i;
//	BYTE rcode;
//	BYTE device = 0xFF;
//	BYTE tmpbyte;
//
//	DEV_RECORD* tpl_ptr;
//	printf("Reached USB_STATE_RUNNING (0x40)\n");
//	for (i = 1; i < USB_NUMDEVICES; i++) {
//		tpl_ptr = GetDevtable(i);
//		if (tpl_ptr->epinfo != NULL) {
//			printf("Device: %d", i);
//			printf("%s \n", devclasses[tpl_ptr->devclass]);
//			device = tpl_ptr->devclass;
//		}
//	}
//	//Query rate and protocol
//	rcode = XferGetIdle(addr, 0, hid_device.interface, 0, &tmpbyte);
//	if (rcode) {   //error handling
//		printf("GetIdle Error. Error code: ");
//		printf("%x \n", rcode);
//	} else {
//		printf("Update rate: ");
//		printf("%x \n", tmpbyte);
//	}
//	printf("Protocol: ");
//	rcode = XferGetProto(addr, 0, hid_device.interface, &tmpbyte);
//	if (rcode) {   //error handling
//		printf("GetProto Error. Error code ");
//		printf("%x \n", rcode);
//	} else {
//		printf("%d \n", tmpbyte);
//	}
//	return device;
//}
//
//void setLED(int LED) {
//	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_PIO_BASE,
//			(IORD_ALTERA_AVALON_PIO_DATA(LEDS_PIO_BASE) | (0x001 << LED)));
//}
//
//void clearLED(int LED) {
//	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_PIO_BASE,
//			(IORD_ALTERA_AVALON_PIO_DATA(LEDS_PIO_BASE) & ~(0x001 << LED)));
//
//}
//
//void printSignedHex0(signed char value) {
//	BYTE tens = 0;
//	BYTE ones = 0;
//	WORD pio_val = IORD_ALTERA_AVALON_PIO_DATA(HEX_DIGITS_PIO_BASE);
//	if (value < 0) {
//		setLED(11);
//		value = -value;
//	} else {
//		clearLED(11);
//	}
//	//handled hundreds
//	if (value / 100)
//		setLED(13);
//	else
//		clearLED(13);
//
//	value = value % 100;
//	tens = value / 10;
//	ones = value % 10;
//
//	pio_val &= 0x00FF;
//	pio_val |= (tens << 12);
//	pio_val |= (ones << 8);
//
//	IOWR_ALTERA_AVALON_PIO_DATA(HEX_DIGITS_PIO_BASE, pio_val);
//}
//
//void printSignedHex1(signed char value) {
//	BYTE tens = 0;
//	BYTE ones = 0;
//	DWORD pio_val = IORD_ALTERA_AVALON_PIO_DATA(HEX_DIGITS_PIO_BASE);
//	if (value < 0) {
//		setLED(10);
//		value = -value;
//	} else {
//		clearLED(10);
//	}
//	//handled hundreds
//	if (value / 100)
//		setLED(12);
//	else
//		clearLED(12);
//
//	value = value % 100;
//	tens = value / 10;
//	ones = value % 10;
//	tens = value / 10;
//	ones = value % 10;
//
//	pio_val &= 0xFF00;
//	pio_val |= (tens << 4);
//	pio_val |= (ones << 0);
//
//	IOWR_ALTERA_AVALON_PIO_DATA(HEX_DIGITS_PIO_BASE, pio_val);
//}
//
//void setKeycode(WORD keycode)
//{
//	IOWR_ALTERA_AVALON_PIO_DATA(0x00000150, keycode);
//}
int main() {
	while(1){
		textVGATest();
	}
	return 0;
}
