/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1525E3DB75C4047CD1D884247BA4C9CCE8B4A81DADD864F7A8BD81EA16E5317
 * Entry: 0x0005f810, Ghidra index: 1008, label: FUN_0005f810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005f810(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  FUN_002a5bd0(param_1);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  FUN_00262da0();
  iVar1 = *(int *)(param_1 + 0xf0);
  *(int *)(in_ECX + 0xf0) = iVar1;
  if (*(int *)(in_ECX + 0xbc) != *(int *)(iVar1 + 100)) {
    uVar2 = FUN_002383b0();
    *(undefined4 *)(in_ECX + 0xbc) = uVar2;
  }
  FUN_0029f440();
  return;
}
