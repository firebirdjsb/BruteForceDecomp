/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37A825F66661E8C74B726CEB8AC2FC0FB509774E4ABAB431B7EAEB643B48FDB4
 * Entry: 0x00235da0, Ghidra index: 7825, label: FUN_00235da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00235da0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 0x4c);
  iVar1 = *(int *)(in_ECX + 0x50);
  *(undefined4 *)(in_ECX + 8) = param_1;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
    FUN_00235da0(param_1);
  }
  return;
}
