/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60D0090F19916283B31777BD62C109174A13C49163A6103AD119A329E260DCB0
 * Entry: 0x001f8290, Ghidra index: 7061, label: FUN_001f8290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f8290(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int in_EAX;
  int unaff_EBX;
  int iVar5;
  code *in_stack_00000014;
  
  while( true ) {
    iVar5 = in_EAX * 2 + 2;
    if (param_1 <= iVar5) break;
    iVar1 = unaff_EBX + iVar5 * 0xc;
    cVar4 = (*in_stack_00000014)(iVar1,iVar1 + -0xc);
    if (cVar4 != '\0') {
      iVar5 = in_EAX * 2 + 1;
    }
    puVar2 = (undefined4 *)(unaff_EBX + iVar5 * 0xc);
    puVar3 = (undefined4 *)(unaff_EBX + in_EAX * 0xc);
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    in_EAX = iVar5;
  }
  if (iVar5 == param_1) {
    puVar3 = (undefined4 *)(unaff_EBX + -0xc + param_1 * 0xc);
    puVar2 = (undefined4 *)(unaff_EBX + in_EAX * 0xc);
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    puVar2[2] = puVar3[2];
  }
  FUN_001f8340();
  return;
}
