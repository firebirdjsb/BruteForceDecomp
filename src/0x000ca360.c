/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18000D6903E737A344CF47C1B8E33D7A87201CDE93695191C2EE3ADA08DEE2F2
 * Entry: 0x000ca360, Ghidra index: 2504, label: FUN_000ca360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ca360(void)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  undefined4 uVar3;
  int in_ECX;
  int local_c [3];
  
  local_c[0] = 0xc;
  local_c[1] = 0x10;
  local_c[2] = 0x18;
  iVar1 = *(int *)(*(int *)(in_ECX + 100) + 0x2c);
  if ((iVar1 != 0) &&
     (((piVar2 = *(int **)(iVar1 + 0x24), piVar2 == (int *)0x0 || (*piVar2 != 0xe38a4ca)) ||
      (piVar2[1] != local_c[in_EAX])))) {
    uVar3 = FUN_000cd9c0();
    *(undefined4 *)(iVar1 + 0x24) = uVar3;
  }
  return;
}
