/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62EBB32FF13521759DEF084259E57473298F2327D039A8FCA20E0D0858A607C4
 * Entry: 0x002a4630, Ghidra index: 9550, label: FUN_002a4630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a4630(int param_1)

{
  int in_ECX;
  
  FUN_002a5bd0(param_1);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  FUN_00262da0();
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  return;
}
