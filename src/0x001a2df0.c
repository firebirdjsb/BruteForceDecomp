/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F80F3E7DF3C3890A6F9A48B50E9EDFD57C63F56D2986F01086DDA9F0FADE80E
 * Entry: 0x001a2df0, Ghidra index: 5336, label: FUN_001a2df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00399058;
extern uint32_t PTR_LAB_00399078;
uint FUN_001a2df0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_00399078;
    puVar1[5] = &PTR_LAB_00399058;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
