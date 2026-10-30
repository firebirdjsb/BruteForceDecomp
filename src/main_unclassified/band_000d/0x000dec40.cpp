/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5AF7E0DC09E4BD0D3202E0D089CFF9957789CD6C830C8FDCCBD0AC465186DB1
 * Entry: 0x000dec40, Ghidra index: 2724, label: FUN_000dec40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_000de3f0(int param_1,int param_2,char param_3,int param_4);
extern undefined4 FUN_000deac0(void);
extern undefined4 FUN_000ff730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
extern void FUN_000b2a50(void);
extern undefined4 FUN_00173530(void);
extern int FUN_00173560(void);

undefined4 FUN_000dec40(int param_1,int param_2,int *param_3)

{
  undefined4 *in_EAX;
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 in_ECX;
  int in_EDX;
  
  *in_EAX = 0;
  *param_3 = -1;
  piVar1 = (int *)FUN_000de3f0(in_EDX,in_ECX,1,2);
  if (piVar1 == (int *)0x0) {
    uVar5 = FUN_000deac0(in_EDX);
    *in_EAX = uVar5;
    iVar3 = *(int *)(in_EDX + 0xc28);
    iVar2 = FUN_000ff730(in_EDX + 0xc24,iVar3,*(undefined4 *)(iVar3 + 4),in_EAX);
    FUN_000b2a50();
    *(int *)(iVar3 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
    piVar1 = (int *)(**(code **)(*(int *)*in_EAX + 0x18))();
  }
  else {
    *in_EAX = piVar1;
    piVar1 = (int *)(**(code **)(*piVar1 + 0x18))();
  }
  if (param_2 == -1) {
    iVar3 = FUN_00173530();
    if (iVar3 == -1) {
      piVar4 = (int *)FUN_00173560();
      (**(code **)(*piVar1 + 0xc))(param_1,piVar4);
      iVar3 = *piVar4;
    }
    *param_3 = iVar3;
    return 1;
  }
  uVar5 = (**(code **)(*piVar1 + 0x10))();
  piVar1 = *(int **)(param_1 + 0x74);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x30))(piVar1,param_2,uVar5);
  }
  iVar3 = FUN_00173530();
  if (iVar3 == -1) {
    piVar1 = (int *)FUN_00173560();
    *piVar1 = param_2;
  }
  *param_3 = param_2;
  return 1;
}
