const unsigned short enemy[400] =
{
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
  0x0000, 0x2080, 0x30a0, 0x4900, 0x2880, 0x0020, 0x0041, 0x0041, 0x01a7, 0x0269, 0x0186, 0x0104, 0x0062, 0x0020, 0x0800, 0x38c0, 0x7180, 0x2080, 0x0000, 0x0000, 
  0x0000, 0x4900, 0x5940, 0x9200, 0x40e0, 0x0020, 0x0061, 0x0042, 0x02ab, 0x0493, 0x02ec, 0x0187, 0x0061, 0x0000, 0x0820, 0x6140, 0xe300, 0x40e0, 0x0000, 0x0000, 
  0x0000, 0x2060, 0x38c0, 0x6960, 0x6140, 0x41a3, 0x0aac, 0x0253, 0x0378, 0x049a, 0x02d8, 0x0357, 0x0331, 0x10e3, 0x6180, 0x79a0, 0x5940, 0x1860, 0x0000, 0x0000, 
  0x0000, 0x0000, 0x1840, 0x40e0, 0x6960, 0x6245, 0x2350, 0x0afb, 0x03df, 0x04bf, 0x031f, 0x03df, 0x0bf8, 0x39a5, 0x8201, 0x7180, 0x0000, 0x0000, 0x0000, 0x0000, 
  0x0000, 0x0000, 0x0820, 0x1040, 0x4900, 0x61a5, 0x5270, 0x11fb, 0x037f, 0x051f, 0x03bf, 0x02df, 0x2258, 0x9245, 0x5941, 0x2060, 0x0000, 0x0000, 0x0000, 0x0000, 
  0x0000, 0x0000, 0x0000, 0x0000, 0x30a0, 0x4985, 0x52ef, 0x1bba, 0x051f, 0x065f, 0x057f, 0x0c7e, 0x3356, 0x8244, 0x30c1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
  0x0000, 0x0000, 0x0000, 0x0000, 0x1860, 0x2984, 0x3c0c, 0x2698, 0x0fbe, 0x07ff, 0x07ff, 0x1f7c, 0x35b3, 0x39c3, 0x1881, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
  0x0000, 0x0000, 0x2060, 0x1860, 0x5120, 0x8221, 0xaba5, 0x6d31, 0x2e1a, 0x067f, 0x067f, 0x4db6, 0x9c8a, 0xb2c1, 0x6160, 0x2880, 0x0000, 0x0000, 0x0000, 0x0000, 
  0x0000, 0x1840, 0x28a0, 0x30a0, 0x81c0, 0xcaa0, 0xeb40, 0x8bad, 0x3c18, 0x047f, 0x047f, 0x6bd1, 0xcb64, 0xfb60, 0xaa40, 0x5940, 0x1840, 0x1020, 0x0000, 0x0000, 
  0x0000, 0x1860, 0x38c0, 0x79a0, 0xc2a0, 0xe300, 0xd2c0, 0x71ed, 0x2978, 0x011f, 0x011f, 0x49b1, 0xaa64, 0xf320, 0xe300, 0xaa40, 0x5100, 0x1860, 0x0000, 0x0000, 
  0x1840, 0x40e0, 0x6960, 0xba80, 0xeb20, 0xe300, 0xaa40, 0x498d, 0x1178, 0x017f, 0x017f, 0x2951, 0x71c4, 0xe300, 0xfb40, 0xdae0, 0x9a00, 0x5120, 0x2080, 0x0000, 
  0x1860, 0x6140, 0xb260, 0xfb40, 0xfb60, 0xd2c0, 0x79a0, 0x21ed, 0x02b8, 0x039f, 0x039f, 0x01f1, 0x3944, 0xd2e0, 0xf340, 0xfb60, 0xf340, 0x89e0, 0x40e0, 0x0000, 
  0x30a0, 0x91e0, 0xe300, 0xfb60, 0xeb20, 0xaa40, 0x5140, 0x11ed, 0x02f8, 0x03df, 0x03df, 0x0231, 0x2904, 0x9200, 0xdae0, 0xfb60, 0xfb40, 0xcaa0, 0x7180, 0x0000, 
  0x40e0, 0xaa40, 0xfb60, 0xfb60, 0xd2c0, 0x89e0, 0x30c0, 0x098c, 0x0276, 0x033e, 0x033d, 0x01d0, 0x10c4, 0x5940, 0xc280, 0xfb40, 0xfb60, 0xf340, 0x91e0, 0x0000, 
  0x40e0, 0xaa40, 0xfb60, 0xfb60, 0xba80, 0x7180, 0x0840, 0x0067, 0x0091, 0x00d9, 0x00d6, 0x006b, 0x0022, 0x1840, 0xb260, 0xf340, 0xfb60, 0xf340, 0x91e0, 0x0000, 
  0x30a0, 0x81a0, 0xc280, 0xc280, 0x89c0, 0x5100, 0x0000, 0x0004, 0x000b, 0x0011, 0x000e, 0x0007, 0x0001, 0x0000, 0x81c0, 0xba60, 0xba80, 0xb260, 0x6960, 0x0000, 
  0x1840, 0x40e0, 0x6140, 0x6140, 0x40e0, 0x2880, 0x0000, 0x0000, 0x0004, 0x0006, 0x0004, 0x0002, 0x0000, 0x0000, 0x40e0, 0x5940, 0x6140, 0x5920, 0x38a0, 0x0000, 
  0x1040, 0x2880, 0x38c0, 0x38c0, 0x2880, 0x1860, 0x0000, 0x0000, 0x0003, 0x0004, 0x0002, 0x0001, 0x0000, 0x0000, 0x2880, 0x38c0, 0x38c0, 0x38a0, 0x2060, 0x0000, 
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};