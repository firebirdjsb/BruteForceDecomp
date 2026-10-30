/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C32125F14FB7B5CE3132103ABD9F038654F441FB3102A043E67D8B4AA10B1B6
 * Entry: 0x000a16e0, Ghidra index: 1908, label: FUN_000a16e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
extern void FUN_000a17a0(void);
extern undefined4 FUN_000a0db0(void);

int FUN_000a16e0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return -0x7fffbffe;
  }
  iVar1 = FUN_002ea01d(0x14c);
  if (iVar1 == 0) {
    *param_3 = 0;
    return -0x7ff8fff2;
  }
  piVar2 = (int *)FUN_000a17a0();
  if (piVar2 == (int *)0x0) {
    *param_3 = 0;
    return -0x7ff8fff2;
  }
  iVar1 = FUN_000a0db0(param_2);
  if (iVar1 != 0) {
    if ((undefined4 *)param_2[3] != (undefined4 *)0x0) {
      *(undefined4 *)param_2[3] = 0;
    }
    (**(code **)(*piVar2 + 0x74))(1);
    *param_2 = 0;
    return iVar1;
  }
  *param_3 = piVar2;
  return 0;
}
