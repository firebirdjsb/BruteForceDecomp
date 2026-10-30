/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C024E022448A1D23C56BF9F8BB9548A53F8842553DA8D19AF8D1EFA46EDF8039
 * Entry: 0x000cc020, Ghidra index: 2522, label: FUN_000cc020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f0b8;
void FUN_000cc020(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000cb580();
  *(undefined2 *)(unaff_ESI + 1) = 0;
  unaff_ESI[0x23] = 0;
  *unaff_ESI = &PTR_FUN_0039f0b8;
  *(undefined2 *)((int)unaff_ESI + 6) = 0xfff1;
  unaff_ESI[0x12] = 0xc1700000;
  unaff_ESI[0x13] = 0x42000000;
  *(byte *)(unaff_ESI + 0x24) = *(byte *)(unaff_ESI + 0x24) | 1;
  unaff_ESI[0x1f] = 0x40a00000;
  return;
}
