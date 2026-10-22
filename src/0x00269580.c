/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CEAD1456BBD323CCD1229808D63A5673E053F16F182A0B18E13C2A067059A24C
 * Entry: 0x00269580, Ghidra index: 8745, label: FUN_00269580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00269580(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_EDX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_51c;
  undefined4 local_518 [324];
  int local_8;
  int local_4;
  
  local_51c = in_EDX[0x144];
  iVar2 = in_EDX[0x145];
  local_8 = iVar2;
  local_4 = local_51c;
  if (local_51c != 0) {
    puVar4 = local_518;
    iVar1 = iVar2;
    puVar5 = in_EDX;
    puVar3 = puVar4;
    do {
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *in_EDX;
        in_EDX = in_EDX + 1;
        puVar4 = puVar4 + 0x12;
      }
      in_EDX = puVar5 + 0x12;
      puVar4 = puVar3 + 1;
      local_51c = local_51c + -1;
      iVar1 = iVar2;
      puVar5 = in_EDX;
      puVar3 = puVar4;
    } while (local_51c != 0);
  }
  puVar4 = local_518;
  for (iVar2 = 0x146; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 1;
  }
  return;
}
