*BEGIN ECSTBA
      COMMON /ECSTBA/ F135,PI,RPIB3,RPIB18,SQR2,
     1 PTAB(45),TAB(169),DCADD(36)
       EQUIVALENCE(TAB(156),COINV), (TAB(157),CNINV), (TAB(158),COILR),
     1            (TAB(159),RESR) , (TAB(160),COILI), (TAB(161),RESI) ,
     2            (TAB(162),IBLCK), (TAB(163),ABLCK),
     3            (TAB(164),DCSPCE(1))
      DIMENSION  DCSPCE(6)
      DIMENSION IPTAB(45),ITAB(170)
      EQUIVALENCE   (PTAB,IPTAB), (TAB,ITAB)
      EQUIVALENCE (DCADD(1),XP6O),(DCADD(2),XP7O),(DCADD(3),XP8O),(DCADD
     *(4),XP6N),(DCADD(5),XP7N),(DCADD(6),XP8N),(DCADD(7),SIGLO),(DCADD(
     *8),SIGHI)
