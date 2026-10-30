/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1124B2EF32A0C8A6C24E9F559DD877EFC2A5D7AC3B8E8B8174A616E5597660C9
 * Entry: 0x000c9760, Ghidra index: 2490, label: FUN_000c9760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
undefined4 * FUN_000c9760(int param_1,int param_2)

{
  undefined4 *in_EAX;
  uint uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    uVar1 = *(uint *)(param_1 + 4);
    if (uVar1 != in_EAX[1]) {
      if (in_EAX[1] != 0) {
        FUN_0008f6e0();
      }
      in_EAX[1] = uVar1;
      if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
        uVar1 = uVar1 * 0x19660d + 0x3c6ef35f >> 0x15;
        *in_EAX = *(undefined4 *)(&DAT_00414da0 + uVar1 * 4);
        *(undefined4 **)(&DAT_00414da0 + uVar1 * 4) = in_EAX;
      }
    }
    in_EAX = in_EAX + 2;
  }
  return in_EAX;
}
