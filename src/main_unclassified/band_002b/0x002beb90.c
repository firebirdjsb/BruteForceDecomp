/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0FA55A2B8B6731CB0F0A029F1CB17AB3FC88D1F98A775B6E496F8FD49C35B4C
 * Entry: 0x002beb90, Ghidra index: 9980, label: FUN_002beb90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002beb90(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_EDI;
  
  uVar4 = param_2 & unaff_EDI[1];
  puVar1 = (uint *)(unaff_EDI[3] + uVar4 * 8);
  uVar2 = puVar1[1];
  while( true ) {
    if (uVar2 == 0) {
      return 0;
    }
    if (((*puVar1 | 0x80000000) == param_2) &&
       (iVar3 = (**(code **)*unaff_EDI)(uVar2,param_1), iVar3 != 0)) break;
    uVar4 = uVar4 + 1 & unaff_EDI[1];
    uVar2 = *(uint *)(unaff_EDI[3] + 4 + uVar4 * 8);
    puVar1 = (uint *)(unaff_EDI[3] + uVar4 * 8);
  }
  return puVar1[1];
}
