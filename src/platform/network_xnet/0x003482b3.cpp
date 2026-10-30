/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 449CADA49D3F46C523666CDEC0850CE2359E5DE7946893C7EFA952308DA8C431
 * Entry: 0x003482b3, Ghidra index: 12892, label: FUN_003482b3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003569d0;
extern uint32_t DAT_00356a30;
undefined4 FUN_003482b3(byte *param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_c4 [24];
  undefined4 local_64 [24];
  
  if ((*param_1 & 0xc0) == 0) {
    FUN_0034c7e5(local_64,0x60);
    XcModExp(local_c4,&DAT_00356a30,local_64,&DAT_003569d0,0x18);
  }
  else if ((*param_1 & 0xc0) != 0x80) {
    return 0x2726;
  }
  KeRaiseIrqlToDpcLevel();
  iVar2 = FUN_00347b83(param_1);
  if (iVar2 == 0) {
    uVar1 = *(ushort *)(in_ECX + 0xacc);
    if (uVar1 == *(byte *)(in_ECX + 0xd)) {
      uVar4 = 0x2776;
    }
    else {
      puVar3 = (undefined4 *)((uint)uVar1 * 0xf4 + *(int *)(in_ECX + 0xac0));
      *(ushort *)(in_ECX + 0xacc) = uVar1 + 1;
      *puVar3 = *(undefined4 *)param_1;
      puVar3[1] = *(undefined4 *)(param_1 + 4);
      FUN_00347bb6(param_1,param_2,puVar3 + 2,0x10,puVar3 + 6,0x18);
      puVar5 = local_64;
      puVar6 = puVar3 + 0xc;
      for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = local_c4;
      puVar6 = puVar3 + 0x24;
      for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      uVar4 = 0;
      puVar3[0x3c] = 0;
    }
  }
  else {
    uVar4 = 0x2735;
  }
  KfLowerIrql();
  return uVar4;
}
