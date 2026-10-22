/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F3D6C3CF0E84CAE5796AC2BFC5CDEF4AE53A589E72B06DCAF6E2411FF3D9353
 * Entry: 0x0021d7b0, Ghidra index: 7541, label: FUN_0021d7b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_IFxAppearance_00402ddc[];
undefined4 FUN_0021d7b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  piVar2 = *(int **)(param_1 + 4);
  local_4 = 0;
  iVar1 = (**(code **)*piVar2)(piVar2,s_23_23_IFxAppearance_00402ddc,&local_4);
  if (-1 < iVar1) {
    (**(code **)(*piVar2 + 0xcc))(piVar2,0,0);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return 0;
}
