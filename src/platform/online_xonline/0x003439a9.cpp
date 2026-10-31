/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8E89A4FCE5AD86565151F38E707F20537FB1CFDC1A61D28E6FE462B24B48B30
 * Entry: 0x003439a9, Ghidra index: 12718, label: FUN_003439a9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE: direct CALL 0x00343377 with two pushed guest DWORDs;
 * callee RET 8. Node layout and complete Xbox ABI remain ABI_UNVERIFIED. */
extern void FUN_00343377(int guest_node_va, undefined4 guest_status_word);
undefined4 FUN_003439a9(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x18) = uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    FUN_00343377(param_1,0x3ea);
  }
  return 1;
}
