/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DF8DA8C4EBBF048B83DC3945A0B8F6890931AA54CECC1B421B5CA4A58E6DA03
 * Entry: 0x000bd110, Ghidra index: 2305, label: FUN_000bd110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000bf5a0(void);

void FUN_000bd110(int param_1,int param_2)

{
  int iVar1;
  ushort in_AX;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  uVar4 = (uint)in_AX;
  iVar2 = *(int *)(*(int *)(param_1 + 0xe0) + 0x6c);
  if (*(int *)(iVar2 + 0x10) != 0) {
    iVar2 = *(int *)(iVar2 + 8);
  }
  FUN_000bf5a0();
  if (0 < (short)in_AX) {
    piVar5 = (int *)(param_2 + 4);
    do {
      iVar1 = *piVar5;
      if (iVar1 != 0) {
        iVar3 = *(int *)(iVar1 + 0x6c);
        if (*(int *)(iVar3 + 0x10) != 0) {
          iVar3 = *(int *)(iVar3 + 8);
        }
        if (iVar3 != iVar2) {
          (*(code *)**(undefined4 **)(param_1 + 0x88))(param_1,iVar1);
        }
      }
      piVar5 = piVar5 + 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}
