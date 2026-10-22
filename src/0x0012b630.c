/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 453498401508B0A6EB68C69C261083B280B9C7DC9102876A7C3B92FF0A51D5E5
 * Entry: 0x0012b630, Ghidra index: 3790, label: FUN_0012b630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
extern uint32_t _DAT_003c0588;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012b630(int param_1,undefined4 *param_2)

{
  float fVar1;
  
  if (((*(int *)(param_1 + 0x1f0) != 2) && (*(int *)(param_1 + 0x1f0) != 3)) &&
     ((*(byte *)(param_1 + 0x261) & 0x40) == 0)) {
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x268) != DAT_0046d064) {
      FUN_00126320();
    }
    *(undefined4 *)(param_1 + 0x1f0) = 2;
    if (param_2 == (undefined4 *)0x0) {
      fVar1 = SQRT(*(float *)(param_1 + 0x5f0) * *(float *)(param_1 + 0x5f0) +
                   *(float *)(param_1 + 0x5ec) * *(float *)(param_1 + 0x5ec) +
                   *(float *)(param_1 + 0x5e8) * *(float *)(param_1 + 0x5e8));
      *(float *)(param_1 + 0x470) = fVar1 * *(float *)(param_1 + 0x470);
      *(float *)(param_1 + 0x478) = fVar1 * *(float *)(param_1 + 0x478);
    }
    else {
      *(undefined4 *)(param_1 + 0x470) = *param_2;
      *(undefined4 *)(param_1 + 0x478) = param_2[2];
    }
    *(undefined4 *)(param_1 + 0x474) = _DAT_003c0588;
    FUN_0012eab0(1);
  }
  return;
}
