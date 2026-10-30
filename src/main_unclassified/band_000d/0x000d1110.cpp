/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBED4ABD82BD8033E28FA00BC0F8DC5907EA1F8A02679714A9F7C06750464CD8
 * Entry: 0x000d1110, Ghidra index: 2591, label: FUN_000d1110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t DAT_00414da0;
undefined4 * FUN_000d1110(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  
  puVar2 = param_3;
  if (param_1 != param_2) {
    puVar3 = param_3 + 3;
    param_3 = param_1 + 3;
    do {
      *puVar2 = *param_1;
      puVar2[1] = param_1[1];
      uVar1 = *param_3;
      if (*puVar3 != uVar1) {
        if (*puVar3 != 0) {
          FUN_0008f6e0();
        }
        *puVar3 = uVar1;
        if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
          uVar1 = uVar1 * 0x19660d + 0x3c6ef35f >> 0x15;
          puVar3[-1] = *(uint *)(&DAT_00414da0 + uVar1 * 4);
          *(uint **)(&DAT_00414da0 + uVar1 * 4) = puVar3 + -1;
        }
      }
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (param_1 != param_2);
  }
  return puVar2;
}
