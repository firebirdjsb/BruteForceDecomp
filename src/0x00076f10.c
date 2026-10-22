/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1476ED3B7C394605506B9DCDEA67B8DCD563C0971A111C5106D9C9CF4AC9FA7
 * Entry: 0x00076f10, Ghidra index: 1386, label: FUN_00076f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a2578;
extern uint32_t PTR_LAB_003a2598;
uint FUN_00076f10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x34);
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
    puVar1[0xb] = param_2;
    puVar1[10] = 1;
    *puVar1 = &PTR_LAB_003a2598;
    puVar1[5] = &PTR_LAB_003a2578;
    puVar1[0xc] = param_3;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
