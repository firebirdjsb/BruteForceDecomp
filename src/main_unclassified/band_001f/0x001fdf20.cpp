/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A03494CB7435FA5ECA3C2399E6C8649AD12CEBC5C26DC5C23B400388CD2B9CE
 * Entry: 0x001fdf20, Ghidra index: 7220, label: FUN_001fdf20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
void FUN_001fdf20(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  in_EAX[1] = 0xffffffff;
  in_EAX[2] = 0;
  in_EAX[4] = 0xffffffff;
  *in_EAX = PTR_LAB_003a3fb4;
  in_EAX[1] = *(undefined4 *)(in_ECX + 4);
  in_EAX[3] = *(undefined4 *)(in_ECX + 0xc);
  in_EAX[2] = *(undefined4 *)(in_ECX + 8);
  in_EAX[4] = *(undefined4 *)(in_ECX + 0x10);
  in_EAX[1] = param_1;
  in_EAX[2] = param_2;
  return;
}
