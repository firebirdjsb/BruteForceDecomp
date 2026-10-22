/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7CB7A08FC3E7183C9610036EF1F2F20550D1A1F53570FCB6FD645EE8C35E116E
 * Entry: 0x002a10d0, Ghidra index: 9515, label: FUN_002a10d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a10d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  FUN_002a5bd0(param_1);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  FUN_00262da0();
  iVar1 = *(int *)(param_1 + 0xf4);
  *(int *)(in_ECX + 0xf4) = iVar1;
  if (*(int *)(in_ECX + 0xbc) != *(int *)(iVar1 + 100)) {
    uVar2 = FUN_002383b0();
    *(undefined4 *)(in_ECX + 0xbc) = uVar2;
  }
  FUN_0029f440();
  return;
}
