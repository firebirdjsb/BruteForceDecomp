/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B12099DFFB35D6BDED8A89F51EA638377996852439F9B07E5E02A797A06BAF3
 * Entry: 0x0027cce0, Ghidra index: 8994, label: FUN_0027cce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bb1c8;
extern uint32_t PTR_DAT_003bb1a0;
extern uint32_t PTR_DAT_003bb1b4;
void FUN_0027cce0(void)

{
  int in_EDX;
  
  *(int *)(in_EDX + 0xb10) = in_EDX + 0x8c;
  *(int *)(in_EDX + 0xb28) = in_EDX + 0xa74;
  *(undefined ***)(in_EDX + 0xb18) = &PTR_DAT_003bb1a0;
  *(int *)(in_EDX + 0xb1c) = in_EDX + 0x980;
  *(undefined ***)(in_EDX + 0xb24) = &PTR_DAT_003bb1b4;
  *(undefined **)(in_EDX + 0xb30) = &DAT_003bb1c8;
  *(undefined2 *)(in_EDX + 0x16b0) = 0;
  *(undefined4 *)(in_EDX + 0x16b4) = 0;
  *(undefined4 *)(in_EDX + 0x16ac) = 8;
  FUN_0027cd40();
  return;
}
