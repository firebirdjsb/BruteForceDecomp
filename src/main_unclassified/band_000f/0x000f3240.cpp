/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A25BEC5366E80DF25CB3A956892ECCB46B29512D6F3E10B169D3724D794AB0C
 * Entry: 0x000f3240, Ghidra index: 3039, label: FUN_000f3240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 FUN_000f3240(int param_1,int param_2)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (in_EAX != (int *)0x0) {
    if (param_2 == 0) {
      FUN_001e97c0();
      FUN_0010a7d0();
      if (in_EAX[9] == DAT_0046d064) {
        in_EAX[9] = -0x70a0c76;
        (**(code **)(*in_EAX + 0x2c))();
      }
      if ((param_1 != 0) && ((*(byte *)(param_1 + 0x28) & 1) == 0)) {
        FUN_000ef210();
        return 1;
      }
    }
    else {
      FUN_001e97c0();
      FUN_0010a7d0();
      if (in_EAX[9] == DAT_0046d064) {
        in_EAX[9] = 0xf2e162a;
        (**(code **)(*in_EAX + 0x2c))();
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}
