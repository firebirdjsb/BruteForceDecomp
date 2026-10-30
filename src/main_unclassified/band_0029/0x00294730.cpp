/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8621C1A2FA3FE289406EF851D0F4671B6227EFDC1C78AA3935BFD1A54DA3AEE
 * Entry: 0x00294730, Ghidra index: 9292, label: FUN_00294730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b9768;
undefined * FUN_00294730(uint param_1,int param_2)

{
  uint *in_EAX;
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *in_EAX;
  if ((int)(uVar3 * 2) <= (int)(in_EAX[1] * 3)) {
    FUN_002944b0();
    uVar3 = *in_EAX;
  }
  uVar4 = param_1 % uVar3;
  puVar1 = *(undefined **)(in_EAX[2] + uVar4 * 4);
  uVar6 = 0xffffffff;
  if (puVar1 != (undefined *)0x0) {
    do {
      uVar5 = uVar4;
      if ((puVar1 != &DAT_003b9768) &&
         (((uVar5 = uVar6, param_2 == *(int *)(puVar1 + 0x10) || (param_2 == -1)) &&
          (param_1 == *(uint *)(puVar1 + 0x14))))) {
        return puVar1;
      }
      uVar4 = uVar4 + 1 + (uVar3 - 2 & param_1);
      if ((int)uVar3 <= (int)uVar4) {
        uVar4 = uVar4 - uVar3;
      }
      puVar1 = *(undefined **)(in_EAX[2] + uVar4 * 4);
      uVar6 = uVar5;
    } while (puVar1 != (undefined *)0x0);
    if (uVar5 != 0xffffffff) goto LAB_002947a9;
  }
  uVar5 = uVar4;
  in_EAX[1] = in_EAX[1] + 1;
LAB_002947a9:
  uVar2 = FUN_002945d0(param_1,param_1);
  *(undefined4 *)(in_EAX[2] + uVar5 * 4) = uVar2;
  return *(undefined **)(in_EAX[2] + uVar5 * 4);
}
