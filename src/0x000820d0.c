/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A373A2E87D3CD74080BD0D42E7EE3CFD7A7AC6F0EED044D03378E79B2D2E290D
 * Entry: 0x000820d0, Ghidra index: 1529, label: FUN_000820d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000820d0(void)

{
  int iVar1;
  byte *pbVar2;
  int *unaff_EDI;
  undefined4 *puStack_c;
  undefined4 uStack_4;
  
  iVar1 = (**(code **)(*unaff_EDI + 0x18))();
  if (iVar1 != 0) {
    uStack_4 = 0;
    puStack_c = (undefined4 *)0x820ec;
    iVar1 = (**(code **)(*unaff_EDI + 0x18))();
    puStack_c = &uStack_4;
    for (iVar1 = (**(code **)(**(int **)(iVar1 + 0xbec) + 0x10))(); iVar1 != 0;
        iVar1 = (**(code **)(**(int **)(iVar1 + 0xbec) + 0x14))(&puStack_c)) {
      pbVar2 = (byte *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))
                                 (*(undefined4 *)(iVar1 + 4));
      if (((pbVar2 != (byte *)0x0) && ((*pbVar2 & 1) != 0)) && (*(int *)(iVar1 + 0x10) != 0)) {
        *(undefined4 *)(pbVar2 + 0x10) = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0xc) + 8)
        ;
        *pbVar2 = *pbVar2 | 4;
      }
      iVar1 = (**(code **)(*unaff_EDI + 0x18))();
    }
  }
  return;
}
