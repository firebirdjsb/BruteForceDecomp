/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 754FD1C197174305106282D6BBEE824516D7A9DBC3C7F5D88C7D55F9F8924FE2
 * Entry: 0x002bd100, Ghidra index: 9938, label: FUN_002bd100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e758;
extern uint32_t PTR_FUN_0038e774;
extern uint32_t PTR_LAB_0038e73c;
void FUN_002bd100(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  *in_EAX = PTR_FUN_0038e774;
  in_EAX[2] = PTR_LAB_0038e73c;
  in_EAX[4] = PTR_FUN_0038e758;
  *(undefined2 *)(in_EAX + 9) = 0;
  *(undefined2 *)((int)in_EAX + 0x26) = 0;
  in_EAX[10] = 0;
  *(undefined2 *)(in_EAX + 0xb) = 1;
  *(undefined2 *)(in_EAX + 0xe) = 1;
  *(undefined2 *)(in_EAX + 0xc) = 0;
  *(undefined2 *)((int)in_EAX + 0x32) = 0;
  in_EAX[0xd] = 0;
  *(undefined2 *)(in_EAX + 0x11) = 1;
  *(undefined2 *)(in_EAX + 0xf) = 0;
  *(undefined2 *)((int)in_EAX + 0x3e) = 0;
  in_EAX[0x10] = 0;
  in_EAX[1] = param_1;
  *(undefined1 *)(in_EAX + 0x14) = 0;
  in_EAX[8] = 0;
  *(undefined2 *)(in_EAX + 0x12) = 0;
  *(undefined2 *)((int)in_EAX + 0x4a) = 0;
  in_EAX[3] = *in_EAX;
  in_EAX[5] = *in_EAX;
  return;
}
