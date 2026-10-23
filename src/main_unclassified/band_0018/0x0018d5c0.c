/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 402447F9441361D02393BA0B0D9D4587F71A59B604CC7CE38E7433800CCB8434
 * Entry: 0x0018d5c0, Ghidra index: 5286, label: FUN_0018d5c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00399400;
extern uint32_t PTR_LAB_00399420;
uint FUN_0018d5c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_00399420;
    puVar1[5] = &PTR_LAB_00399400;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
