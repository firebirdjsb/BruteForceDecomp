/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D61CE50F715A82987BC9A347880AB6390B255B09D4C47357E03FA0A32ABA017D
 * Entry: 0x000eb730, Ghidra index: 2897, label: FUN_000eb730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_FUN_0039e860;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000eb730(void)

{
  int *in_EAX;
  int iVar1;
  
  FUN_00059b60();
  *in_EAX = (int)&PTR_FUN_0039e860;
  in_EAX[2] = (int)&PTR_LAB_003a3f18;
  in_EAX[3] = (int)&PTR_FUN_0039e7e8;
  in_EAX[0xf] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x11] = 0;
  in_EAX[0x19] = 0;
  in_EAX[0x18] = 0;
  in_EAX[0x17] = 0;
  in_EAX[0x15] = 0;
  in_EAX[0x14] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x1a] = 0x3f800000;
  in_EAX[0x16] = 0x3f800000;
  in_EAX[0x12] = 0x3f800000;
  in_EAX[0x1d] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x1b] = 0;
  *(undefined1 *)(in_EAX + 0x20) = 0;
  in_EAX[0x10] = 0;
  in_EAX[0x1f] = 0;
  iVar1 = (**(code **)(*in_EAX + 4))();
  if (iVar1 != 0) {
    in_EAX[0x10] = iVar1;
    *(undefined1 *)(in_EAX + 0x20) = 0;
    return;
  }
  iVar1 = (**(code **)(*in_EAX + 0xc))();
  in_EAX[0x10] = iVar1;
  *(undefined1 *)(in_EAX + 0x20) = 1;
  return;
}
