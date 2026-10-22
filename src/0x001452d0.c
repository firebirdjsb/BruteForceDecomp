/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25BD277C38366733C8BDF75C619B972791BF2C7C606DD921BDC47362F85A81C3
 * Entry: 0x001452d0, Ghidra index: 4190, label: FUN_001452d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039c0b0;
extern uint32_t PTR_LAB_0039c0ac;
void FUN_001452d0(void)

{
  undefined4 *in_ECX;
  
  FUN_001548f0();
  *in_ECX = &PTR_FUN_0039c0b0;
  in_ECX[6] = &PTR_LAB_0039c0ac;
  in_ECX[0x59] = 0;
  in_ECX[0x5a] = 0xf;
  *(undefined1 *)(in_ECX + 0x55) = 0;
  in_ECX[0x60] = 0;
  in_ECX[0x61] = 0xf;
  *(undefined1 *)(in_ECX + 0x5c) = 0;
  in_ECX[0x62] = 0;
  in_ECX[1] = 0x19;
  return;
}
