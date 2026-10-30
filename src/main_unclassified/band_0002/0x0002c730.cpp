/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 847583DEB3EACD1B1467834FD4D57E293DD10E9A51B4A91418AB69D715DDEF2A
 * Entry: 0x0002c730, Ghidra index: 295, label: FUN_0002c730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0002c730(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  int iStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (in_ECX[0xfb] == 0) {
    FUN_00055a60(in_ECX + 0xf7);
  }
  uVar4 = (in_ECX[0xfa] + in_ECX[0xfb]) - 1;
  if ((uint)in_ECX[0xf9] <= uVar4) {
    uVar4 = uVar4 - in_ECX[0xf9];
  }
  iVar5 = *(int *)(*(int *)(in_ECX[0xf8] + uVar4 * 4) + 0x58);
  if ((iVar5 == 0) || ((*(byte *)(iVar5 + 0x70) & 1) != 0)) {
    return 0;
  }
  (**(code **)in_ECX[0x1c7])(in_ECX[0x100]);
  iVar5 = in_ECX[0x1cb];
  if (iVar5 == 0) {
    if (((*(byte *)(in_ECX + 0x1c9) & 1) == 0) ||
       ((float)in_ECX[0x1c8] < 0.0 != ((float)in_ECX[0x1c8] == 0.0))) {
      FUN_000124f0(0x40000000);
      in_ECX[0x1cb] = 1;
    }
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 != 2) {
        return 0;
      }
      uStack_28 = 0;
      uStack_2c = 0;
      uStack_30 = 0;
      cVar3 = FUN_00012620();
      if (cVar3 == '\0') {
        FUN_00012560();
        FUN_00058bc0();
        FUN_00012540();
        cVar3 = FUN_00026d80(in_ECX + -0x10,in_ECX + 0x23c,&uStack_30,0,0x40000000);
        if (cVar3 == '\0') {
          iVar5 = FUN_00055aa0();
          if (*(int *)(iVar5 + 0x5c) == 0x4e) {
            return 0;
          }
          iStack_3c = (**(code **)(*in_ECX + 0x98))();
          if (iStack_3c != 1) {
            return iStack_3c;
          }
        }
      }
      piVar1 = *(int **)(in_ECX[0xc6] + 4);
      piVar2 = (int *)*piVar1;
      while( true ) {
        if (piVar2 == piVar1) {
          FUN_000255d0(param_1,0);
          FUN_0004d970(in_ECX + -0x10,param_1,4,1,1);
          return iStack_3c;
        }
        if (((piVar2[0x1c] == 1) && (0.1 <= (float)piVar2[0xc])) && (0.1 <= (float)piVar2[0x10]))
        break;
        FUN_0001c5d0();
        piVar1 = *(int **)(in_ECX[0xc6] + 4);
      }
      return 2;
    }
    if (((*(byte *)(in_ECX + 0x1c9) & 1) == 0) ||
       ((float)in_ECX[0x1c8] < 0.0 != ((float)in_ECX[0x1c8] == 0.0))) {
      in_ECX[0x1cb] = 2;
      return iStack_3c;
    }
  }
  return iStack_3c;
}
