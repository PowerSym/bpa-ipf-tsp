C    -                        IN1C.INC
      COMMON /IN1C/ ARAC1C(60),AREA1C(60),BYPASC(2,63),
     2  JNETC(MAXGEN),TEMPC(44),LNETCC(MAXGEN),
     2  LRLY1C(200),
     2  LRLY2C(200),LRLY3C(2,200),LREP2C(MAXBUS),
     2  LROD1C(100),LROD2C(100),LROD3C(2,100),
     2  LROD4C(100),LROD5C(100),LROD6C(2,100),
     2  LSHD1C(MXLSHD),LSRC1C(100),LSRC2C(100),
     2  LSRC3C(2,100),MACH1C(2,MAXMAC),MACH2C(2,MAXMAC),                !dem
     2  IZN3C(2,25),IZN1C(25),IZN2C(25),
     2  UFREQC(300),UGENFC(2,MAXGEN),LSHD2C(MXLSHD),
     2  JNETCC(MAXGEN),
     2  DZONEC(2,150),AREACC(14,60),
     2  IDCBUC(150)
      CHARACTER*8 ARAC1C,AREA1C,BYPASC,
     2  JNETC,TEMPC,LNETCC,LRLY1C,
     2  LRLY2C,LRLY3C,LREP2C,
     2  LROD1C,LROD2C,LROD3C,
     2  LROD4C,LROD5C,LROD6C,
     2  LSHD1C,LSRC1C,LSRC2C,
     2  LSRC3C,MACH1C,MACH2C,
     2  IZN3C,IZN1C,IZN2C,
     2  UFREQC,UGENFC,
     2  JNETCC,
     2  DZONEC,AREACC,
     2              IDCBUC
      CHARACTER*1 LSHD2C
C    -                      end of IN1C.INC