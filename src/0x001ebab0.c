/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DD82FDD4FB4D84A1E0582F02AA157B76232025A6C7CCBDEAC14DE169CF520F3
 * Entry: 0x001ebab0, Ghidra index: 6893, label: FUN_001ebab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ebab0(int *param_1)

{
  int in_ECX;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  iStack_c = in_ECX + 0x18;
  iStack_10 = 0x1ebac3;
  (**(code **)(*param_1 + 0x18))();
  iStack_10 = in_ECX + 0x1c;
  iStack_14 = 0x1ebace;
  (**(code **)(*param_1 + 0x24))();
  iStack_14 = in_ECX + 0x20;
  iStack_18 = 0x1ebad9;
  (**(code **)(*param_1 + 0x24))();
  iStack_18 = in_ECX + 0x24;
  (**(code **)(*param_1 + 0x20))();
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x28);
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x2c);
  (**(code **)(*param_1 + 0x24))(in_ECX + 0x30);
  iStack_18 = 0x10;
  (**(code **)(*param_1 + 0x54))(in_ECX + 0x34,&iStack_18);
  (**(code **)(*param_1 + 0x30))(in_ECX + 0x54);
  (**(code **)(*param_1 + 0x14))(in_ECX + 0x58);
  (**(code **)(*param_1 + 0x14))(in_ECX + 0x59);
  (**(code **)(*param_1 + 0x14))(in_ECX + 0x5a);
  (**(code **)(*param_1 + 0x14))(in_ECX + 0x5b);
  (**(code **)(*param_1 + 0x14))(in_ECX + 0x5c);
  return param_1[3];
}
