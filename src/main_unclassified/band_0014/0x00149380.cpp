/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4372FC15A2A4D84C9582810B410DF2455149655A9CEA5E51EFC4016EC90121B3
 * Entry: 0x00149380, Ghidra index: 4271, label: FUN_00149380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_FUN_0039b688;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039b670;
extern uint32_t PTR_LAB_0039b67c;
void FUN_00149380(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039b688;
  in_ECX[0x12] = PTR_FUN_0039adec;
  in_ECX[0x1a] = PTR_LAB_0039a8c0;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_0039b67c;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_0039b670;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x1a8;
  if (in_ECX[0x7b] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[0x79] != 0) {
    FUN_0008f6e0();
  }
  FUN_0014a020();
  return;
}
