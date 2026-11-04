/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35C3C82876AC80AD7B926F37FBBF87FA8B95AE8223EC98897DF3671D08B60BDE
 * Entry: 0x002b3d90, Ghidra index: 9776, label: FUN_002b3d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e844;
extern uint32_t PTR_FUN_0038e84c;
void FUN_002b3d90(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int in_EDX;
  
  /* XBE MOV m32,imm32 sites: 0x002b3dc7, 0x002b3d93.
   * Guest address values only; register ABI/memory mapping ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0038e84c);
  uVar1 = *(undefined4 *)(in_EDX + 0x14);
  in_EAX[3] = 0;
  in_EAX[2] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = uVar1;
  in_EAX[1] = 0;
  in_EAX[2] = *(undefined4 *)(in_EDX + 0x18);
  in_EAX[3] = 0;
  if (*(int *)(in_EDX + 0x18) != 0) {
    *(undefined4 **)(*(int *)(in_EDX + 0x18) + 0xc) = in_EAX;
  }
  *(undefined4 **)(in_EDX + 0x18) = in_EAX;
  in_EAX[4] = in_EDX;
  in_EAX[0xe] = 0;
  *in_EAX = UINT32_C(0x0038e844);
  in_EAX[0x10] = 0;
  in_EAX[0x11] = 0;
  *(undefined2 *)(in_EAX + 0x1a) = 0;
  in_EAX[0x18] = 0;
  in_EAX[0x19] = 0x501502f9;
  in_EAX[0x13] = 0;
  in_EAX[0x12] = 0;
  in_EAX[0x14] = 0;
  in_EAX[0x15] = 0;
  in_EAX[0x16] = 0;
  in_EAX[0x17] = 0;
  return;
}
