/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE06A3DA8B846D2D7F7BAA47209A2AE6ECBD048A37B0B70366C9EF9A66BAC061
 * Entry: 0x0016c3c0, Ghidra index: 4779, label: FUN_0016c3c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0016c3c0(float param_1)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(in_EAX + 4);
  if (iVar1 <= *(int *)(in_EAX + 8)) {
    piVar2 = (int *)(*(int *)(in_EAX + 0x10) + iVar1 * 4);
    do {
      if (param_1 < (float)*(int *)(*piVar2 + 0xc)) {
        return iVar1 + -2;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 <= *(int *)(in_EAX + 8));
  }
  return -1;
}
