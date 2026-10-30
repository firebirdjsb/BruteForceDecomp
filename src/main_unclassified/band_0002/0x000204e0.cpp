/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 888C6BF339F00A10959BCBB7030394B137A54B61C940215C54CABF26B3070A0B
 * Entry: 0x000204e0, Ghidra index: 178, label: FUN_000204e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a4000;
void FUN_000204e0(undefined1 param_1)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  in_EAX[0x43] = 0;
  in_EAX[0x41] = 0;
  in_EAX[0x42] = 0;
  *in_EAX = PTR_LAB_003a4000;
  in_EAX[0x45] = in_ECX;
  in_EAX[0x43] = *(undefined4 *)(in_ECX + 0x10c);
  in_EAX[0x44] = *(undefined4 *)(in_ECX + 0x110);
  *(undefined1 *)(in_EAX + 0x46) = param_1;
  return;
}
