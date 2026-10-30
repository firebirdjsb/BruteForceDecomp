/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B652E543E6A2B47F551AF8CCF0274815666F9CC2BDF39C3BA35758080AF86636
 * Entry: 0x0029d4f0, Ghidra index: 9457, label: FUN_0029d4f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003911b0;
undefined4 FUN_0029d4f0(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *unaff_ESI;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_003911b0;
    puVar1[2] = 0;
    puVar1[2] = *param_1;
    puVar1[4] = param_2;
    puVar1[1] = 1;
    puVar1[3] = *param_3 + param_4;
    *unaff_ESI = puVar1;
    return 1;
  }
  *unaff_ESI = 0;
  return 1;
}
