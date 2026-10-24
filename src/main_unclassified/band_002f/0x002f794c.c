/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B5214EF8646F6C5EDF9E2B6350AA14B8542122A0AEFA2CCDB613E39F879BC4F
 * Entry: 0x002f794c, Ghidra index: 10935, label: CancelIo
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__CancelIo(undefined4 ***param_1)

{
  undefined4 ****ppppuVar1;
  undefined4 ***pppuVar2;
  undefined4 ***pppuVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 ****ppppuVar6;
  undefined1 local_28 [28];
  undefined4 ***local_c;
  undefined4 ***local_8;
  
  local_8 = &local_c;
  local_c = &local_c;
  iVar4 = ObReferenceObjectByHandle(param_1,*(uint32_t *)(uintptr_t)UINT32_C(0x00386564),&param_1);
  if (iVar4 < 0) {
    XapiSetLastNTError(iVar4);
    uVar5 = 0;
  }
  else {
    KeRaiseIrqlToDpcLevel();
    ppppuVar6 = *(undefined4 *****)((uintptr_t)*(uint32_t *)(uintptr_t)UINT32_C(0x00386560) + 0x28);
    if (ppppuVar6 != (undefined4 ****)((uintptr_t)*(uint32_t *)(uintptr_t)UINT32_C(0x00386560) + 0x28)) {
      do {
        ppppuVar1 = (undefined4 ****)*ppppuVar6;
        if ((ppppuVar6[9] == param_1) && (((byte)*(code *)((int)ppppuVar6 + -0x37) & 0x10) == 0)) {
          pppuVar2 = ppppuVar6[1];
          pppuVar3 = *ppppuVar6;
          *pppuVar2 = pppuVar3;
          pppuVar3[1] = pppuVar2;
          *ppppuVar6 = &local_c;
          ppppuVar6[1] = local_8;
          *local_8 = ppppuVar6;
          local_8 = ppppuVar6;
        }
        ppppuVar6 = ppppuVar1;
      } while (ppppuVar1 != (undefined4 ****)((uintptr_t)*(uint32_t *)(uintptr_t)UINT32_C(0x00386560) + 0x28));
    }
    KfLowerIrql();
    if ((undefined4 ****)local_c != &local_c) {
      KeInitializeDpc(local_28,&LAB_002f7925,&local_c);
      KeInsertQueueDpc(local_28,0,0);
    }
    ObfDereferenceObject();
    uVar5 = 1;
  }
  return uVar5;
}
