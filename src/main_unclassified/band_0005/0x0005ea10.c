/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2AA2CA63C6FEC3DFFC5BC4218E4E723785CF510F62DD61FC84552D29476ADDE0
 * Entry: 0x0005ea10, Ghidra index: 990, label: FUN_0005ea10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffc40;
extern uint32_t DAT_003ffc70;
uint FUN_0005ea10(int *param_1)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  
  uVar2 = (**(code **)(*param_1 + 0xf4))();
  if ((uVar2 != 0) && ((*(uint *)(uVar2 + 0x3c4) & 0x100) != 0)) {
    uVar2 = *(uint *)(uVar2 + 0x58);
    if (uVar2 == 4) {
      pcVar3 = &DAT_003ffc70;
    }
    else {
      if (uVar2 != 1) goto LAB_0005eaa2;
      in_EAX = in_EAX + 0x10;
      pcVar3 = &DAT_003ffc40;
    }
    if (in_EAX != 0) {
      iVar1 = *(int *)(in_EAX + 4);
      pcVar5 = (char *)0x0;
      puVar7 = (undefined4 *)(iVar1 + 4);
      pcVar8 = pcVar3;
      do {
        if (iVar1 != 0) {
          iVar4 = *(int *)(in_EAX + 8) - iVar1;
          pcVar3 = (char *)(iVar4 >> 3);
          if ((pcVar5 < pcVar3) && (*pcVar8 != '\0')) {
            piVar6 = (int *)0x0;
            if (pcVar5 < pcVar3) {
              piVar6 = (int *)*puVar7;
            }
            if (param_1 == piVar6) {
              return CONCAT31((int3)(iVar4 >> 0xb),1);
            }
          }
        }
        pcVar5 = pcVar5 + 1;
        pcVar8 = pcVar8 + 0x10;
        puVar7 = puVar7 + 2;
      } while ((int)pcVar5 < 3);
    }
    return (uint)pcVar3 & 0xffffff00;
  }
LAB_0005eaa2:
  return uVar2 & 0xffffff00;
}
