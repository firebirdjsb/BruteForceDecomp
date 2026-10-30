/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 122DD69A526821E7485D5994C954186C99F810DAC128A992D50BBE12C17D97A9
 * Entry: 0x001a66a0, Ghidra index: 5359, label: FUN_001a66a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00398700;
extern uint32_t PTR_LAB_00398720;
uint FUN_001a66a0(undefined4 *param_1)

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
    *puVar1 = &PTR_LAB_00398720;
    puVar1[5] = &PTR_LAB_00398700;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
