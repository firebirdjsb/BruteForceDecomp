/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EFD007E45308A02DFC501630517F890F083271A694CB78A73D7962290D1D861
 * Entry: 0x0010bda0, Ghidra index: 3455, label: FUN_0010bda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e0a0;
void FUN_0010bda0(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_0039e0a0;
  uVar1 = FUN_0010c0b0(unaff_ESI + 1);
  unaff_ESI[2] = uVar1;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0x3dcccccd;
  return;
}
