/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEE39AD4D90A7F49C4382F81A856942051D19CF969C980510EAEB965F7020D47
 * Entry: 0x002f3223, Ghidra index: 10826, label: FUN_002f3223
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002f3223(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined1 local_10c [54];
  undefined1 local_d6 [202];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  bVar1 = 0;
  iVar2 = 0;
  do {
    bVar1 = bVar1 | (byte)XboxHDKey_exref[iVar2];
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  pcVar3 = XboxHDKey_exref;
  if (bVar1 == 0) {
    XAPILIB__XQueryValue(0xffff,local_8,local_10c,0x100,local_c);
    pcVar3 = (code *)local_d6;
  }
  param_1 = param_1 + 8;
  FUN_002f314a(pcVar3,0x10,param_1);
  XcSHAUpdate(param_1,param_2,0x14);
  FUN_002f31b1(param_1,pcVar3,0x10,param_3);
  return 1;
}
