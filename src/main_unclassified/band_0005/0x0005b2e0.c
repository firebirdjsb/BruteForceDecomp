/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5588AD9B93C08513D2CF7C8F086EA3D3813EC09AE13D0057AD8C861A005ACAB
 * Entry: 0x0005b2e0, Ghidra index: 919, label: FUN_0005b2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee source declares FUN_000a3d50(void).  Xbox callback/register ABI remains
 * ABI_UNVERIFIED; this forward declaration is for C11 source inspection only. */
extern void FUN_000a3d50(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
/* WARNING: Type propagation algorithm not settling */

uint FUN_0005b2e0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uStack_64;
  undefined4 local_60 [24];
  
  piVar7 = *(int **)(in_EAX + 8);
  if ((piVar7 == (int *)0x0) ||
     (((uint)piVar7 & -(uint)((*(byte *)((int)piVar7 + 0x26) & 0x40) != 0)) == 0)) {
    piVar7 = (int *)0x0;
  }
  uVar3 = FUN_000120f0();
  if (((piVar7 != (int *)0x0) &&
      (((uint)piVar7 & -(uint)((*(byte *)((int)piVar7 + 0x26) & 0x40) != 0)) != 0)) && (uVar3 != 0))
  {
    iVar4 = FUN_0014d2e0();
    uVar3 = 0;
    if (iVar4 != 0) {
      FUN_0001fe40(local_60,0xc,8,FUN_000a3d50);
      uVar3 = (**(code **)(*piVar7 + 0x130))(local_60,8);
      uVar5 = 0;
      if (uVar3 != 0) {
        DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
        uVar6 = DAT_0046cfd8 % uVar3;
        uVar1 = local_60[uVar6 * 3];
        uVar2 = (&uStack_64)[uVar6 * 3];
        uVar5 = local_60[uVar6 * 3 + -2];
        *param_1 = uVar5;
        param_1[1] = uVar2;
        param_1[2] = uVar1;
      }
      return CONCAT31((int3)((uint)uVar5 >> 8),uVar3 != 0);
    }
  }
  return uVar3 & 0xffffff00;
}
