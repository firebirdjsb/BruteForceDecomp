/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B508872CBEE43F19E0E66066C1767F9542B1B7854983094746FBBCEAD3D171EC
 * Entry: 0x002b8640, Ghidra index: 9857, label: FUN_002b8640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b8640(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_ECX;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    FUN_002b7c70(in_ECX,param_1[1] + (int)param_1);
    return;
  }
  local_4 = 0;
  local_10 = param_1[2];
  local_c = param_1[3];
  local_8 = param_1[4];
  iVar2 = FUN_002b7b50(in_ECX,&local_10,param_1[5]);
  if (iVar2 != 0) {
    FUN_002b8640(param_1 + 7);
    FUN_002b8640(iVar1 + (int)param_1);
  }
  return;
}
