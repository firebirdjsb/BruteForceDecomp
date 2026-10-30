/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2B9C829FB4145B580A81B1E00702A65B61DB7CAB20F251603604343FE6C9D78
 * Entry: 0x00126af0, Ghidra index: 3721, label: FUN_00126af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00126af0(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x1f8);
  if ((((iVar1 != 0x25) && (iVar1 != 0x26)) && (iVar1 != 0x27)) &&
     ((iVar1 != 0x29 && (iVar1 != 0x28)))) {
    return 0;
  }
  return 1;
}
