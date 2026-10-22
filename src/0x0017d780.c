/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39AE673330C85764D160C1A35B043C216ACB391F757CF42EB60C59F775C332B6
 * Entry: 0x0017d780, Ghidra index: 5079, label: FUN_0017d780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017d780(int param_1,int param_2)

{
  uint *in_EAX;
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  
  iVar2 = param_2 - param_1 >> 2;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (**(uint **)(param_1 + iVar1 * 4) < *in_EAX) {
        param_1 = param_1 + 4 + iVar1 * 4;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  *unaff_EBX = param_1;
  return;
}
