/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0EDFDF0CD21B5EFFDBE5A44D1ED33CCDEEB36AA6BEB3B4B1D937400CB2F94B95
 * Entry: 0x002e9e80, Ghidra index: 10566, label: FUN_002e9e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e9e80(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = *(int *)(in_ECX + 4);
    uVar2 = *(uint *)(in_ECX + 0x14);
    *param_1 = *(undefined4 *)(in_ECX + 0x18);
    *(uint *)(in_ECX + 0x18) = (uint)((int)param_1 - iVar1) / uVar2;
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
  }
  return;
}
