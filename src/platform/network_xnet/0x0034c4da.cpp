/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2A69278B93DB436A424EC0256F7568784C9680D25BBFD16D4737C7C6FD8DF28
 * Entry: 0x0034c4da, Ghidra index: 12961, label: FUN_0034c4da
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034c4da(int param_1,uint param_2)

{
  uint uVar1;
  
  while( true ) {
    if (param_2 == 0) {
      return 1;
    }
    if (((param_2 < 4) || (*(ushort *)(param_1 + 2) < 4)) ||
       (uVar1 = (uint)*(ushort *)(param_1 + 2), param_2 < uVar1)) break;
    param_2 = param_2 - uVar1;
    param_1 = param_1 + uVar1;
  }
  return 0;
}
