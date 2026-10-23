/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AEBBFA83E12549F743354643FB3A2AD4BB8FB4DD5AE2D13F8C1A0090F4E18CCC
 * Entry: 0x002c12e0, Ghidra index: 10026, label: FUN_002c12e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
void FUN_002c12e0(int param_1,uint param_2)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int *unaff_ESI;
  uint uVar4;
  uint uStack_8;
  uint uStack_4;
  
  if ((int)(uint)*(ushort *)(in_ECX + 2) < in_EAX) {
    unaff_ESI[2] = 0;
    unaff_ESI[1] = in_EAX + -1;
    *unaff_ESI = param_1;
  }
  else {
    unaff_ESI[2] = 1;
    iVar2 = (uint)*(ushort *)(in_ECX + 2) * 2;
    if (in_EAX <= iVar2) {
      do {
        in_EAX = in_EAX * 2;
      } while (in_EAX + (uint)*(ushort *)(in_ECX + 2) * -2 == 0 || in_EAX < iVar2);
    }
    unaff_ESI[1] = in_EAX + -1;
    iVar2 = (*(code *)PTR_FUN_003bc650)(in_EAX * 2);
    *unaff_ESI = iVar2;
  }
  iVar2 = unaff_ESI[1] >> 1;
  unaff_ESI[4] = 0;
  unaff_ESI[3] = in_ECX;
  while (-1 < iVar2) {
    iVar2 = iVar2 + -1;
    *(undefined4 *)(*unaff_ESI + 4 + iVar2 * 4) = 0xffffffff;
  }
  uVar4 = (uint)*(ushort *)(unaff_ESI[3] + 2);
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    (**(code **)(**(int **)(*(int *)(unaff_ESI[3] + 4) + uVar4 * 4) + 4))(&uStack_8);
    uVar3 = uStack_4 ^ uStack_8 ^ param_2;
    iVar2 = *unaff_ESI;
    uVar3 = ((int)uVar3 >> 8) * 0x3ff + uVar3 & unaff_ESI[1];
    sVar1 = *(short *)(iVar2 + uVar3 * 2);
    while (sVar1 != -1) {
      uVar3 = uVar3 + 1 & unaff_ESI[1];
      sVar1 = *(short *)(iVar2 + uVar3 * 2);
    }
    *(short *)(iVar2 + uVar3 * 2) = (short)uVar4;
  }
  return;
}
