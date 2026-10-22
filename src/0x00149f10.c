/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6172C288D198A95B0C14056B9ADC4E337E0B0FF9E8D89CC30058C02056B52182
 * Entry: 0x00149f10, Ghidra index: 4282, label: FUN_00149f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0039b4e8;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_FUN_0039b508;
extern uint32_t PTR_FUN_0039efd0;
extern uint32_t PTR_FUN_0039efec;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039b4f0;
extern uint32_t PTR_LAB_0039b4fc;
extern uint32_t PTR_LAB_0039efdc;
void FUN_00149f10(void)

{
  int in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != 0) {
    in_ECX[0x13] = &DAT_0039b4e8;
    in_ECX[0x76] = &PTR_FUN_0039efec;
    in_ECX[0x75] = &PTR_LAB_0039efdc;
    in_ECX[0x76] = &PTR_FUN_0039efd0;
  }
  FUN_00156930();
  *in_ECX = &PTR_FUN_0039b508;
  in_ECX[0x12] = &PTR_FUN_0039adec;
  in_ECX[0x1a] = &PTR_LAB_0039a8c0;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_0039b4fc;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_0039b4f0;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x188;
  in_ECX[0x72] = 0;
  in_ECX[0x6d] = 0;
  in_ECX[0x6c] = 0;
  *(byte *)((int)in_ECX + 0x71) = *(byte *)((int)in_ECX + 0x71) | 0x20;
  FUN_0014a170();
  *(undefined1 *)(in_ECX + 0x6e) = 8;
  *(undefined1 *)((int)in_ECX + 0x1b9) = 8;
  in_ECX[0x73] = 0;
  *(byte *)((int)in_ECX + 0x71) = *(byte *)((int)in_ECX + 0x71) | 0x20;
  in_ECX[0x70] = 0xffffffff;
  return;
}
