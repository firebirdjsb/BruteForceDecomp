/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1393441189C6EA50F6262FAE434889B24C06BF1D96CDC332025AE1DCC3319217
 * Entry: 0x00280c20, Ghidra index: 9036, label: FUN_00280c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00391850;
bool FUN_00280c20(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 1;
    *puVar1 = &PTR_LAB_00391850;
    FUN_00280a90(puVar1);
    puVar1[5] = param_1;
    puVar1[4] = 0;
    *param_2 = puVar1;
    return puVar1 != (undefined4 *)0x0;
  }
  *param_2 = 0;
  return false;
}
