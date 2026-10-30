/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B3018EB5C6348FAA5F4BEBBCA402E7CB71A2184A470ECA5C5219D9714C2514A
 * Entry: 0x00089a50, Ghidra index: 1644, label: FUN_00089a50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a21fc;
extern uint32_t PTR_LAB_003a21bc;
void FUN_00089a50(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  *in_EAX = PTR_LAB_003a21bc;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[1] = in_ECX;
  in_EAX[2] = *(undefined4 *)(in_ECX + 0xbec);
  *in_EAX = PTR_FUN_003a21fc;
  in_EAX[7] = 0;
  in_EAX[5] = 0x159bec67;
  in_EAX[3] = 0xe8e14fcf;
  in_EAX[4] = 0x81933d7;
  in_EAX[8] = 0x40400000;
  *(byte *)(in_EAX + 9) = *(byte *)(in_EAX + 9) & 0xf0 | 0x10;
  return;
}
