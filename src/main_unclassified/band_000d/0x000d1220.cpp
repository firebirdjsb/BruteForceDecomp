/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F300BC42E515D3148CD28B619715621B720C5277C9A30FE516BF19BEAF81E416
 * Entry: 0x000d1220, Ghidra index: 2593, label: FUN_000d1220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t DAT_00414da0;
void FUN_000d1220(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  
  if (param_2 != param_3) {
    puVar1 = (uint *)(param_3 + 0xc);
    puVar4 = param_4 + 3;
    do {
      iVar6 = param_3 + -0x10;
      puVar3 = param_4 + -4;
      *puVar3 = *(undefined4 *)(param_3 + -0x10);
      puVar1 = puVar1 + -4;
      puVar5 = puVar4 + -4;
      param_4[-3] = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *puVar1;
      if (*puVar5 != uVar2) {
        if (*puVar5 != 0) {
          FUN_0008f6e0();
        }
        *puVar5 = uVar2;
        if ((uVar2 != 0) && ((uVar2 & 1) == 0)) {
          uVar2 = uVar2 * 0x19660d + 0x3c6ef35f >> 0x15;
          puVar4[-5] = *(uint *)(&DAT_00414da0 + uVar2 * 4);
          *(uint **)(&DAT_00414da0 + uVar2 * 4) = puVar4 + -5;
        }
      }
      param_4 = puVar3;
      puVar4 = puVar5;
      param_3 = iVar6;
    } while (iVar6 != param_2);
    *param_1 = puVar3;
    return;
  }
  *param_1 = param_4;
  return;
}
