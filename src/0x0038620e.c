/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50261BA376B6D13B4548856EA3A439058A4E6CE88487D3EFCB1C18E6CBF9213F
 * Entry: 0x0038620e, Ghidra index: 13691, label: FUN_0038620e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fe4;
undefined4 FUN_0038620e(void)

{
  int in_ECX;
  int in_EDX;
  
  if (DAT_004a8fe4 < *(ushort *)(in_EDX + 0x20)) {
    return 0x80000500;
  }
  if (*(int *)(in_ECX + 0x424) == 0) {
    *(int *)(in_ECX + 0x424) = in_EDX;
  }
  else {
    *(int *)(*(int *)(in_ECX + 0x428) + 0x24) = in_EDX;
  }
  *(int *)(in_ECX + 0x428) = in_EDX;
  FUN_00386141();
  return 0x40000000;
}
