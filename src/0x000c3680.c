/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34CC94E6C46DE7E010A45B10C846C8E0D234EDB173905F1E5C9AD0B8E4FF827D
 * Entry: 0x000c3680, Ghidra index: 2388, label: FUN_000c3680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
void FUN_000c3680(void)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x28);
  piVar2 = (int *)FUN_000b9120(DAT_00469ab0);
  if (piVar2 != (int *)0x0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,piVar2);
    }
    *(byte *)((int)piVar2 + 0x13) = *(byte *)((int)piVar2 + 0x13) & 0xfb;
  }
  *(int **)(unaff_ESI + 0x40) = piVar2;
  (**(code **)(*piVar2 + 0x2c))();
  iVar1 = *(int *)(unaff_ESI + 0x28);
  piVar2 = (int *)FUN_000b9120(DAT_00469ab0);
  if (piVar2 != (int *)0x0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,piVar2);
    }
    *(byte *)((int)piVar2 + 0x13) = *(byte *)((int)piVar2 + 0x13) & 0xfb;
  }
  (**(code **)(*piVar2 + 0x2c))();
  iVar1 = *(int *)(unaff_ESI + 0x28);
  piVar2 = (int *)FUN_000b9120(DAT_00469ab0);
  if (piVar2 != (int *)0x0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,piVar2);
    }
    *(byte *)((int)piVar2 + 0x13) = *(byte *)((int)piVar2 + 0x13) & 0xfb;
  }
  (**(code **)(*piVar2 + 0x2c))();
  iVar1 = *(int *)(unaff_ESI + 0x28);
  piVar2 = (int *)FUN_000b9120(DAT_00469ab0);
  if (piVar2 != (int *)0x0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,piVar2);
    }
    *(byte *)((int)piVar2 + 0x13) = *(byte *)((int)piVar2 + 0x13) & 0xfb;
  }
  (**(code **)(*piVar2 + 0x2c))();
  iVar1 = *(int *)(unaff_ESI + 0x28);
  piVar2 = (int *)FUN_000b9120(DAT_00469ab0);
  if (piVar2 != (int *)0x0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,piVar2);
    }
    *(byte *)((int)piVar2 + 0x13) = *(byte *)((int)piVar2 + 0x13) & 0xfb;
  }
  (**(code **)(*piVar2 + 0x2c))();
  return;
}
