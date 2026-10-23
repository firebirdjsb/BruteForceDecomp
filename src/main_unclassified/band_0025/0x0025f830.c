/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2687D6F2E7AD9E8988A4433C16345FE5613AD1E2FD8391575678F7B98B40E54A
 * Entry: 0x0025f830, Ghidra index: 8608, label: FUN_0025f830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443310;
undefined1 FUN_0025f830(int param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    uVar1 = (**(code **)(*DAT_00443310 + 0x20))(param_1);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return param_3;
}
