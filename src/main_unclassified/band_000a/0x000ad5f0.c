/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5328BBB88473B7C518E6FDA9DB83DC7C868450AD232057C4DEABACEF8D2FE23A
 * Entry: 0x000ad5f0, Ghidra index: 2073, label: FUN_000ad5f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000ad5f0(void)

{
  float fVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float local_4;
  
  iVar5 = 0;
  iVar2 = 0;
  local_4 = 3.4028235e+38;
  piVar4 = (int *)(in_EAX + 100);
  while( true ) {
    if ((iVar2 < 0) || (2 < iVar2)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar4;
    }
    fVar1 = *(float *)(iVar3 + 0x60);
    if (fVar1 == 0.0) break;
    if (fVar1 < local_4) {
      iVar5 = iVar3;
      local_4 = fVar1;
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 1;
    if (2 < iVar2) {
      return iVar5;
    }
  }
  return iVar3;
}
