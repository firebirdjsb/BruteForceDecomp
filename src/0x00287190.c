/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0BC90802DAD6EEFCDB159C90ACE85D54F8C89324A1081F81A4FA5E7E1C2A58C
 * Entry: 0x00287190, Ghidra index: 9086, label: FUN_00287190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00287190(int *param_1)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  uint in_EDX;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_EAX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_EAX + 8) - iVar2 >> 2;
  }
  if (uVar1 < in_EDX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_EAX + 8) - iVar2 >> 2;
    }
    FUN_000615d0(in_EAX,*(undefined4 *)(in_EAX + 8),in_EDX - iVar2,&param_1);
  }
  else if ((iVar2 != 0) && (in_EDX < (uint)(*(int *)(in_EAX + 8) - iVar2 >> 2))) {
    FUN_00263380(local_4,*(int *)(in_EAX + 4) + in_EDX * 4,*(int *)(in_EAX + 8));
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}
