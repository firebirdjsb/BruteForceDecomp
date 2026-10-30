/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF54353CEA2EB64B587E7829AC7133C2E8AC20C83BB56D8164A2570F3C2E9463
 * Entry: 0x000d1060, Ghidra index: 2589, label: FUN_000d1060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_000d1060(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 3;
    do {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      uVar1 = param_3[3];
      if (*puVar2 != uVar1) {
        if (*puVar2 != 0) {
          FUN_0008f6e0();
        }
        *puVar2 = uVar1;
        if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
          uVar1 = uVar1 * 0x19660d + 0x3c6ef35f >> 0x15;
          puVar2[-1] = *(uint *)(&DAT_00414da0 + uVar1 * 4);
          *(uint **)(&DAT_00414da0 + uVar1 * 4) = puVar2 + -1;
        }
      }
      param_1 = param_1 + 4;
      puVar2 = puVar2 + 4;
    } while (param_1 != param_2);
  }
  return;
}
