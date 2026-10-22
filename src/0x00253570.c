/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C98CE618061AB13BD4722B533C2DDF4B369670E248870658886CA9ADD6414326
 * Entry: 0x00253570, Ghidra index: 8402, label: FUN_00253570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003941e8;
extern uint32_t PTR_LAB_003939e8;
extern uint32_t PTR_LAB_00393a18;
extern uint32_t PTR_LAB_00393a64;
undefined4 FUN_00253570(void)

{
  int *in_EAX;
  undefined4 *puVar1;
  undefined4 *unaff_ESI;
  
  if (*in_EAX == 0x1e2160b3) {
    puVar1 = (undefined4 *)FUN_002ea01d(0x18);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = &PTR_FUN_003941e8;
      *puVar1 = &PTR_LAB_003939e8;
      puVar1[1] = &PTR_LAB_00393a18;
      puVar1[4] = 0;
      puVar1[3] = 1;
      puVar1[5] = 0;
      *unaff_ESI = puVar1;
      return 1;
    }
  }
  else {
    if (*in_EAX != -0x1f258425) {
      return 0;
    }
    puVar1 = (undefined4 *)FUN_002ea01d(0x18);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = &PTR_FUN_003941e8;
      *puVar1 = &PTR_LAB_00393a64;
      puVar1[1] = &PTR_LAB_00393a18;
      puVar1[4] = 0;
      puVar1[3] = 1;
      puVar1[5] = 0;
      *unaff_ESI = puVar1;
      return 1;
    }
  }
  *unaff_ESI = 0;
  return 1;
}
