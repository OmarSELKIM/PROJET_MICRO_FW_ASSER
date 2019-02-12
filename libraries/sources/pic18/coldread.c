/* 
 * this is the errata workaround for devices which need
 * additional NOPs before and after tblrd instructions
 * when reading addresses > 1FFFFF at -40C.
 *
 * This file can be used in conjunction with the library
 * routines that access these areas eg.
 *  device_id_read()
 *  config_read()
 *  idloc_read()
 */

void coldTableRead(void){
	asm("\tdw 0FFFFh");
	asm("\tdw 0FFFFh");
	asm("\tdw 0FFFFh");
	asm("\tdw 0FFFFh");
	asm("\tTBLRD*-");	// read upper byte
	asm("\tdw 0FFFFh");
	asm("\tdw 0FFFFh");
	asm("\tdw 0FFFFh");
	asm("\tdw 0FFFFh");
	asm("\tdw 0FFFFh");
	asm("\tdw 0FFFFh");
	asm("\tdw 0FFFFh");
	asm("\tdw 0FFFFh");
}
