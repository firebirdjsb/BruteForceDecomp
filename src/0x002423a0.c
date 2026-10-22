/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 94662823BA0F8898D596B2885AA030E8584B9A1006D37723DC78BF5A6FE719A1
 * Entry: 0x002423a0, Ghidra index: 8029, label: FUN_002423a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002423a0(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EBX;
  
  if (in_EAX == 0) {
    if (*unaff_EBX != 0) {
      FUN_00244180(1);
    }
    *unaff_EBX = 0;
    return;
  }
  if (*unaff_EBX == 0) {
    iVar1 = FUN_002ea01d(0x10);
    if (iVar1 != 0) {
      FUN_00245ea0(iVar1);
      *unaff_EBX = iVar1;
      return;
    }
    *unaff_EBX = 0;
  }
  return;
}
