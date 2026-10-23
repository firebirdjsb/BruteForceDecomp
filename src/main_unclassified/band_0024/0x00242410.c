/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C91005ED4C2CA050C745A7DBA41B3D780CD7AAD5C9CE62062D74601887C2F66
 * Entry: 0x00242410, Ghidra index: 8030, label: FUN_00242410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00242410(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EBX;
  
  if (in_EAX == 0) {
    if (*unaff_EBX != 0) {
      FUN_00244120(1);
    }
    *unaff_EBX = 0;
    return;
  }
  if (*unaff_EBX == 0) {
    iVar1 = FUN_002ea01d(0x10);
    if (iVar1 != 0) {
      FUN_001bddb0(iVar1);
      *unaff_EBX = iVar1;
      return;
    }
    *unaff_EBX = 0;
  }
  return;
}
