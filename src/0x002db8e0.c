/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 902A8F2680D001AD04A91D6FFB560411C19FEB8743BDBCBFDDC7DF11FF7DBA57
 * Entry: 0x002db8e0, Ghidra index: 10286, label: FUN_002db8e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002db8e0(int param_1)

{
  int iVar1;
  int in_EDX;
  int iVar2;
  float *local_c;
  float local_8;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x24);
  local_8 = ABS(*(float *)(*(int *)(param_1 + 8) + (iVar1 + 1) * in_EDX * 4));
  iVar2 = *(int *)(param_1 + 0x28) + -1;
  if (in_EDX < iVar2) {
    local_c = (float *)(*(int *)(param_1 + 8) + (iVar1 * iVar2 + in_EDX) * 4);
    local_4 = in_EDX;
    do {
      if (local_8 < ABS(*local_c)) {
        local_8 = ABS(*local_c);
        local_4 = iVar2;
      }
      iVar2 = iVar2 + -1;
      local_c = local_c + -iVar1;
    } while (in_EDX < iVar2);
    if (local_4 != in_EDX) {
      FUN_002d9d10(*(int *)(param_1 + 0x28) - in_EDX);
      FUN_002d9d10(*(undefined4 *)(param_1 + 0x28));
    }
  }
  return;
}
