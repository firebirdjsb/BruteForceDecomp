/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F388133E61C225B8FDB9184F449EC8CA2FBE0AC38E7E66D613E0B6057AB62768
 * Entry: 0x000ec280, Ghidra index: 2922, label: FUN_000ec280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ec280(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x4c) != 0) {
    FUN_0008f6e0();
  }
  if (*(int *)(in_ECX + 0x44) != 0) {
    FUN_0008f6e0();
  }
  if (*(int *)(in_ECX + 0x3c) != 0) {
    FUN_0008f6e0();
  }
  FUN_00059bf0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
