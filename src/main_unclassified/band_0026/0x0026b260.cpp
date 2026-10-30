/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1B1D7AE74A48F8D9E52CD8044D10DEA276C417A3ACA6739EFCBCA6CF30F43EE
 * Entry: 0x0026b260, Ghidra index: 8760, label: FUN_0026b260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0044363c;
extern uint32_t *DAT_00469888;
undefined4 FUN_0026b260(float param_1)

{
  int in_EAX;
  uint *puVar1;
  undefined4 uVar2;
  
  if ((in_EAX != 0) && (*(int *)((DAT_00469888[1] - 0x10) + in_EAX * 0x10) == -3)) {
    FUN_00289d80();
    puVar1 = DAT_00469888;
    *(undefined4 *)*DAT_00469888 = 0xffffffff;
    *(double *)(*puVar1 + 8) = (double)param_1;
    if (puVar1[2] <= *puVar1) {
      FUN_0028a460();
      puVar1 = DAT_00469888;
    }
    *puVar1 = *puVar1 + 0x10;
    FUN_00289520(2);
    FUN_00292910();
    uVar2 = FUN_00289600();
    return uVar2;
  }
  return DAT_0044363c;
}
