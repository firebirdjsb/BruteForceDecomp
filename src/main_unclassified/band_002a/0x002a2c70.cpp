/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DFA36EACE3A8CD9984423943481E06198D7C7DDBACC358A245DB11263ECB247B
 * Entry: 0x002a2c70, Ghidra index: 9529, label: FUN_002a2c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00390968;
extern uint32_t PTR_FUN_003a35a4;
extern uint32_t PTR_FUN_003a35a8;
void FUN_002a2c70(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  FUN_00060bb0();
  *unaff_ESI = &PTR_FUN_00390968;
  unaff_ESI[0x10] = &PTR_FUN_003a35a8;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x12] = &PTR_FUN_003a35a4;
  unaff_ESI[0x18] = &PTR_FUN_003a35a8;
  unaff_ESI[0x1a] = &PTR_FUN_003a35a4;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x1d] = 0;
  unaff_ESI[0x1e] = 0;
  FUN_000624d0();
  uVar1 = FUN_00238430();
  unaff_ESI[0x11] = uVar1;
  FUN_000624d0();
  uVar1 = FUN_00238430();
  unaff_ESI[0x19] = uVar1;
  unaff_ESI[0x20] = 0;
  return;
}
