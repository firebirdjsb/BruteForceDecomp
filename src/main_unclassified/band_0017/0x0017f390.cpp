/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0177B7B5C936E1ACD8B74F141B7233DC7186CAA9039A851589035A65371A8FD7
 * Entry: 0x0017f390, Ghidra index: 5125, label: FUN_0017f390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0017f390(void)

{
  char cVar1;
  uint in_EAX;
  undefined4 *puVar2;
  uint uVar3;
  int in_EDX;
  int unaff_ESI;
  int *unaff_EDI;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (unaff_EDI == (int *)0x0) {
    return in_EAX & 0xffffff00;
  }
  if ((*(byte *)(unaff_EDI + 7) & 2) == 0) {
    return in_EAX & 0xffffff00;
  }
  uVar4 = 0;
  if (*(int *)(in_EDX + 0x58) == 0) {
    if (*(char *)(in_EDX + 0xc) == '\0') {
      if (*(char *)(in_EDX + 0x1c) == '\0') goto LAB_0017f44d;
      puVar2 = (undefined4 *)FUN_0017e200(unaff_ESI,&local_c,1);
      local_4 = puVar2[2];
      local_8 = puVar2[1];
      uVar4 = local_4;
      uVar5 = local_8;
    }
    else {
      puVar2 = (undefined4 *)FUN_0017e200(unaff_ESI,&local_c,1);
      local_4 = puVar2[2];
      local_8 = puVar2[1];
      uVar4 = local_8;
      uVar5 = local_4;
    }
    local_c = *puVar2;
    cVar1 = FUN_0017e510(unaff_ESI);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*unaff_EDI + 0x24))
                        (*(undefined4 *)(unaff_ESI + 0x19c),*(undefined4 *)(unaff_ESI + 0x19c),uVar4
                         ,uVar5);
      return uVar3;
    }
    uVar4 = *(undefined4 *)(unaff_ESI + 0x1a0);
  }
LAB_0017f44d:
  uVar3 = (**(code **)(*unaff_EDI + 0x24))(uVar4);
  return uVar3;
}
