/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B896639717B50E10559B9205D6437E00F5DE9AB5046CFDB5B190149797DFFF8A
 * Entry: 0x00221de0, Ghidra index: 7577, label: FUN_00221de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00221de0(void)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  int iVar5;
  int iStack_c;
  int local_8 [2];
  
  (**(code **)(*in_ECX + 4))(local_8);
  piVar2 = *(int **)(iStack_c + 0x9c);
  if (*piVar2 == 0) {
    iVar3 = piVar2[1];
  }
  else {
    iVar3 = 0;
  }
  if (iVar3 == in_EAX) {
    piVar2 = *(int **)(local_8[0] + 0x9c);
    iStack_c = local_8[0];
  }
  iVar3 = *piVar2;
  iVar5 = 0;
  piVar4 = (int *)0x0;
  if (((iVar3 == 1) || (iVar3 == 10)) && (iVar1 = piVar2[1], iVar1 != 0)) {
    iVar3 = FUN_00115000();
    if (iVar3 == -1) {
      return;
    }
    /* x86 MOV [ESP+0x10],ESI stores a copy of the returned handle;
     * LEA EAX,[ESP+0x10] passes that copy to FUN_00222400. The original
     * ESI register retains its value after the call for the later compare. */
    int guest_handle_copy = iVar3;
    FUN_00222400(&guest_handle_copy);
    iVar5 = iVar1;
  }
  else if ((iVar3 == 0) && (iVar1 = piVar2[1], iVar1 != 0)) {
    iVar3 = *(int *)(iVar1 + 0x6c);
    iVar5 = iVar1;
  }
  else {
    if (iVar3 != 0xb) {
      return;
    }
    piVar4 = (int *)FUN_000d1a00(iStack_c);
    if (piVar4 == (int *)0x0) {
      return;
    }
    iVar3 = *piVar4;
  }
  if (iVar3 != -1) {
    if (iVar5 == 0) {
      if (piVar4 != (int *)0x0) {
        *(byte *)(piVar4 + 3) = *(byte *)(piVar4 + 3) & 0xfd;
      }
    }
    else if (0 < *(short *)(iVar5 + 0x104)) {
      *(short *)(iVar5 + 0x104) = *(short *)(iVar5 + 0x104) + -1;
      return;
    }
  }
  return;
}
