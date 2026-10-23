/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 53395EB26E32989EDC4E150B48A4807DE6FF78BF740EE5FAFD900A10A8B8DAB5
 * Entry: 0x00171a20, Ghidra index: 4862, label: FUN_00171a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00171a20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_2 + 0x28);
  iVar2 = *(int *)(param_2 + 0x2c);
  uVar5 = *(undefined4 *)(param_2 + 0x20);
  iVar3 = FUN_000120f0();
  if ((iVar3 != 0) && (*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x20c) + 0xc) != 0)) {
    iVar3 = FUN_000de9f0(*(int *)(param_1 + 0x20),uVar5);
    if (iVar3 != 0) {
      iVar3 = FUN_000120f0();
      if (((iVar3 != 0) && (iVar1 != 0)) && (iVar2 != 0)) {
        uVar4 = FUN_000120f0();
        uVar4 = -(uint)((*(byte *)(uVar4 + 0x26) & 0x40) != 0) & uVar4;
        if (uVar4 != 0) {
          uVar5 = FUN_000120f0(uVar4);
          FUN_001150e0(uVar5,uVar4);
        }
      }
    }
    return 0;
  }
  return 0x80004001;
}
