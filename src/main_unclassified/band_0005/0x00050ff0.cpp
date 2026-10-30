/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADA0E82D56906F4503D00195FAD15746E2F8B9DB04729ACEE2AADC686BAD627B
 * Entry: 0x00050ff0, Ghidra index: 729, label: FUN_00050ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000514c0(int param_1,undefined4 param_2);

void FUN_00050ff0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  for (param_2 = param_2 - (int)param_1; 1 < param_2 >> 2; param_2 = param_2 + -4) {
    uVar1 = *(undefined4 *)((int)param_1 + param_2 + -4);
    *(undefined4 *)((int)param_1 + param_2 + -4) = *param_1;
    FUN_000514c0(param_1,uVar1);
  }
  return;
}
