/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89DD5482541DA8E4D43118CFC971AC207EF54743E363EE132813611DD2710A46
 * Entry: 0x0031ac2d, Ghidra index: 12275, label: FUN_0031ac2d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe820804;
extern uint32_t _DAT_fe820808;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031ac2d(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  MmLockUnlockBufferPages(param_2,param_3 << 0xc,0);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = MmGetPhysicalAddress(param_2);
    FUN_003118f0();
    do {
    } while ((_DAT_fe820010 & 0xfffffffc) < 8);
    _DAT_fe820804 = param_1;
    _DAT_fe820808 = uVar1;
    FUN_00311923();
    param_2 = param_2 + 0x1000;
    param_1 = param_1 + 1;
  }
  return;
}
