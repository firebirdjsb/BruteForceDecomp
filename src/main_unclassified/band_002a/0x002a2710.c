/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3EAC3BED89CCEBA9266171F3CC9CB5757F6085F5FBB6460EA21247BFD241213E
 * Entry: 0x002a2710, Ghidra index: 9521, label: FUN_002a2710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a2710(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  iVar1 = FUN_00238290();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)
             FUN_002a27b0(param_1,in_stack_00000020,in_stack_00000024,&stack0x00000028);
  }
  *puVar2 = 0;
  if ((undefined4 *)unaff_ESI[1] != (undefined4 *)0x0) {
    *(undefined4 *)unaff_ESI[1] = puVar2;
    puVar2[1] = unaff_ESI[1];
    unaff_ESI[1] = puVar2;
    return;
  }
  puVar2[1] = 0;
  *unaff_ESI = puVar2;
  unaff_ESI[1] = puVar2;
  return;
}
