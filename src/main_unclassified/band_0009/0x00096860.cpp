/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F9E27C2E25A8E268B68A08D1574C73B124C65D35455A3E1DB98BEA107C9BDE4E
 * Entry: 0x00096860, Ghidra index: 1830, label: FUN_00096860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00096860(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x68);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_000968e0();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *(undefined1 *)(iVar1 + 0x55) = 0;
  *(undefined1 *)(iVar1 + 0x54) = 0;
  *param_3 = iVar1;
  return 0;
}
