/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B404295B77997A988EC9BD3600DFF6D4EB09D6F81A7CFC29C70B229B8DD4396D
 * Entry: 0x000f9510, Ghidra index: 3126, label: FUN_000f9510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000f9510(int param_1)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  undefined3 uVar3;
  char *in_EDX;
  char *extraout_EDX;
  float10 fVar4;
  float10 extraout_ST0;
  float10 fVar5;
  undefined8 uVar6;
  float local_4;
  
  cVar2 = *in_EDX;
  iVar1 = *(int *)(in_EAX + 0x2c) + 4;
  local_4 = 0.0;
  if (iVar1 != 0) {
    fVar4 = (float10)FUN_0008e620(*(int *)(in_EAX + 0x2c),*(undefined4 *)(in_EDX + 4),iVar1);
    local_4 = (float)fVar4;
    in_EDX = extraout_EDX;
  }
  fVar4 = (float10)0.0;
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar6 = CONCAT44(in_EDX,iVar1);
  if (iVar1 + 4 != 0) {
    uVar6 = FUN_0008e620(iVar1,*(undefined4 *)(in_EDX + 4),iVar1 + 4);
    fVar4 = extraout_ST0;
  }
  fVar5 = (float10)local_4;
  uVar3 = (undefined3)
          (CONCAT22((short)((ulonglong)uVar6 >> 0x10),
                    (ushort)(fVar5 < fVar4) << 8 | (ushort)(isnan(fVar5) || isnan(fVar4)) << 10 |
                    (ushort)(fVar5 == fVar4) << 0xe) >> 8);
  if (fVar5 < fVar4 != (fVar5 == fVar4)) {
    return CONCAT31(uVar3,*(undefined1 *)((ulonglong)uVar6 >> 0x20));
  }
  return CONCAT31(uVar3,cVar2 == '\0');
}
