/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12A99BBD3490B593885B2C964B17E4D60A5FD97AF2C851A8D109BA3ED5AD49DB
 * Entry: 0x00272130, Ghidra index: 8829, label: FUN_00272130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_ICameraControl_0040c808[];
extern char s_23_23_IGeoTransformControl_004064bc[];
extern char s_23_23_IUserEventControl_0040c54c[];
int FUN_00272130(undefined4 *param_1)

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
  piVar1 = *(int **)(in_ECX + 0xf8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xf8) = 0;
  }
  iVar2 = (**(code **)*param_1)
                    (param_1,s_23_23_ICameraControl_0040c808,(undefined4 *)(in_ECX + 0xf8));
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
