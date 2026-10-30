/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 661AEE1A4A0FC22CE20ACE7B84F82AD68E1E1FD89E0E9F701833E0D2BD4224FD
 * Entry: 0x00149280, Ghidra index: 4269, label: FUN_00149280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0039b668;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_FUN_0039b688;
extern uint32_t PTR_FUN_0039efd0;
extern uint32_t PTR_FUN_0039efec;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039b670;
extern uint32_t PTR_LAB_0039b67c;
extern uint32_t PTR_LAB_0039efdc;
void FUN_00149280(void)

{
  int in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != 0) {
    in_ECX[0x13] = &DAT_0039b668;
    in_ECX[0x7e] = &PTR_FUN_0039efec;
    in_ECX[0x7d] = &PTR_LAB_0039efdc;
    in_ECX[0x7e] = &PTR_FUN_0039efd0;
  }
  FUN_00149f10();
  *in_ECX = &PTR_FUN_0039b688;
  in_ECX[0x12] = &PTR_FUN_0039adec;
  in_ECX[0x1a] = &PTR_LAB_0039a8c0;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_0039b67c;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_0039b670;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x1a8;
  in_ECX[0x79] = 0;
  in_ECX[0x7b] = 0;
  FUN_0014a170();
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x74] = 0;
  *(byte *)(in_ECX + 0x77) = *(byte *)(in_ECX + 0x77) & 0xfc;
  *(undefined2 *)((int)in_ECX + 0x1de) = 1;
  return;
}
