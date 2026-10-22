/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C40283E418C4DECE914A9BB97CB8D42AE7FDFC456AEFD3B85763BA10343B81FB
 * Entry: 0x00273c50, Ghidra index: 8866, label: FUN_00273c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_IGeoTransformControl_004064bc[];
extern char s_23_23_IPSysControl_004050d0[];
extern char s_23_23_IUserEventControl_0040c54c[];
int FUN_00273c50(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  piVar1 = *(int **)(in_ECX + 8);
  iVar3 = -0x7fffbffb;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  iVar2 = (**(code **)*param_1)
                    (param_1,s_23_23_IGeoTransformControl_004064bc,(undefined4 *)(in_ECX + 8));
  if (-1 < iVar2) {
    iVar3 = 0;
  }
  piVar1 = *(int **)(in_ECX + 0xe0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xe0) = 0;
  }
  iVar2 = (**(code **)*param_1)(param_1,s_23_23_IPSysControl_004050d0,(undefined4 *)(in_ECX + 0xe0))
  ;
  if (-1 < iVar2) {
    iVar3 = 0;
  }
  piVar1 = *(int **)(in_ECX + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  iVar2 = (**(code **)*param_1)
                    (param_1,s_23_23_IUserEventControl_0040c54c,(undefined4 *)(in_ECX + 0xc));
  if (-1 < iVar2) {
    iVar3 = 0;
  }
  *(bool *)(in_ECX + 0x7c) = iVar3 == 0;
  *(undefined4 *)(in_ECX + 0x78) = 2;
  return iVar3;
}
