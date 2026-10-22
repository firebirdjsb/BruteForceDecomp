/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4EFB7FB53AE16348684E05E5F850DDCA8CB40669840BA4DFD98A3949AA3ED794
 * Entry: 0x00136750, Ghidra index: 3890, label: FUN_00136750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c0488;
undefined4 * FUN_00136750(void)

{
  int iVar1;
  int *in_ECX;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_003c0488 != 0) {
    puVar2 = &DAT_003c0488;
    iVar1 = DAT_003c0488;
    do {
      if (iVar1 == *in_ECX) {
        return &DAT_003c0488 + iVar3 * 3;
      }
      iVar1 = puVar2[3];
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 + 1;
    } while (iVar1 != 0);
  }
  return (undefined4 *)0x0;
}
