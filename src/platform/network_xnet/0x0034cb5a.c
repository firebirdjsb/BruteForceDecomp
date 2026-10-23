/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6E3C8E1D25166BD26E3AFD3C752D46A2C5EEF2A780D2D2AA3060F8DB13E1951
 * Entry: 0x0034cb5a, Ghidra index: 12985, label: FUN_0034cb5a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration of FUN_0034c826; callback ABI and behavior remain
 * ABI_UNVERIFIED. This only resolves name lookup in the C11 draft. */
extern void FUN_0034c826(int param_1);
void FUN_0034cb5a(undefined4 param_1,uint param_2,uint param_3,int param_4,int param_5,code *param_6
                 )

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = param_2 & 7;
  if (param_5 == 0) {
    param_5 = 0x14;
  }
  iVar4 = param_5 + 0x18;
  iVar5 = iVar4;
  if (uVar3 != 0) {
    iVar5 = param_5 + 0x2c;
    if (uVar3 < 4) {
      if (uVar3 == 3) {
        iVar5 = param_5 + 0x34;
      }
      else if (uVar3 == 2) {
        iVar5 = param_5 + 0x40;
      }
    }
    else {
      uVar1 = (param_3 + 7 & 0xfffffff8) - param_3;
      param_3 = param_3 + uVar1;
      iVar5 = param_5 + 0x44;
      param_2 = param_2 | uVar1 * 0x10;
      if (4 < uVar3) {
        uVar6 = (param_2 >> 0x10 & 3) * 2;
        if (uVar3 == 5) {
          uVar6 = uVar6 + 0xc;
        }
        if (uVar1 < uVar6) {
          iVar5 = iVar5 + (uVar6 - uVar1);
        }
        if (((uVar3 == 7) && (param_4 != 0)) && (iVar5 = iVar5 + param_4, param_3 != 0)) {
          param_2 = param_2 | 0x80;
          iVar5 = iVar5 + 1;
        }
      }
      param_2 = param_2 | (param_3 & 0xfffffff8) << 5;
    }
  }
  iVar5 = iVar5 + param_3;
  if ((param_2 & 0x40000) == 0) {
    piVar2 = (int *)ExAllocatePoolWithTag(iVar5,param_1);
  }
  else {
    piVar2 = (int *)FUN_0034c58a(iVar5,param_1);
  }
  if (piVar2 != (int *)0x0) {
    if (param_6 == (code *)0x0) {
      param_6 = FUN_0034c826;
    }
    *(undefined2 *)((int)piVar2 + 6) = 0;
    piVar2[3] = 0;
    *piVar2 = (int)piVar2 + iVar4;
    *(short *)(piVar2 + 1) = (short)iVar5 - (short)iVar4;
    piVar2[2] = param_2 | 8;
    piVar2[4] = (int)param_6;
  }
  return;
}
