/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5C915B663B3969A894AE4CED34F045FC1060453F9582EDC1871D2B325FBAB6E
 * Entry: 0x00242b50, Ghidra index: 8038, label: FUN_00242b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00242b50(void)

{
  int in_EAX;
  int iVar1;
  int *in_ECX;
  
  if (in_EAX == 0) {
    FUN_00243de0();
    return;
  }
  if (*in_ECX == 0) {
    iVar1 = FUN_002ea01d(0x10);
    if (iVar1 != 0) {
      iVar1 = FUN_00247640(iVar1);
      *in_ECX = iVar1;
      FUN_00243fc0();
      return;
    }
    *in_ECX = 0;
    FUN_00243fc0();
  }
  return;
}
