/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5BA10BC3F28A571F03B5666FDD88162D219FD5CDCE3D88D4E4238989FD72216
 * Entry: 0x00281cc0, Ghidra index: 9055, label: FUN_00281cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00281cc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 in_EAX;
  int iVar2;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  puVar1 = param_1;
  param_1[0xa14] = in_EAX;
  param_1[0xa10] = in_ECX;
  *param_1 = in_EDX;
  param_1[0xa11] = 0;
  param_1[0xa12] = 0;
  param_1[0xa13] = 0;
  param_1[0xa04] = 3;
  param_1[0xa01] = 1;
  iVar2 = FUN_00281bf0(&param_1);
  if (iVar2 == -1) {
    return 0x80004005;
  }
  puVar1[0xa06] = 0;
  puVar1[0xa05] = (uint)param_1 & 0xffff;
  return 0;
}
