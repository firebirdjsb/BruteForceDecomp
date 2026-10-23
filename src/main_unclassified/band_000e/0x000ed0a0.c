/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E85A05B1567272A34B10D8A51AE992FBA0BFDBD6B9DD2F8F20A0AC4B448E9A98
 * Entry: 0x000ed0a0, Ghidra index: 2946, label: FUN_000ed0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039eeb8;
extern uint32_t PTR_LAB_0039ee54;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ed0a0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000ebdc0();
  *unaff_ESI = &PTR_FUN_0039eeb8;
  unaff_ESI[2] = &PTR_LAB_003a3f18;
  unaff_ESI[3] = &PTR_LAB_0039ee54;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x1d] = 0;
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x23] = 0;
  unaff_ESI[0x17] = 0x42c80000;
  unaff_ESI[0x18] = 0x43480000;
  unaff_ESI[0x19] = 0x3fa66666;
  unaff_ESI[0x1c] = 0xe6c5afd7;
  unaff_ESI[0x1a] = 0x3f000000;
  unaff_ESI[0x1d] = 0xe6c5afd7;
  unaff_ESI[0x1e] = 0;
  unaff_ESI[0x1b] = 0x3c23d70a;
  unaff_ESI[0x1f] = 0x3f000000;
  unaff_ESI[0x22] = 0x1e79e0c;
  unaff_ESI[0x20] = 0x3f000000;
  unaff_ESI[0x23] = 0x1e79e0c;
  *(undefined1 *)(unaff_ESI + 0x24) = 1;
  return;
}
