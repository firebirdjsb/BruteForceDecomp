/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 22698E4DD954887B40164354E67697C4E565C3540BF51D3D91ABBDC6EC3334D5
 * Entry: 0x0013ea50, Ghidra index: 4034, label: FUN_0013ea50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013ea50(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x1c) & 1) != 0) && (*(int *)(in_ECX + 0x18) != 0)) {
    cVar1 = FUN_0013ebc0(param_1);
    if (cVar1 != '\0') {
      FUN_0013eb70();
    }
  }
  FUN_0010e500(param_1);
  return;
}
