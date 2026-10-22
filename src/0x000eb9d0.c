/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D411FC4AD32E018FDABA5EF6F08CE51E9BEC53ECEFF1969464E800D132D17E1
 * Entry: 0x000eb9d0, Ghidra index: 2902, label: FUN_000eb9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_FUN_0039edf0;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000eb9d0(void)

{
  int *in_EAX;
  int iVar1;
  
  FUN_00059b60();
  *in_EAX = (int)&PTR_FUN_0039edf0;
  in_EAX[2] = (int)&PTR_LAB_003a3f18;
  in_EAX[3] = (int)&PTR_FUN_0039e7e8;
  in_EAX[0xf] = 0;
  in_EAX[0x11] = 0;
  in_EAX[0x20] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x19] = 0;
  in_EAX[0x17] = 0;
  in_EAX[0x16] = 0;
  in_EAX[0x15] = 0;
  in_EAX[0x1c] = 0x3f800000;
  in_EAX[0x18] = 0x3f800000;
  in_EAX[0x14] = 0x3f800000;
  in_EAX[0x1f] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x1d] = 0;
  *(undefined1 *)(in_EAX + 0x22) = 0;
  in_EAX[0x12] = 0;
  in_EAX[0x21] = 0;
  iVar1 = (**(code **)(*in_EAX + 4))();
  if (iVar1 != 0) {
    in_EAX[0x12] = iVar1;
    *(undefined1 *)(in_EAX + 0x22) = 0;
    in_EAX[9] = in_EAX[9] & 0xffffbfff;
    return;
  }
  iVar1 = (**(code **)(*in_EAX + 0xc))();
  in_EAX[0x12] = iVar1;
  *(undefined1 *)(in_EAX + 0x22) = 1;
  in_EAX[9] = in_EAX[9] & 0xffffbfff;
  return;
}
