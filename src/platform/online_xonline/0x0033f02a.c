/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6ED1C78C3B79B23770622FEF3DBB7BDCA3DFBDD961B9565B0B86D23A5CF110B3
 * Entry: 0x0033f02a, Ghidra index: 12635, label: FUN_0033f02a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matched to C-draft definitions, NOT verified original Xbox callback ABI. */
extern undefined4 FUN_0033eef3(int param_1);
void FUN_0033f02a(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_3;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_3[3] = 0;
  param_3[4] = param_1;
  param_3[0xd] = param_2;
  FUN_00330c2d(param_3);
  param_3[2] = param_2;
  *param_3 = FUN_0033eef3;
  param_3[1] = &LAB_0033eeb1;
  return;
}
