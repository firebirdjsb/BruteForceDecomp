/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D64BB8345AAC4B4D0DB548AE0C435360AC2BA49C66A3A7E5B5B62319321B4F5
 * Entry: 0x00020100, Ghidra index: 173, label: FUN_00020100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a4004;
void FUN_00020100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  in_EAX[0x43] = param_1;
  in_EAX[0x44] = param_2;
  *in_EAX = &PTR_LAB_003a4004;
  in_EAX[0x41] = 0;
  in_EAX[0x42] = 0;
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  in_EAX[0x45] = *in_ECX;
  in_EAX[0x46] = uVar2;
  in_EAX[0x47] = uVar1;
  in_EAX[0x48] = param_3;
  *(undefined1 *)(in_EAX + 0x49) = 0;
  return;
}
