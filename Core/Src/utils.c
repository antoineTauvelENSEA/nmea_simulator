/*
 * utils.c
 *
 *  Created on: Jul 17, 2023
 *      Author: antotauv
 */

int extractChecksum(char * frame){
	while(*frame!='*'){
		frame++;
	}
	return ((frame[1]&0xf)<<4)+(frame[2]&0xf);
}

int calculateChecksum(char * frame){
	int checksum=0;
	frame++;
	while(*frame!='*'){
		checksum^=*frame;
		frame++;
	}
	return checksum;
}
