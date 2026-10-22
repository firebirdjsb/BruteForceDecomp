/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C8CE9CC03FCF6F1E69C4D26158D09A1209CE7BBA6CAAE1ACB9C6467C9E38841
 * Entry: 0x00139c60, Ghidra index: 3965, label: FUN_00139c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_00139c60(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (param_2 != param_3) {
    puVar2 = (uint *)(param_4 + 0x10);
    puVar4 = (uint *)(param_3 + 0x10);
    do {
      *(undefined4 *)(param_4 + -0x14) = *(undefined4 *)(param_3 + -0x14);
      param_3 = param_3 + -0x14;
      param_4 = param_4 + -0x14;
      puVar3 = puVar2 + -5;
      puVar2[-8] = puVar4[-8];
      *(byte *)(puVar2 + -7) = (byte)puVar2[-7] ^ ((byte)puVar4[-7] ^ (byte)puVar2[-7]) & 1;
      uVar1 = puVar4[-5];
      if (*puVar3 != uVar1) {
        if (*puVar3 != 0) {
          FUN_0008f6e0();
        }
        *puVar3 = uVar1;
        if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
          uVar1 = uVar1 * 0x19660d + 0x3c6ef35f >> 0x15;
          puVar2[-6] = *(uint *)(&DAT_00414da0 + uVar1 * 4);
          *(uint **)(&DAT_00414da0 + uVar1 * 4) = puVar2 + -6;
        }
      }
      puVar2 = puVar3;
      puVar4 = puVar4 + -5;
    } while (param_3 != param_2);
  }
  *param_1 = param_4;
  return;
}
