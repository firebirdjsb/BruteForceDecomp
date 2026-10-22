/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDF180934D18C6762E17162A2CA75E54D49257C0D73AA491E30ADCCAF3E7872F
 * Entry: 0x003433d3, Ghidra index: 12711, label: FUN_003433d3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003433d3(int param_1,undefined2 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  if ((param_1 != 0) && (param_2 != (undefined2 *)0x0)) {
    FUN_002eaa86(param_1,"%04d%02d%02d%02d%02d%02d",*param_2,*(undefined1 *)(param_2 + 1),
                 *(undefined1 *)((int)param_2 + 3),*(undefined1 *)(param_2 + 2),
                 *(undefined1 *)((int)param_2 + 5),*(undefined1 *)(param_2 + 3));
    if (param_2[4] != 0) {
      uVar5 = (uint)(ushort)param_2[4];
      if (uVar5 % 100 == 0) {
        pcVar4 = ".%01d";
        uVar5 = uVar5 / 100;
      }
      else if (uVar5 % 10 == 0) {
        pcVar4 = ".%02d";
        uVar5 = uVar5 / 10;
      }
      else {
        pcVar4 = ".%03d";
      }
      FUN_002eaa86(param_1 + 0xe,pcVar4,uVar5);
    }
    if (*(char *)(param_2 + 5) == '\0') {
      sVar1 = param_2[6];
      if (sVar1 < 1) {
        if (-1 < sVar1) {
          return 1;
        }
        iVar2 = (int)sVar1;
        if (iVar2 % 0x3c == 0) {
          iVar2 = iVar2 / -0x3c;
          pcVar4 = "-%02d";
        }
        else {
          iVar2 = (iVar2 / 0x3c) * -100 - iVar2 % 0x3c;
          pcVar4 = "-%04d";
        }
      }
      else {
        iVar2 = (int)sVar1 / 0x3c;
        iVar3 = (int)sVar1 % 0x3c;
        if (iVar3 == 0) {
          pcVar4 = "+%02d";
        }
        else {
          iVar2 = iVar2 * 100 + iVar3;
          pcVar4 = "+%04d";
        }
      }
      iVar3 = FUN_00343343(param_1);
      FUN_002eaa86(iVar3 + param_1,pcVar4,iVar2);
    }
    else {
      iVar2 = FUN_00343343(param_1);
      *(undefined2 *)(iVar2 + param_1) = 0x5a;
    }
    return 1;
  }
  return 0;
}
