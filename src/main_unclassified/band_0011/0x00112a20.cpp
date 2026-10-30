/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CC8CDC0E0128C4E7D6DED5C668C45209B79F32617473A0DDA4B5769501E834E
 * Entry: 0x00112a20, Ghidra index: 3561, label: FUN_00112a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00112a20(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = (**(code **)(*unaff_ESI + 0xf8))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*unaff_ESI + 0xf8))();
    if (*(char *)(*(int *)(iVar1 + 0x794) + 0xd) != '\0') {
      return 1;
    }
  }
  return 0;
}
