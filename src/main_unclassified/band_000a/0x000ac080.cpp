/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A052A3A3B71BDA28EBA94DC81B733B656828007DBB0452FC2D1987D2EC2AE1A8
 * Entry: 0x000ac080, Ghidra index: 2057, label: FUN_000ac080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
void FUN_000ac080(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x74) = 0x3f000000;
  if (((*(int *)(unaff_ESI + 0x98) == 0) && (*(int *)(unaff_ESI + 0x9c) == 0)) &&
     (iVar2 = *(int *)(*(int *)(unaff_ESI + 0x28) + 0xe0), iVar2 != 0)) {
    iVar2 = (**(code **)(**(int **)(*(int *)(iVar2 + 8) + 0xbec) + 0xc))(iVar2);
    if (iVar2 != 0) {
      iVar2 = FUN_002ea01d(4);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_001e7820();
      }
      *(undefined4 *)(unaff_ESI + 0x98) = uVar3;
      iVar2 = FUN_002ea01d(4);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_001e7850();
      }
      *(undefined4 *)(unaff_ESI + 0x9c) = uVar3;
    }
  }
  if ((*(byte *)(unaff_ESI + 0x7c) & 1) == 0) {
    FUN_000bb220(0x18fc2db8);
    cVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(unaff_ESI + 0x28) + 0xe0) +
                                                     0x2e8) + 0x1d8) + 0xbec) + 0x30))();
    if (cVar1 == '\0') {
      (**(code **)(*DAT_00469b54 + 0x10))(0);
      *(byte *)(unaff_ESI + 0x7c) = *(byte *)(unaff_ESI + 0x7c) | 4;
    }
  }
  *(byte *)(unaff_ESI + 0x7c) = *(byte *)(unaff_ESI + 0x7c) | 1;
  return;
}
