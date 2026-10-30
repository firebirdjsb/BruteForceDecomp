/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E8070D1F928631933A8501A73BE4937285C9FB3A2BC112CE9CD53529C6CF4CD
 * Entry: 0x00348ad6, Ghidra index: 12907, label: FUN_00348ad6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
/* Matched to C-draft definitions, NOT verified original Xbox callback ABI. */
extern void FUN_00347cb2(int param_1);
void FUN_00348ad6(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  
  KeRaiseIrqlToDpcLevel();
  if (param_1[3] == 0) {
    param_1[2] = 0xffffffff;
    *param_1 = 0;
    param_1[3] = FUN_00347cb2;
  }
  if (param_1[4] != 0) {
    ObfDereferenceObject();
    param_1[4] = 0;
  }
  iVar4 = param_3;
  if (param_3 != -1) {
    uVar3 = *(int *)KeTickCount_exref - *(int *)(in_ECX + 0x1dc);
    if (200 < uVar3) {
      uVar3 = 200;
    }
    if (param_3 + 0x19U < 200 - uVar3) {
      uVar3 = 0;
    }
    else {
      uVar3 = ((((param_3 + 0x19U) - (200 - uVar3)) + 199) * 5) / 1000;
    }
    iVar4 = uVar3 + 1 + *(int *)(in_ECX + 0x1d8);
    if ((param_2 == 0) ||
       (iVar1 = ObReferenceObjectByHandle(param_2,ExEventObjectType_exref,&param_2), iVar2 = param_2
       , iVar1 != 0)) {
      iVar2 = 0;
    }
    param_1[4] = iVar2;
  }
  FUN_0034c35a(param_1,iVar4);
  KfLowerIrql();
  return;
}
