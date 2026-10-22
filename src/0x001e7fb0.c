/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2BF45143213B4715EB6D851FCC28B2733A13B9DC753BEF1FE7FA62965F53E534
 * Entry: 0x001e7fb0, Ghidra index: 6831, label: FUN_001e7fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e7fb0(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 4);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_001e7d10();
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}
