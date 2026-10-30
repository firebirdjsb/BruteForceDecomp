/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8251E3DB4D72B135C246AC817BF7A540BE2C0BF75E6D3AB18C0AC1A77FD5324B
 * Entry: 0x0014ad00, Ghidra index: 4306, label: FUN_0014ad00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039b2b0;
extern uint32_t PTR_FUN_0039b390;
extern uint32_t PTR_LAB_0039afd4;
void FUN_0014ad00(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[8];
  *in_ECX = &PTR_FUN_0039b390;
  if (iVar1 != 0) {
    FUN_0014ae30();
    FUN_0014ae80();
    FUN_000cdbc0(iVar1);
    FUN_000db3e0(iVar1);
  }
  if (in_ECX[8] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_FUN_0039b2b0;
  if (in_ECX[4] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_LAB_0039afd4;
  return;
}
