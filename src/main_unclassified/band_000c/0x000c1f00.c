/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 591074C6715BD74FF0E92958D89D813CE7FBA0C3930A88BC0FE43E9CF9B71524
 * Entry: 0x000c1f00, Ghidra index: 2361, label: FUN_000c1f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f62c;
extern uint32_t PTR_LAB_0039f618;
void FUN_000c1f00(void)

{
  undefined4 *in_EAX;
  undefined4 uVar1;
  
  FUN_000b2230();
  *in_EAX = &PTR_FUN_0039f62c;
  in_EAX[0xb] = &PTR_LAB_0039f618;
  uVar1 = FUN_00061500(in_EAX + 0x19);
  in_EAX[0x1a] = uVar1;
  in_EAX[0x1b] = 0;
  in_EAX[0x1c] = 0;
  return;
}
