/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B606F80CDB354B7A1645FA5F7E1AC02076EFC81CC806A946458BB042118F577
 * Entry: 0x00100670, Ghidra index: 3219, label: FUN_00100670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t DAT_00469b58;
void FUN_00100670(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  iVar1 = DAT_00469948;
  if ((*(int *)(unaff_EDI + 0x60) < 0x11) || (0x14 < *(int *)(unaff_EDI + 0x60))) {
    FUN_000f6da0();
    iVar2 = FUN_000f6e10();
    iVar2 = *(int *)(*(int *)(iVar1 + 0x22c + iVar2 * 4) + 0xc4);
    if (iVar2 == 0) {
      iVar2 = 4;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xbc);
    }
  }
  else {
    iVar2 = FUN_000efa30();
  }
  if (((iVar2 != 4) && (iVar1 = *(int *)(iVar1 + 0x21c + iVar2 * 4), iVar1 != 0)) &&
     (*(char *)(iVar1 + 4) != '\0')) {
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar3 + 0x14))();
  }
  return;
}
