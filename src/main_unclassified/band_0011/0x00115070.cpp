/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AC335383EE5F8F8AD929DA7DFBE4EEC14A52726883533DC1489A5491006A645
 * Entry: 0x00115070, Ghidra index: 3576, label: FUN_00115070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00115070(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_ESI;
  int local_4;
  
  local_4 = in_ECX;
  iVar2 = FUN_00236e30(in_ECX,&local_4);
  if (((iVar2 != 0) && (local_4 != 0)) && (local_4 != -1)) {
    cVar1 = FUN_00235e90(local_4,in_ECX,param_1,unaff_ESI[0x1b]);
    if (cVar1 != '\0') {
      iVar2 = *unaff_ESI;
      uVar3 = (**(code **)(iVar2 + 0x40))();
      (**(code **)(iVar2 + 0x50))(uVar3);
      (**(code **)(*unaff_ESI + 0xbc))();
      return 1;
    }
  }
  return 0;
}
