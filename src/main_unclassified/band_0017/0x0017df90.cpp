/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16A3A3363B98C09F4BF4CF40053E16669E028152781DFCEF22924F791ECA2F8A
 * Entry: 0x0017df90, Ghidra index: 5096, label: FUN_0017df90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017df90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(uint *)*param_2 < *(uint *)*param_1) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  if (*(uint *)*param_3 < *(uint *)*param_2) {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  if (*(uint *)*param_2 < *(uint *)*param_1) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}
