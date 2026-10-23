/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 460E612250592E73ABC4C5FC8847115342DEFE3C895F6B01C794FAC81F51AF02
 * Entry: 0x0033fd89, Ghidra index: 12660, label: FUN_0033fd89
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_0033fd89(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            void *param_5,size_t param_6,undefined4 *param_7,int *param_8)

{
  undefined4 *puVar1;
  size_t sVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 local_128 [260];
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  FUN_0033f453(param_2,param_3,&param_4,4,0,0,local_14);
  puVar3 = param_7;
  sVar2 = param_6;
  _memmove(param_7 + 6,param_5,param_6);
  piVar4 = param_8;
  *param_8 = sVar2 + 0x18;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar1 = puVar3 + 4;
  FUN_00344fef(puVar1,8);
  FUN_0033f453(local_14,0x10,puVar1,*piVar4 + -0x10,0,0,puVar3);
  FUN_0033f453(local_14,0x10,puVar3,0x10,0,0,local_24);
  XcRC4Key(local_128,0x10,local_24);
  XcRC4Crypt(local_128,*piVar4 + -0x10,puVar1);
  return 0;
}
