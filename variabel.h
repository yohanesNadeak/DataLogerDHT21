char tanggal[20] = "yyyy/mm/dd hh:mm:ss"; //templet format tanggal


const unsigned char myBitmap[] PROGMEM = {//templet fotmat untuk logo
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x18, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x41, 0x90, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xb0, 0x40, 0x00, 0x00, 
	0x00, 0x00, 0x80, 0x61, 0xa0, 0x44, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x61, 0xa0, 0x4e, 0x00, 0x00, 
	0x00, 0x06, 0x00, 0x31, 0x1c, 0xda, 0xc0, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x0f, 0x92, 0x60, 0x00, 
	0x00, 0x19, 0x00, 0x00, 0x00, 0x12, 0x20, 0x00, 0x00, 0x08, 0x80, 0x1f, 0xe0, 0x1b, 0x60, 0x00, 
	0x00, 0x00, 0x81, 0xff, 0xfe, 0x09, 0x40, 0x00, 0x01, 0xe0, 0x07, 0x80, 0x07, 0x81, 0x8e, 0x00, 
	0x01, 0x30, 0x1c, 0x00, 0x00, 0xe0, 0x02, 0x00, 0x02, 0x78, 0x38, 0x00, 0x00, 0x30, 0x03, 0x00, 
	0x06, 0xd8, 0x60, 0x00, 0x00, 0x1c, 0x07, 0x80, 0x04, 0x80, 0xc0, 0x1f, 0xc0, 0x0e, 0x0c, 0x80, 
	0x07, 0x01, 0x80, 0x1c, 0xc0, 0x03, 0x10, 0x80, 0x03, 0x43, 0x00, 0x18, 0x60, 0x03, 0x20, 0x80, 
	0x01, 0xc7, 0xc0, 0x7a, 0x70, 0x0f, 0x80, 0x00, 0x18, 0x0f, 0xe0, 0xd3, 0x78, 0x1f, 0xc0, 0x60, 
	0x33, 0x0f, 0xe0, 0xda, 0x6c, 0x3f, 0xc1, 0xf0, 0x21, 0x1f, 0x71, 0xf8, 0x7c, 0x3b, 0xe2, 0xd0, 
	0x29, 0x1f, 0xf1, 0xff, 0xfe, 0x3f, 0xa2, 0x58, 0x49, 0x37, 0xf3, 0x00, 0x03, 0x3f, 0xb3, 0x48, 
	0x4b, 0x37, 0x33, 0x48, 0x0b, 0x37, 0x11, 0x48, 0x72, 0x27, 0x33, 0xff, 0xff, 0x37, 0x91, 0x08, 
	0x3e, 0x67, 0x37, 0x37, 0xb7, 0x33, 0x99, 0xd8, 0x00, 0x67, 0x37, 0x2f, 0x77, 0x33, 0x98, 0x00, 
	0x00, 0x67, 0x37, 0x3f, 0xf7, 0x33, 0x88, 0x00, 0x7c, 0x4e, 0x33, 0x80, 0x07, 0x73, 0x88, 0xf8, 
	0xd6, 0x4c, 0x3b, 0xf0, 0x3e, 0x60, 0x88, 0xb4, 0x10, 0x40, 0x19, 0xf8, 0x7c, 0xe0, 0x08, 0xa4, 
	0x10, 0x47, 0x1d, 0xb0, 0x74, 0xe3, 0x88, 0x24, 0x10, 0x6d, 0x1f, 0xb0, 0x67, 0xc6, 0x88, 0x64, 
	0x16, 0x6f, 0x1f, 0xff, 0xff, 0xc7, 0x88, 0xe4, 0x7c, 0x66, 0x18, 0x70, 0x78, 0x63, 0x18, 0x3c, 
	0x38, 0x20, 0x30, 0x3c, 0xe0, 0x20, 0x18, 0x10, 0x00, 0x20, 0x30, 0x7f, 0xf8, 0x30, 0x10, 0x00, 
	0x00, 0x30, 0x39, 0xff, 0xfc, 0xf0, 0x30, 0x00, 0x00, 0x30, 0x6f, 0x80, 0x07, 0xd0, 0x30, 0x00, 
	0x00, 0x18, 0x67, 0x80, 0x07, 0x98, 0x20, 0x00, 0x00, 0x18, 0xff, 0x80, 0x07, 0xf8, 0x60, 0x00, 
	0x00, 0x0c, 0xdd, 0x80, 0x06, 0xec, 0xc0, 0x00, 0x00, 0x05, 0xf9, 0x80, 0x06, 0xfc, 0xc0, 0x00, 
	0x00, 0x07, 0xb9, 0x80, 0x06, 0x67, 0x80, 0x00, 0x00, 0x03, 0xd9, 0xff, 0xfe, 0x6f, 0x00, 0x00, 
	0x00, 0x03, 0xf1, 0xfc, 0xfe, 0x7f, 0x00, 0x00, 0x00, 0x03, 0xf1, 0xb8, 0x57, 0x3f, 0x00, 0x00, 
	0x00, 0x03, 0xf1, 0xf8, 0xff, 0xbf, 0x00, 0x00, 0x00, 0x03, 0xf9, 0x9c, 0xc6, 0xff, 0x80, 0x00, 
	0x00, 0x06, 0x3f, 0x87, 0xaf, 0xf8, 0x80, 0x00, 0x00, 0x0c, 0xfb, 0xf7, 0x7f, 0xba, 0xc0, 0x00, 
	0x00, 0x0d, 0xf8, 0xff, 0xfc, 0xef, 0xd8, 0x00, 0x00, 0x0f, 0x38, 0x03, 0x00, 0x67, 0xfc, 0x00, 
	0x00, 0x0f, 0x30, 0x00, 0x00, 0x33, 0xc6, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x1f, 0x9f, 0x00, 
	0x00, 0x03, 0xc0, 0x00, 0x00, 0x0f, 0x3d, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x06, 0x7f, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x7b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xf6, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xec, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf8, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};