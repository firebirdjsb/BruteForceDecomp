/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3037D58A553956F6C627142704D05121240AF05267AB42399888486DDA778FAE
 * Entry: 0x002e4f30, Ghidra index: 10462, label: FUN_002e4f30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003866f0;
extern uint32_t PTR_FUN_003a1a68;
extern uint32_t PTR_LAB_0038670c;
extern uint32_t PTR_LAB_00386718;
void FUN_002e4f30(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  *in_ECX = &PTR_FUN_003866f0;
  *(undefined1 *)(in_ECX + 0x92) = 0;
  puVar2 = in_ECX + 0x12;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_002e45a0();
  in_ECX[0x94] = &PTR_FUN_003a1a68;
  *in_ECX = &PTR_LAB_00386718;
  in_ECX[0x94] = &PTR_LAB_0038670c;
  *(undefined1 *)(in_ECX + 0x92) = 0;
  puVar2 = in_ECX + 0x12;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_002e45a0();
  in_ECX[0x97] = 0xffffffff;
  in_ECX[0x98] = 0xffffffff;
  in_ECX[0x99] = 0xffffffff;
  in_ECX[0x95] = 0;
  return;
}
