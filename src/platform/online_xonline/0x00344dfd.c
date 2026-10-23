/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA3ED71F1B8206C0887902D67CA3DA7A0BC7C002D014F28FCD74CF47D54B0599
 * Entry: 0x00344dfd, Ghidra index: 12753, label: FUN_00344dfd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00344dfd(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_24 [32];
  
  local_24[0] = 0;
  FUN_003433d3(local_24,param_3);
  puVar2 = local_24;
  uVar1 = FUN_00343343(local_24);
  FUN_00344cb6(param_1,param_2,uVar1,puVar2);
  return;
}
