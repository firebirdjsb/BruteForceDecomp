/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3BFD91AFE7F9C6607D59E2F013214DC923356ABF94ED65B4B78B3FF8146ACB1
 * Entry: 0x002d4ee0, Ghidra index: 10216, label: FUN_002d4ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002d4ee0(void)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int local_10 [3];
  
  iVar3 = *(int *)(*(int *)(in_ECX + 0x28) + 0x14);
  piVar7 = (int *)(in_ECX + 0x28);
  iVar8 = 0;
  do {
    iVar4 = *piVar7;
    cVar2 = *(char *)(iVar4 + 0x70);
    local_10[iVar8] = iVar4;
    if (cVar2 == '\b') {
      FUN_002be1c0(*(undefined4 *)(*(int *)(iVar4 + 0x94) + 0xc));
    }
    iVar8 = iVar8 + 1;
    piVar7 = piVar7 + 7;
  } while (iVar8 < 2);
  psVar1 = (short *)(*(int *)(iVar3 + 0xac) + 0x10);
  *psVar1 = *psVar1 + 1;
  iVar8 = 0;
  do {
    if (*(char *)(*(int *)(local_10[iVar8] + 0x90) + 100) < '\b') {
      FUN_002bb290();
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 2);
  *(int *)(iVar3 + 0x124) = *(int *)(iVar3 + 0x124) + 1;
  FUN_002d4bc0(in_ECX,local_10[0],local_10[1]);
  piVar7 = *(int **)(iVar3 + 0xac);
  iVar3 = piVar7[1];
  *(short *)(piVar7 + 4) = (short)piVar7[4] + -1;
  if ((iVar3 != 0) && (iVar3 != *piVar7)) {
    (*(code *)PTR_FUN_003bc654)(iVar3);
    return;
  }
  uVar5 = *piVar7 + 0x23U & 0xffffffe0;
  piVar7[2] = uVar5;
  uVar6 = (uint)*(ushort *)((int)piVar7 + 0x12);
  if (*(ushort *)((int)piVar7 + 0x12) == 0) {
    uVar6 = 0x7fe0;
  }
  piVar7[3] = uVar5 + uVar6;
  piVar7[1] = *piVar7;
  return;
}
