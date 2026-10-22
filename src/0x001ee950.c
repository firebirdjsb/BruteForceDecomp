/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE9E73526D881856BDC47471D02AFAD27F6CC5C55DFA8F6035FC15B76396DE43
 * Entry: 0x001ee950, Ghidra index: 6961, label: FUN_001ee950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
undefined4 FUN_001ee950(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int local_8;
  
  puVar1 = param_1;
  uVar2 = param_1[7];
  if (DAT_004698d0 <= (int)uVar2) {
    if (*(int *)(in_ECX + 0x5634 + param_1[6] * 0x18) < (int)uVar2) {
      puVar5 = (uint *)(in_ECX + 0x66c);
      local_8 = 0;
      param_1 = (uint *)0x0;
      do {
        if (0xff < (int)param_1) break;
        if (((char)puVar5[-0x144] != '\0') && (*puVar5 == puVar1[6])) {
          uVar4 = *(int *)(in_ECX + 0x5634 + puVar1[6] * 0x18) + 1;
          if ((int)uVar4 < (int)uVar2) {
            do {
              puVar7 = (uint *)(in_ECX + 0x2e30 + ((uVar4 & 0x1f) + (int)param_1) * 0x28);
              puVar6 = puVar7;
              for (iVar3 = 9; puVar6 = puVar6 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar6 = 0;
              }
              *puVar7 = uVar4;
              uVar2 = puVar1[7];
              uVar4 = uVar4 + 1;
            } while ((int)uVar4 < (int)uVar2);
          }
          local_8 = local_8 + 1;
        }
        puVar5 = puVar5 + 0x166;
        param_1 = (uint *)((int)param_1 + 0x20);
      } while (local_8 < 4);
      *(uint *)(in_ECX + 0x5634 + puVar1[6] * 0x18) = puVar1[7];
    }
    param_1 = (uint *)0x0;
    puVar5 = puVar1;
    if (0 < (int)puVar1[8]) {
      do {
        puVar7 = (uint *)(in_ECX + 0x2930 + (puVar5[9] * 0x20 + (puVar1[7] & 0x1f)) * 0x28);
        *puVar7 = puVar1[7];
        puVar6 = puVar5 + 10;
        for (iVar3 = 9; puVar7 = puVar7 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        param_1 = (uint *)((int)param_1 + 1);
        puVar5 = puVar5 + 10;
      } while ((int)param_1 < (int)puVar1[8]);
    }
    FUN_001eea90(in_ECX,puVar1[7]);
  }
  return 0;
}
