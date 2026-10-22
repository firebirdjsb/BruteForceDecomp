/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4666A4EE6774A703A24961B43FB5CB0100BB5983848B1C0EDE1656B6B8F9C68
 * Entry: 0x00062dc0, Ghidra index: 1068, label: FUN_00062dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00062dc0(int param_1,int param_2)

{
  FUN_00063af0(param_1 + 8,&param_1,*(int *)(param_1 + 0xc) + param_2 * 8);
  return 0;
}
