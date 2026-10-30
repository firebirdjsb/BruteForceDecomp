/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA6B9FBD1AEBCD9B202C395A6544EBE7E8A8D146A7FE35B891122E581F69A698
 * Entry: 0x00280100, Ghidra index: 9026, label: FUN_00280100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003919e0;
bool FUN_00280100(undefined4 *param_1)

{
  undefined4 *puVar1;
  int unaff_EDI;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 1;
    *puVar1 = &PTR_LAB_003919e0;
    (**(code **)(**(int **)(unaff_EDI + 0x58) + 0x18))(*(int **)(unaff_EDI + 0x58));
    puVar1[3] = puVar1;
    return puVar1 != (undefined4 *)0x0;
  }
  *param_1 = 0;
  return false;
}
