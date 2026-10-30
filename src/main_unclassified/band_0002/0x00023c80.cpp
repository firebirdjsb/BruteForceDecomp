/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98BD02B21F48F69DAC3310DCF853200C8A59FAF17D2D6760553A1E7510567581
 * Entry: 0x00023c80, Ghidra index: 243, label: FUN_00023c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00023c80(void)

{
  int in_EAX;
  
  if (((*(byte *)(in_EAX + 0x1c) & 1) != 0) && (*(int *)(in_EAX + 0x18) != 0)) {
    return 1;
  }
  return 0;
}
