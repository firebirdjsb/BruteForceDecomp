/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B0AF40ACAAC07B970F46EB4545E28B26492B13A27E3E59AB0895BB8D567B934
 * Entry: 0x001f2b90, Ghidra index: 7014, label: FUN_001f2b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396840;
extern uint32_t PTR_LAB_00396cb0;
void FUN_001f2b90(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00396840;
  *(undefined1 *)(in_ECX + 1) = 0;
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1);
    in_ECX[2] = 0;
  }
  if (in_ECX[0x30] != 0) {
    XAPILIB__XInputClose(in_ECX[0x30]);
    in_ECX[0x30] = 0;
  }
  *in_ECX = &PTR_LAB_00396cb0;
  return;
}
