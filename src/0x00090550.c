/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67F531A5D80F640C2F6CFA8BD9B1A2C6538B1C37B8626871AC0D913D077735CC
 * Entry: 0x00090550, Ghidra index: 1767, label: FUN_00090550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00090550(int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x88))(&local_4);
  if ((int)param_1 < iVar1) {
    return unaff_ESI + (int)param_1 * 0x14;
  }
  return 0;
}
