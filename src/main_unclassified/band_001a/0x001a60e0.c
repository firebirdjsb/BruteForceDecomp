/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE81A40330CA72D0694F046A2DE163F973959A5DB4A26C59EB6E0C3CF0716D3F
 * Entry: 0x001a60e0, Ghidra index: 5357, label: FUN_001a60e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00399740;
extern uint32_t PTR_LAB_00399760;
uint FUN_001a60e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 1;
    *puVar1 = &PTR_LAB_00399760;
    puVar1[5] = &PTR_LAB_00399740;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
