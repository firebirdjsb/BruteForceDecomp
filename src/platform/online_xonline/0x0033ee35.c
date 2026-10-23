/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A6A947883F7E67F5A5B00C6BC03AA42595E828BBBFEE99B72F6EE1320ABCA18
 * Entry: 0x0033ee35, Ghidra index: 12630, label: FUN_0033ee35
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matched to C-draft definitions, NOT verified original Xbox callback ABI. */
extern undefined4 FUN_0033ed68(int param_1);
void FUN_0033ee35(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_7;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_7[3] = 0;
  param_7[7] = param_1;
  param_7[4] = param_2;
  param_7[5] = param_3;
  param_7[10] = param_4;
  param_7[0xb] = param_5;
  param_7[0xc] = param_6;
  FUN_00330c2d(param_7);
  param_7[2] = param_6;
  *param_7 = FUN_0033ed68;
  param_7[1] = &LAB_0033edc4;
  return;
}
