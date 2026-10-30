/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A9D819D314410C3B84977DC128E02044F204318D915C9DC8CA20C892FF56B86
 * Entry: 0x001b0550, Ghidra index: 5585, label: FUN_001b0550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b0550(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EBX;
  
  if (in_EAX == 0) {
    if (*unaff_EBX != 0) {
      FUN_0017ca90(1);
    }
    *unaff_EBX = 0;
    return;
  }
  if (*unaff_EBX == 0) {
    iVar1 = FUN_002ea01d(0x10);
    if (iVar1 != 0) {
      FUN_001cca00(iVar1);
      *unaff_EBX = iVar1;
      return;
    }
    *unaff_EBX = 0;
  }
  return;
}
