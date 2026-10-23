/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5796F6F99520D8D3D5AAACC29ADAE3818A12225FB00108D237F4FE605E29F34A
 * Entry: 0x001e80a0, Ghidra index: 6834, label: FUN_001e80a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_001e80a0(void)

{
  int in_EAX;
  int iVar1;
  float *pfVar2;
  
  pfVar2 = *(float **)(in_EAX + 0xb4);
  iVar1 = 0;
  do {
    if ((float10)*pfVar2 != (float10)0.0) {
      return (float10)*pfVar2;
    }
    iVar1 = iVar1 + 1;
    pfVar2 = pfVar2 + 1;
  } while (iVar1 < 0x15);
  return (float10)0.0;
}
