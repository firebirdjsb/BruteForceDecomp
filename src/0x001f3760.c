/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC8ACF9CFCCC1F01E7103561AC8BADF6EC55E6F6055A464BEE80E0312B5DBA81
 * Entry: 0x001f3760, Ghidra index: 7021, label: FUN_001f3760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f3760(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 8);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)puVar1[0x1f];
    (**(code **)*puVar1)(1);
    *(undefined4 *)(in_ECX + 8) = 0;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x24))(1);
    }
  }
  piVar2 = (int *)(in_ECX + 0x1c);
  *(undefined4 *)(in_ECX + 0x24) = 0;
  if (*(int *)(in_ECX + 0x1c) != 0) {
    FUN_000d0680(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x1c) + 0x204));
  }
  if (*(int *)(in_ECX + 0x2c) != 0) {
    FUN_0001d590(in_ECX + 0x28,in_ECX);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 0x2c));
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  iVar3 = *piVar2;
  while (iVar3 != 0) {
    piVar4 = (int *)*piVar2;
    *piVar2 = *piVar4;
    *piVar4 = 0;
    piVar4[1] = 0;
    iVar3 = *piVar2;
  }
  *piVar2 = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  return;
}
