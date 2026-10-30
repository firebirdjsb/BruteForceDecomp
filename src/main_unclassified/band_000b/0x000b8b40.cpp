/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13424F50326AC764FDADA83434FBA84DF6E65FF893A314C2F5269E4AE6E6EB76
 * Entry: 0x000b8b40, Ghidra index: 2232, label: FUN_000b8b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_00085440(void);
extern int FUN_00234c90(void);
extern void FUN_000b6730(int param_1,int param_2);

extern uint32_t *DAT_00469b58;
void FUN_000b8b40(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  cVar2 = (**(code **)(*(int *)DAT_00469b58[2] + 0x24))();
  if ((((cVar2 != '\0') &&
       (iVar3 = (**(code **)(*DAT_00469b58 + 0x48))(), *(char *)(iVar3 + 0x150) != '\0')) &&
      (iVar3 = (**(code **)(*(int *)DAT_00469b58[2] + 0xe0))(), iVar3 != 0)) &&
     ((iVar4 = (**(code **)(*(int *)DAT_00469b58[2] + 0x60))(), iVar4 != 0 &&
      (*(char *)(iVar3 + 0x4c) != '\0')))) {
    iVar4 = 0;
    uVar5 = FUN_00085440();
    if (1 < uVar5) {
      iVar1 = *(int *)(iVar3 + 0x20);
      iVar7 = *(int *)(iVar3 + 0x1c);
      if (iVar7 != iVar1) {
        iVar4 = 0;
        do {
          (**(code **)(*(int *)DAT_00469b58[2] + 0x60))();
          iVar6 = FUN_00234c90();
          iVar4 = iVar4 + 1;
          if (iVar6 == 0) goto LAB_000b8c02;
          iVar7 = iVar7 + 0x4c;
        } while (iVar7 != iVar1);
      }
      iVar4 = 0;
    }
LAB_000b8c02:
    FUN_000b6730(*(undefined4 *)(*(int *)(param_1 + 0x135c) + 0x30),iVar3 + 0x4c,iVar4);
  }
  return;
}
