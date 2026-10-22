/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 409987EB8D420C1D31F8DE438EB011B67419C77F61444D8FE8CDCFA7318D360B
 * Entry: 0x000c8a30, Ghidra index: 2477, label: FUN_000c8a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_000c8a30(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 in_stack_ffffffd8;
  int local_10;
  int local_c;
  uint local_8;
  
  cVar2 = FUN_000c8ba0();
  if (cVar2 != '\0') {
    iVar1 = *(int *)(*(int *)(*(int *)(in_EAX + 0x28) + 8) + 0x30);
    FUN_001f7540(in_stack_ffffffd8,0);
    local_10 = FUN_000c85d0(in_EAX + 0x88);
    local_8 = 1;
    if (*(int *)(iVar1 + 4) != 0) {
      if (*(int *)(iVar1 + 4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = **(int **)(iVar1 + 8);
      }
      uVar6 = *(uint *)(iVar4 + 4);
      if (uVar6 != 0) {
        local_10 = local_10 * 8;
        local_c = 0;
        do {
          for (uVar5 = 0;
              ((*(int *)(in_EAX + 0x8c) != 0 &&
               (uVar5 < (uint)(*(int *)(in_EAX + 0x90) - *(int *)(in_EAX + 0x8c) >> 3))) &&
              (*(uint *)(*(int *)(in_EAX + 0x8c) + 4 + uVar5 * 8) != uVar6)); uVar5 = uVar5 + 1) {
          }
          if (*(int *)(in_EAX + 0x8c) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(int *)(in_EAX + 0x90) - *(int *)(in_EAX + 0x8c) >> 3;
          }
          if ((uVar5 == uVar3) && ((*(byte *)(uVar6 + 0x26) & 8) != 0)) {
            uVar5 = *(uint *)(*(int *)(in_EAX + 0x8c) + 4 + local_10);
            puVar7 = (undefined4 *)(*(int *)(in_EAX + 0x8c) + local_10);
            if (uVar5 != uVar6) {
              if (uVar5 != 0) {
                FUN_0008f6e0();
              }
              puVar7[1] = uVar6;
              if ((uVar6 & 1) == 0) {
                uVar6 = uVar6 * 0x19660d + 0x3c6ef35f >> 0x15;
                *puVar7 = *(undefined4 *)(&DAT_00414da0 + uVar6 * 4);
                *(undefined4 **)(&DAT_00414da0 + uVar6 * 4) = puVar7;
              }
            }
            local_10 = local_10 + 8;
          }
          if (*(uint *)(iVar1 + 4) <= local_8) {
            return;
          }
          local_c = local_c + 4;
          if (local_8 < *(uint *)(iVar1 + 4)) {
            iVar4 = *(int *)(local_c + *(int *)(iVar1 + 8));
          }
          else {
            iVar4 = 0;
          }
          uVar6 = *(uint *)(iVar4 + 4);
          local_8 = local_8 + 1;
        } while (uVar6 != 0);
      }
    }
  }
  return;
}
