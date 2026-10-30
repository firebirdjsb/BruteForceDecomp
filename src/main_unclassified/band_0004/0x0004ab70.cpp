/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B9A7FA59A9F1C9FE1D5D82153DC201C7CF8928E7FBAE767118F7592EE3BD47A
 * Entry: 0x0004ab70, Ghidra index: 600, label: FUN_0004ab70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0004ab70(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_000120f0();
  if ((*(uint *)(unaff_EBX + 0x3c4) & 0x100) == 0) goto LAB_0004acbc;
  if (*(int *)(unaff_EBX + 0x58) == 1) {
    iVar2 = FUN_000120f0();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x59c) != 0)) {
      iVar2 = FUN_0005bca0();
LAB_0004abf2:
      if (((iVar2 != 0) && ((*(byte *)(iVar2 + 0x70) & 1) == 0)) && (iVar2 != iVar1)) {
        FUN_00049920();
        FUN_0004ad00(unaff_EBX);
        if (local_14 != 0) {
          FUN_00049970();
          FUN_0004ad00(unaff_EBX);
          if (local_10 * 1.3 < local_138) {
            local_14 = local_13c;
          }
          if (local_14 != 0) {
            return local_14;
          }
        }
      }
    }
  }
  else if (*(int *)(unaff_EBX + 0x58) == 3) {
    iVar2 = FUN_0014d2e0();
    if ((iVar2 != 0) && (*(int *)(*(int *)(iVar2 + 0x228) + 0x16c) != 0)) {
      iVar2 = FUN_000456c0();
      goto LAB_0004abf2;
    }
  }
  if ((*(uint *)(unaff_EBX + 0x3c4) & 0x100) != 0) {
    FUN_00049970();
    FUN_000120f0();
    iVar1 = FUN_0004ad00(unaff_EBX);
    return iVar1;
  }
LAB_0004acbc:
  uVar3 = FUN_000120f0();
  FUN_000239d0(uVar3);
  iVar1 = FUN_0004ad00(unaff_EBX);
  return iVar1;
}
