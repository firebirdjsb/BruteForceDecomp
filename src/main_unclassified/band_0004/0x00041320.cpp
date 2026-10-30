/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6ECF392C829EDB9CE36A9C0ED3356849B7A78FC07865C18EA376E35BFC123091
 * Entry: 0x00041320, Ghidra index: 494, label: FUN_00041320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00040fc0(void);
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern undefined4 FUN_000410a0(float param_1);

undefined4 FUN_00041320(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 == 0) || ((*(int *)(in_EAX + 8) - iVar1) / 0x18 < 2)) {
    return 1;
  }
  if (*(int **)(iVar1 + 0x14) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x14) + 0x3c))();
    if (iVar1 == 6) {
      return 1;
    }
    if ((0x19 < iVar1) && (iVar1 < 0x1c)) {
      return 1;
    }
  }
  FUN_00040fc0();
  FUN_00040fc0();
  piVar2 = (int *)FUN_000120f0();
  (**(code **)(*piVar2 + 0x40))();
  uVar3 = FUN_000410a0(0x3f4ccccd);
  return uVar3;
}
