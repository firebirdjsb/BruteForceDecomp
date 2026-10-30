/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67BC2C0B55811E406B17F47D910C40F05C4A38A49E7FB4AAE8627DEABEA443CB
 * Entry: 0x00291870, Ghidra index: 9238, label: FUN_00291870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00391428;
void FUN_00291870(undefined4 param_1,undefined2 param_2,int *param_3,int param_4)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *in_EAX = &PTR_LAB_00391428;
  in_EAX[1] = 0;
  in_EAX[1] = *in_ECX;
  *(undefined2 *)(in_EAX + 3) = param_2;
  *(undefined2 *)((int)in_EAX + 0xe) = 1;
  in_EAX[2] = *param_3 + param_4;
  in_EAX[4] = param_1;
  return;
}
