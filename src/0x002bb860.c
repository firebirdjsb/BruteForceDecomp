/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2D1D255D9843190381364BB10F485C6596A63244386241A0BB2F6CD05BA97C6
 * Entry: 0x002bb860, Ghidra index: 9907, label: FUN_002bb860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002bb860(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint *unaff_ESI;
  uint uVar3;
  
  iVar1 = *(ushort *)(unaff_ESI[3] + 0xea) - 1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(*(int *)(unaff_ESI[3] + 0xec) + iVar1 * 4);
    do {
      if ((uint *)*puVar2 == unaff_ESI) {
        if (-1 < iVar1) {
          FUN_002be8b0();
          *unaff_ESI = *unaff_ESI & 0xffffffcf;
        }
        break;
      }
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar1);
  }
  if (((byte)*unaff_ESI & 0xc) == 4) {
    uVar3 = unaff_ESI[0x18];
    if (uVar3 != 0) {
      iVar1 = *(int *)(uVar3 + 0xc);
      if ((iVar1 != *(int *)(uVar3 + 0x10)) && (iVar1 != 0)) {
        (*(code *)PTR_FUN_003bc654)(iVar1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(uVar3);
    }
  }
  else {
    uVar3 = (uint)*(ushort *)((int)unaff_ESI + 0x162);
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      (**(code **)**(undefined4 **)(unaff_ESI[0x59] + uVar3 * 4))();
    }
  }
  if (unaff_ESI[0x5c] != 0) {
    FUN_002bdb30(unaff_ESI[0x5c]);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(unaff_ESI[0x13]);
}
