/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07DF3CCE15BD7C1A6353E320B0061034572C7249E50BF758C44B680BF18714AF
 * Entry: 0x0014c880, Ghidra index: 4341, label: FUN_0014c880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039b2b0;
extern uint32_t PTR_FUN_0039b318;
extern uint32_t PTR_FUN_0039b408;
extern uint32_t PTR_LAB_0039afd4;
void FUN_0014c880(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_ESI;
  
  puVar1 = (undefined4 *)unaff_ESI[0x6d];
  if ((puVar1 != (undefined4 *)0x0) && (puVar1[0x2d] == 0)) {
    (**(code **)*puVar1)(1);
  }
  if (unaff_ESI[0x6b] != 0) {
    if (unaff_ESI[0x75] != 0) {
      (**(code **)(**(int **)(unaff_ESI[0x75] + 0x5a4) + 0x6c))(unaff_ESI[0x6b]);
    }
    if ((undefined4 *)unaff_ESI[0x6b] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)unaff_ESI[0x6b])(1);
      unaff_ESI[0x6b] = 0;
    }
  }
  if (unaff_ESI[0x6d] != 0) {
    FUN_0008f6e0();
  }
  FUN_0014ad00();
  FUN_0014ad00();
  FUN_0014ad00();
  puVar1 = unaff_ESI + 0x3c;
  *puVar1 = &PTR_FUN_0039b408;
  FUN_0014b620();
  *puVar1 = &PTR_FUN_0039b2b0;
  if (unaff_ESI[0x40] != 0) {
    FUN_0008f6e0();
  }
  *puVar1 = &PTR_LAB_0039afd4;
  FUN_0014ad00();
  FUN_0014ad00();
  unaff_ESI[0x11] = &PTR_FUN_0039b318;
  FUN_0014ad00();
  *unaff_ESI = &PTR_FUN_0039b318;
  FUN_0014ad00();
  return;
}
