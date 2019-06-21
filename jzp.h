#ifndef _JZP_H_INCLUDED
#define _JZP_H_INCLUDED

#pragma pack(1)
typedef struct
{
	char revision[18];
	unsigned decomp_size;
	unsigned comp_size; //including header
	char magic[6];
	unsigned char dist_width, size_width, unk0, unk1;
} JZPHDR;

unsigned swapl(unsigned u); //minimalistic htonl/ntohl for windows
unsigned jzp_checksum(const void *buf, unsigned size);

#endif
