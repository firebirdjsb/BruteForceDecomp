/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6CDDB89F30F3ECE4592C092E2B43EA54430ADCF3488102E1F2CFCAE49D63EF22
 * Entry: 0x002ccb80, Ghidra index: 10152, label: FUN_002ccb80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE 0x002CCB85: B9 70 CB 2C 00 (mov ECX,imm32).
 * The constant is an Xbox guest 32-bit code address, NOT a host pointer.
 * Native dispatch/memory ABI and 1:1 table behavior remain unverified. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443e28;
extern uint32_t DAT_00443e2c;
extern uint32_t DAT_00443e30;
extern uint32_t DAT_00443e34;
extern uint32_t DAT_00443e38;
extern uint32_t DAT_00443e3c;
extern uint32_t DAT_00443e40;
extern uint32_t DAT_00443e44;
extern uint32_t _DAT_00443e48;
extern uint32_t _DAT_00443e4c;
extern uint32_t _DAT_00443e50;
extern uint32_t _DAT_00443e54;
extern uint32_t _DAT_00443e58;
extern uint32_t _DAT_00443e5c;
extern uint32_t _DAT_00443e60;
extern uint32_t _DAT_00443e64;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002ccb80(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_00443e2c;
  do {
    puVar1[-1] = UINT32_C(0x002ccb70);
    *puVar1 = UINT32_C(0x002ccb70);
    puVar1[1] = UINT32_C(0x002ccb70);
    puVar1[2] = UINT32_C(0x002ccb70);
    puVar1 = puVar1 + 4;
  } while ((int)puVar1 < 0x443e6c);
  DAT_00443e28 = FUN_002cc9f0;
  DAT_00443e2c = FUN_002cc9f0;
  DAT_00443e30 = FUN_002cc9f0;
  DAT_00443e3c = FUN_002cc9f0;
  DAT_00443e34 = UINT32_C(0x002ccb70);
  DAT_00443e38 = UINT32_C(0x002ccb70);
  DAT_00443e40 = UINT32_C(0x002ccb70);
  DAT_00443e44 = UINT32_C(0x002ccb70);
  _DAT_00443e48 = UINT32_C(0x002ccb70);
  _DAT_00443e4c = UINT32_C(0x002ccb70);
  _DAT_00443e50 = UINT32_C(0x002ccb70);
  _DAT_00443e54 = UINT32_C(0x002ccb70);
  _DAT_00443e58 = FUN_002cc8b0;
  _DAT_00443e5c = FUN_002cc8b0;
  _DAT_00443e60 = FUN_002cc8b0;
  _DAT_00443e64 = FUN_002cc9a0;
  return;
}
