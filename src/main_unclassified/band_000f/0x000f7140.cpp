/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5C3EFCFE605DF28833D36291A4EAA4994E242322DC5A8D33DA6FC25CDC5369A
 * Entry: 0x000f7140, Ghidra index: 3095, label: FUN_000f7140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b58;
undefined4 FUN_000f7140(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = (int *)DAT_00469b58[2];
  uVar3 = (**(code **)(*piVar1 + 0x1e8))();
  iVar4 = (**(code **)(*piVar1 + 0x1b4))(uVar3);
  if (iVar4 == 0) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar1 + 0xd4))(iVar4 + 0x4c);
  iVar4 = (**(code **)(*piVar1 + 0x74))(iVar4 + 0x4c,iVar5);
  if (iVar4 != -1) {
    (**(code **)(*piVar1 + 0x1bc))(uVar3);
    iVar6 = iVar4 * 0x4c + *(int *)(iVar5 + 0x1c);
    if (*(uint *)(iVar4 * 0x4c + 0x18 + *(int *)(iVar5 + 0x1c)) < 0x10) {
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = *(int *)(iVar6 + 4);
    }
    (**(code **)(*piVar1 + 0x5c))(iVar6,0);
    cVar2 = FUN_00102120();
    if (cVar2 != '\0') {
      iVar4 = *piVar1;
      iVar5 = (**(code **)(*DAT_00469b58 + 0x48))();
      (**(code **)(iVar4 + 0x230))(*(undefined4 *)(iVar5 + 0x50));
      iVar4 = *(int *)DAT_00469b58[2];
      uVar3 = FUN_00102000();
      uVar3 = (**(code **)(iVar4 + 0x130))(uVar3);
      FUN_000f6f60(uVar3);
      FUN_00084d50();
      return 1;
    }
  }
  return 0;
}
