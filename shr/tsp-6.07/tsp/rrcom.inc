*BEGIN RRCOM
      PARAMETER (MAXRR = 50)
      COMMON/RRCOM/IBS1RR(MAXRR),JBS1RR(MAXRR),IBS2RR(MAXRR),
     1             JBS2RR(MAXRR),ISC1RR(MAXRR),ISC2RR(MAXRR),
     2             MKODRR(MAXRR),RLTPRR(MAXRR),SHL1RR(MAXRR),
     3             SHL2RR(MAXRR),IDG1RR(MAXRR),IDG2RR(MAXRR),
     5             GIJORR(MAXRR),BIJORR(MAXRR),GIOORR(MAXRR),
     6             BIOORR(MAXRR),GJOORR(MAXRR),BJOORR(MAXRR),
     7             GIJMRR(MAXRR),BIJMRR(MAXRR),BIOMRR(MAXRR),
     8             BJOMRR(MAXRR)
      DIMENSION GDR1RR(MAXRR),GDR2RR(MAXRR)
      EQUIVALENCE (GDR1RR(1), SHL1RR(1)),(GDR2RR(1),SHL2RR(1))
      COMMON/RRCOM1/IPR1RR(MAXRR),IPR2RR(MAXRR),JPR2RR(MAXRR)
      CHARACTER*1 IPR1RR,IPR2RR,JPR2RR