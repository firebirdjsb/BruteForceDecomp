/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 951CCE4EA554F7D83FA00DE7C1DC342D53E4458C98D7D522F5E3095ED2986AAC
 * Entry: 0x0034470a, Ghidra index: 12739, label: FUN_0034470a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b140c;
undefined4 FUN_0034470a(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  
  uVar1 = param_2 & 0x1fffffff;
  bVar5 = (byte)(param_2 >> 0x18) & 0xe0;
  iVar2 = FUN_003430ea(uVar1,&DAT_004b140c,5);
  iVar3 = FUN_003437b3(param_1,iVar2);
  if (iVar3 == 0) {
    return 0;
  }
  param_2 = bf_x86_word_replace_lo8(param_2,(uint8_t)uVar1);
  if (iVar2 == 1) {
    **(byte **)(param_1 + 0x24) = (byte)param_2 | bVar5;
  }
  else {
    **(byte **)(param_1 + 0x24) = bVar5 | 0x1f;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    pbVar4 = *(byte **)(param_1 + 0x24);
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        if (iVar2 != 4) {
          if (iVar2 != 5) {
            if (iVar2 != 6) {
              return 1;
            }
            *pbVar4 = (byte)(uVar1 >> 0x1c) | 0x80;
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
            pbVar4 = *(byte **)(param_1 + 0x24);
          }
          *pbVar4 = (byte)(uVar1 >> 0x15) | 0x80;
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
          pbVar4 = *(byte **)(param_1 + 0x24);
        }
        *pbVar4 = (byte)(uVar1 >> 0xe) | 0x80;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        pbVar4 = *(byte **)(param_1 + 0x24);
      }
      *pbVar4 = (byte)(uVar1 >> 7) | 0x80;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      pbVar4 = *(byte **)(param_1 + 0x24);
    }
    *pbVar4 = (byte)param_2 & 0x7f;
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return 1;
}
