/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27BAF5E453704D6E41C0CDF8BC3A20D46A5811520E78339A89D220FE240294E6
 * Entry: 0x003489bc, Ghidra index: 12904, label: FUN_003489bc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003489bc(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  undefined4 uVar4;
  
  KeRaiseIrqlToDpcLevel();
  if (param_1 < 4) {
    iVar1 = param_1 * 0x30 + 0xaf0 + in_ECX;
    if (*(int *)(iVar1 + 0x18) != 0) {
      ObfDereferenceObject();
    }
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      iVar2 = ObReferenceObjectByHandle(param_2,ExEventObjectType_exref,&param_2);
      uVar3 = ~-(uint)(iVar2 != 0) & param_2;
    }
    *(uint *)(iVar1 + 0x18) = uVar3;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  KfLowerIrql();
  return uVar4;
}
