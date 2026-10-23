/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0DFCC990321FB886C92E044EC37A59A5BDD8B18FAA2956533E96830A9903F0D
 * Entry: 0x0007d2d0, Ghidra index: 1488, label: FUN_0007d2d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0007d2d0(void)

{
  int iVar1;
  byte *pbVar2;
  int *in_ECX;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    pbVar2 = (byte *)(**(code **)(*in_ECX + 0x130))(iVar1);
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 1) != 0)) {
      (**(code **)(*in_ECX + 0x178))(pbVar2);
    }
  } while (iVar1 < 8);
  return;
}
