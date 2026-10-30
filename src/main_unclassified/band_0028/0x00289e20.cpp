/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B2C5D883BDF127A70115B6E1FE9AB09C812449315B4E2FA416A38532FBA8105A
 * Entry: 0x00289e20, Ghidra index: 9149, label: FUN_00289e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
undefined4 FUN_00289e20(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  
  if (in_EAX == 0) {
    return 0xfffffffa;
  }
  puVar1 = (undefined4 *)(*(int *)(DAT_00469888 + 4) + -0x10 + in_EAX * 0x10);
  uVar2 = *puVar1;
  switch(uVar2) {
  case 0:
    return *(undefined4 *)(puVar1[2] + 0x10);
  case 0xfffffff6:
    return 0xfffffffb;
  case 0xfffffff7:
    return 0xfffffffc;
  case 0xfffffff8:
  case 0xfffffff9:
    uVar2 = *(undefined4 *)(puVar1[2] + 0x10);
    break;
  case 0xfffffffd:
    return *(undefined4 *)(puVar1[2] + 0x14);
  }
  return uVar2;
}
