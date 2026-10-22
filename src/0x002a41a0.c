/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73B88BEC436AF24D89DDD4D401CBC0E307F8C497096116CB28326A2C622E6F15
 * Entry: 0x002a41a0, Ghidra index: 9544, label: FUN_002a41a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a41a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EDI;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  int *in_stack_00000028;
  
  iVar1 = FUN_00238290();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_002a4250(in_stack_00000020,in_stack_00000024);
  }
  *puVar2 = 0;
  if ((undefined4 *)unaff_EDI[1] == (undefined4 *)0x0) {
    puVar2[1] = 0;
    *unaff_EDI = puVar2;
  }
  else {
    *(undefined4 *)unaff_EDI[1] = puVar2;
    puVar2[1] = unaff_EDI[1];
  }
  unaff_EDI[1] = puVar2;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 8))(in_stack_00000028);
  }
  return;
}
