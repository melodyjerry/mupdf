
#ifndef _K5ALGODEFS_H_
#define _K5ALGODEFS_H_

#define SGD_RSA					0x00010000

#define SGD_SHA1				0x00000002
#define SGD_SHA256				0x00000004

#define	SGD_RAW						0x80
#define SGD_MD5						0x81	
#define SGD_SHA384					0x82
#define SGD_SHA512					0x83

#define SGD_VENDOR_DEFINED			0x80000000

#define SGD_DES_ECB					SGD_VENDOR_DEFINED + 0x00000211
#define SGD_DES_CBC					SGD_VENDOR_DEFINED + 0x00000212

#define SGD_3DES168_ECB				SGD_VENDOR_DEFINED + 0x00000241
#define SGD_3DES168_CBC				SGD_VENDOR_DEFINED + 0x00000242

#define SGD_3DES112_ECB				SGD_VENDOR_DEFINED + 0x00000221
#define SGD_3DES112_CBC				SGD_VENDOR_DEFINED + 0x00000222

#define SGD_AES128_ECB				SGD_VENDOR_DEFINED + 0x00000111
#define SGD_AES128_CBC				SGD_VENDOR_DEFINED + 0x00000112

#define SGD_AES192_ECB				SGD_VENDOR_DEFINED + 0x00000121
#define SGD_AES192_CBC				SGD_VENDOR_DEFINED + 0x00000122

#define SGD_AES256_ECB				SGD_VENDOR_DEFINED + 0x00000141
#define SGD_AES256_CBC				SGD_VENDOR_DEFINED + 0x00000142


typedef unsigned int		ULONG;
typedef unsigned char       UINT8;
typedef UINT8				BYTE;

#define MAX_RSA_MODULUS_LEN				256	//RSA
#define MAX_RSA_EXPONENT_LEN			4	//

typedef struct Struct_RSAPRIVATEKEYBLOB{
    ULONG	AlgID;
    ULONG	BitLen;
    BYTE	Modulus[MAX_RSA_MODULUS_LEN];
    BYTE	PublicExponent[MAX_RSA_EXPONENT_LEN];
    BYTE	PrivateExponent[MAX_RSA_MODULUS_LEN];
    BYTE	Prime1[MAX_RSA_MODULUS_LEN/2];
    BYTE	Prime2[MAX_RSA_MODULUS_LEN/2];
    BYTE	Prime1Exponent[MAX_RSA_MODULUS_LEN/2];
    BYTE	Prime2Exponent[MAX_RSA_MODULUS_LEN/2];
    BYTE	Coefficient[MAX_RSA_MODULUS_LEN/2];
    
} RSAPRIVATEKEYBLOB, *PRSAPRIVATEKEYBLOB;



#endif