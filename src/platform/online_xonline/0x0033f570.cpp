/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55533FBF37885B79E437B975EDBBA092827A3A1FB7366BEE5891A5C1CD912939
 * Entry: 0x0033f570, Ghidra index: 12648, label: FUN_0033f570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0033f570(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,uint param_5
                 ,void *param_6,size_t *param_7)

{
  size_t *psVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined1 local_150 [260];
  undefined1 local_4c [16];
  int local_3c [4];
  undefined1 local_2c [16];
  int local_1c [4];
  undefined1 local_c [8];
  
  if (param_5 < 0x18) {
    uVar2 = 0xc000006d;
  }
  else {
    FUN_0033f453(param_1,param_2,&param_3,4,0,0,local_2c);
    psVar1 = param_7;
    piVar4 = param_4;
    piVar5 = local_1c;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    *param_7 = param_5 - 0x18;
    _memmove(param_6,param_4 + 6,param_5 - 0x18);
    FUN_0033f453(local_2c,0x10,local_1c,0x10,0,0,local_4c);
    XcRC4Key(local_150,0x10,local_4c);
    XcRC4Crypt(local_150,8,local_c);
    XcRC4Crypt(local_150,*psVar1,param_6);
    FUN_0033f453(local_2c,0x10,local_c,8,param_6,*psVar1,local_3c);
    bVar6 = true;
    iVar3 = 4;
    piVar4 = local_1c;
    piVar5 = local_3c;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    uVar2 = bVar6 - 1 & 0xc000006d;
  }
  return uVar2;
}
