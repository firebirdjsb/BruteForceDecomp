/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28B92F697C02F2DA0C6FB572416AF4387441BDDF8BE5E767C56C4CDAACC49C82
 * Entry: 0x0020d8a0, Ghidra index: 7385, label: FUN_0020d8a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_0020d8a0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  
  if (param_1 != param_2) {
    puVar6 = (uint *)(param_1 + 0x2c);
    do {
      if (0xf < *puVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(puVar6[-5]);
      }
      *puVar6 = 0xf;
      puVar6[-1] = 0;
      *(undefined1 *)(puVar6 + -5) = 0;
      uVar1 = puVar6[-7];
      if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
        puVar6[-7] = 0;
        uVar2 = *(uint *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
        puVar4 = (uint *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
        while (uVar2 != 0) {
          puVar3 = (uint *)*puVar4;
          if (puVar3 == puVar6 + -8) {
            *puVar4 = *(uint *)*puVar4;
            break;
          }
          puVar4 = puVar3;
          uVar2 = *puVar3;
        }
      }
      if ((puVar6[-9] != 0) && ((puVar6[-9] & 1) == 0)) {
        iVar5 = FUN_0008f690();
        puVar6[-9] = 0;
        uVar1 = *(uint *)(&DAT_00414da0 + iVar5 * 4);
        puVar4 = (uint *)(&DAT_00414da0 + iVar5 * 4);
        while (uVar1 != 0) {
          puVar3 = (uint *)*puVar4;
          if (puVar3 == puVar6 + -10) {
            *puVar4 = *(uint *)*puVar4;
            break;
          }
          puVar4 = puVar3;
          uVar1 = *puVar3;
        }
      }
      param_1 = param_1 + 0x40;
      puVar6 = puVar6 + 0x10;
    } while (param_1 != param_2);
  }
  return;
}
