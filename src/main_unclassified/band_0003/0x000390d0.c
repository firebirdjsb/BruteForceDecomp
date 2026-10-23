/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB72127953E20CFFB32E1C3AF28D605EDFD365779E867F6BB4A8FF8D5988D34A
 * Entry: 0x000390d0, Ghidra index: 392, label: FUN_000390d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_000390d0(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (param_2 != param_3) {
    puVar3 = (uint *)(param_4 + 0x14);
    puVar5 = (uint *)(param_3 + 0x14);
    do {
      param_4 = param_4 + -0x18;
      param_3 = param_3 + -0x18;
      puVar4 = puVar3 + -6;
      if (param_4 != param_3) {
        uVar2 = puVar5[-8];
        uVar1 = puVar5[-9];
        puVar3[-10] = puVar5[-10];
        puVar3[-9] = uVar1;
        puVar3[-8] = uVar2;
        uVar2 = puVar5[-6];
        if (*puVar4 != uVar2) {
          if (*puVar4 != 0) {
            FUN_0008f6e0();
          }
          *puVar4 = uVar2;
          if ((uVar2 != 0) && ((uVar2 & 1) == 0)) {
            uVar2 = uVar2 * 0x19660d + 0x3c6ef35f >> 0x15;
            puVar3[-7] = *(uint *)(&DAT_00414da0 + uVar2 * 4);
            *(uint **)(&DAT_00414da0 + uVar2 * 4) = puVar3 + -7;
          }
        }
      }
      puVar3 = puVar4;
      puVar5 = puVar5 + -6;
    } while (param_3 != param_2);
  }
  *param_1 = param_4;
  return;
}
