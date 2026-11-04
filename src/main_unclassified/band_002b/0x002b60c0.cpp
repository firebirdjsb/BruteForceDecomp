/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02C3BAA7EF9FAA9387920E7FBFEFCF65B51A4ED316A2BD1999B4D5677A4DB0C5
 * Entry: 0x002b60c0, Ghidra index: 9817, label: FUN_002b60c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE 0x002BEA90 returns with RET 8 after two guest DWORDs.
 * The callee's implicit ESI state remains ABI_UNVERIFIED.
 * Source-matched C++ declaration only; not a native guest ABI adapter. */
extern uint FUN_002bea90(undefined4 param_1, uint param_2);
void FUN_002b60c0(void)

{
  int in_EAX;
  undefined4 uVar1;
  int unaff_EBX;
  uint uVar2;
  
  if (**(int **)(unaff_EBX + 0x54) == 0) {
    uVar1 = 0xf4e3b802;
  }
  else {
    uVar1 = *(undefined4 *)(**(int **)(unaff_EBX + 0x54) + 0x8c);
  }
  FUN_002bea90(unaff_EBX,uVar1);
  uVar2 = (uint)*(ushort *)(in_EAX + 0x12);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    (**(code **)(**(int **)(*(int *)(in_EAX + 0x14) + uVar2 * 4) + 4))();
  }
  return;
}
