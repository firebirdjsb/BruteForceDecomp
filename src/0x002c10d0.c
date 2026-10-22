/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C66AEC831C4E57AAD900F1773800B6B9ABB3F942D33171DCC49765239075B30
 * Entry: 0x002c10d0, Ghidra index: 10024, label: FUN_002c10d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
void FUN_002c10d0(int param_1)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  int *unaff_ESI;
  uint uStack_8;
  int iStack_4;
  
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
    (**(code **)(**(int **)(*(int *)(unaff_ESI[3] + 4) + uVar4 * 4) + 8))(&uStack_8);
    uVar3 = iStack_4 * 0x4b ^ uStack_8;
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
