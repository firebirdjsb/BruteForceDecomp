/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8B0FB428FAD64421F79140101DA28A9E4B64CA0D07918BD14EF50F0A08D5487
 * Entry: 0x001f7b70, Ghidra index: 7053, label: FUN_001f7b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_001f7b70(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return;
  }
  do {
    uVar1 = *(uint *)(param_3 + -4);
    param_3 = param_3 + -8;
    puVar2 = param_4 + -2;
    if (uVar1 != param_4[-1]) {
      if (param_4[-1] != 0) {
        FUN_0008f6e0();
      }
      param_4[-1] = uVar1;
      if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
        uVar1 = uVar1 * 0x19660d + 0x3c6ef35f >> 0x15;
        *puVar2 = *(undefined4 *)(&DAT_00414da0 + uVar1 * 4);
        *(undefined4 **)(&DAT_00414da0 + uVar1 * 4) = puVar2;
      }
    }
    param_4 = puVar2;
  } while (param_3 != param_2);
  *param_1 = puVar2;
  return;
}
