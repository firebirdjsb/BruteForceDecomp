/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D83D1843890B83BFB7E664DD4A6D27516401CA13F8CDD6E3F8260941B355175
 * Entry: 0x00144a00, Ghidra index: 4167, label: FUN_00144a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00144a00(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1 == param_2) {
    *in_EAX = param_3;
    return;
  }
  do {
    uVar1 = *(undefined4 *)(param_2 + -4);
    uVar3 = *(undefined4 *)(param_2 + -0x10);
    uVar2 = *(undefined4 *)(param_2 + -8);
    iVar4 = param_2 + -0x10;
    puVar5 = param_3 + -4;
    param_3[-3] = *(undefined4 *)(param_2 + -0xc);
    *puVar5 = uVar3;
    param_3[-2] = uVar2;
    param_3[-1] = uVar1;
    param_2 = iVar4;
    param_3 = puVar5;
  } while (iVar4 != param_1);
  *in_EAX = puVar5;
  return;
}
