/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B67C135E49556A2AA176688FCE354A68E349FFCFA58F0F368808371252BC22E9
 * Entry: 0x0009c520, Ghidra index: 1866, label: FUN_0009c520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_0009c5e0(void);
extern undefined4 FUN_0009b730(void);

int FUN_0009c520(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return -0x7fffbffe;
  }
  iVar1 = FUN_002ea01d(0xe8);
  if (iVar1 == 0) {
    *param_3 = 0;
    return -0x7ff8fff2;
  }
  piVar2 = (int *)FUN_0009c5e0();
  if (piVar2 == (int *)0x0) {
    *param_3 = 0;
    return -0x7ff8fff2;
  }
  iVar1 = FUN_0009b730();
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
