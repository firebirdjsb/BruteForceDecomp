/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D04B7E37315B819EEBA957A7100377FBF83497E253E26C3B17CEBD1AF75161D2
 * Entry: 0x00023a80, Ghidra index: 239, label: FUN_00023a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a479c;
extern uint32_t PTR_FUN_003a4f64;
void FUN_00023a80(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  *in_EAX = &PTR_FUN_003a479c;
  in_EAX[4] = 0;
  in_EAX[9] = 0;
  in_EAX[2] = 0;
  in_EAX[1] = &PTR_FUN_003a4f64;
  in_EAX[7] = 0;
  in_EAX[6] = 0;
  in_EAX[5] = 0;
  in_EAX[0xb] = 0;
  in_EAX[0xc] = 0;
  in_EAX[0xd] = 0;
  in_EAX[10] = 0;
  *(byte *)(in_EAX + 0xe) = *(byte *)(in_EAX + 0xe) & 0xfe;
  in_EAX[2] = param_1;
  *(byte *)(in_EAX + 0xf) = *(byte *)(in_EAX + 0xf) & 0xfe;
  uVar1 = *in_EDX;
  uVar2 = in_EDX[2];
  uVar3 = in_EDX[1];
  in_EAX[10] = 1;
  in_EAX[5] = uVar1;
  in_EAX[6] = uVar3;
  in_EAX[7] = uVar2;
  return;
}
