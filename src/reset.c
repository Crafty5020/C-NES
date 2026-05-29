/* This is the iniation function we call it reset though */

void reset(void)

{
  char cVar1;
  short sVar2;
  
  PPUCTRL = 0;
  PPUMASK = 0;
  do {
    cVar1 = PPUSTATUS;
  } while (-1 < cVar1);
  do {
    cVar1 = PPUSTATUS;
  } while (-1 < cVar1);
  sVar2 = CONCAT11((char)((ushort)&stack0x0000 >> 8),0xff);
  reset = (code)((char)reset + '\x01');
  *(undefined2 *)(sVar2 + -1) = 0xff1e;
  FUN_aca3(0x10);
  *(undefined2 *)(sVar2 + -1) = 0xff23;
  FUN_acb7(0);
  *(undefined2 *)(sVar2 + -1) = 0xff28;
  FUN_accb(0);
  *(undefined2 *)(sVar2 + -1) = 0xff2d;
  FUN_acdf(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
