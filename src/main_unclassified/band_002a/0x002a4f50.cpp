/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5FFAFF7C4DD5CCDD9E8136BAAA66F10B25FF2083B063B34AD3B15AF96979E69D
 * Entry: 0x002a4f50, Ghidra index: 9558, label: FUN_002a4f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a4f50(void)

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
    puVar2 = (undefined4 *)FUN_002a4fe0(in_stack_00000020,in_stack_00000024);
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
