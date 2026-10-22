/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C70660BF58F400B03C8BDC3482DF039536E7FEF57629651A11A8DF16DF40F13A
 * Entry: 0x003116f0, Ghidra index: 11883, label: FUN_003116f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b248;
extern uint32_t DAT_0046b24c;
void FUN_003116f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0046b248;
  while (puVar1 != (undefined4 *)0x0) {
    DAT_0046b248 = (undefined4 *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = DAT_0046b248;
  }
  DAT_0046b248 = (undefined4 *)0x0;
  DAT_0046b24c = 0;
  return;
}
