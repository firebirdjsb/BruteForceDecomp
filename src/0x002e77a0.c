/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A79665B4C07BBF0167B418AB3A92A6FA6C61E0A5A72450EEE7691F29D4C32E0F
 * Entry: 0x002e77a0, Ghidra index: 10518, label: FUN_002e77a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e77a0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  if (iVar1 == -1) {
    iVar1 = 0x10000;
  }
  return iVar1;
}
