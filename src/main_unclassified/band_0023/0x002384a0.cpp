/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 342996BE1337FD461FCF480EB2316C7D739AF70E02757DC709938D4D7BD0F761
 * Entry: 0x002384a0, Ghidra index: 7874, label: FUN_002384a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394140;
void FUN_002384a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  
  FUN_002381e0();
  *(int *)(unaff_ESI + 0x30) = unaff_ESI;
  if (*(int *)(unaff_ESI + 0x4c) != 0) {
    FUN_00238520();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x4c));
  }
  iVar1 = thunk_FUN_002ea01d(param_1);
  *(int *)(unaff_ESI + 0x4c) = iVar1;
  iVar1 = iVar1 + param_1;
  *(int *)(unaff_ESI + 0x50) = iVar1;
  puVar2 = (undefined4 *)(iVar1 + -0x14);
  *(undefined4 **)(unaff_ESI + 0x54) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + -0xc) = 0;
    *(undefined4 *)(iVar1 + -4) = 0;
    *(int *)(iVar1 + -0x10) = unaff_ESI + 0x34;
    *puVar2 = &PTR_FUN_00394140;
    *(undefined4 *)(iVar1 + -8) = 2;
    *(undefined4 **)(unaff_ESI + 0x38) = puVar2;
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  return;
}
