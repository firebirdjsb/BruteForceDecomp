/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D544CA3DDDBD9545441CF6F2959114F359B9E037AB4BB1C07071497AC3335568
 * Entry: 0x0012e9a0, Ghidra index: 3815, label: FUN_0012e9a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE verified: call passes two guest DWORDs; ECX/EDX ABI remains unresolved. */
extern uint32_t FUN_00160da0(uint32_t guest_word0, uint32_t guest_word1);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 FUN_0012e9a0(void)

{
  undefined4 uVar1;
  int in_EDX;
  
  uVar1 = 0;
  if (*(int *)(in_EDX + 0x208) != DAT_0046d064) {
    uVar1 = FUN_00160da0(0xffffffff,1);
  }
  return uVar1;
}
