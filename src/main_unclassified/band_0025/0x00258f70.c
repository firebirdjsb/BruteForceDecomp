/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F5346DDD0A3738B299EC9240228DE6AF48BD030C0890AE5557ACAC8A3EF7EEC
 * Entry: 0x00258f70, Ghidra index: 8491, label: FUN_00258f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469904;
extern uint32_t _DAT_004a5b3c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00258f70(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  uint in_EDX;
  uint local_4;
  
  uVar1 = param_1;
  uVar6 = in_ECX + 0x10;
  if ((uVar6 & 0xf) != 0) {
    uVar6 = uVar6 + (0x10 - (uVar6 & 0xf));
  }
  local_4 = 0x20;
  puVar2 = &param_1;
  if ((int)uVar6 < 0x21) {
    puVar2 = &local_4;
  }
  uVar6 = *puVar2;
  if (*(int *)(param_1 + 8) != 0) {
    uVar3 = 0x10;
    if (0xf < in_EDX) {
      uVar3 = in_EDX;
    }
    local_4 = 0;
    param_1 = uVar6;
    iVar4 = FUN_00258be0(uVar1,uVar6,uVar3,&local_4);
    uVar3 = local_4;
    if (iVar4 != 0) {
      iVar5 = ((*(uint *)(iVar4 + 0x10) & 0x3ffffff) - local_4) - uVar6;
      if (iVar5 < 0x200) {
        uVar6 = uVar6 + iVar5;
        FUN_00258e00();
      }
      else {
        FUN_00258b80(uVar1,iVar5);
        uVar6 = param_1;
      }
      puVar2 = (uint *)(iVar4 + uVar3);
      _DAT_004a5b3c = DAT_00469904;
      uVar7 = DAT_00469904 << 0xc;
      *puVar2 = uVar6;
      puVar2[3] = uVar3 & 0xfff | uVar7;
      if (*(int *)(uVar1 + 0xc) != 0) {
        *(uint **)(*(int *)(uVar1 + 0xc) + 8) = puVar2;
        puVar2[1] = *(uint *)(uVar1 + 0xc);
        puVar2[2] = 0;
        *(uint **)(uVar1 + 0xc) = puVar2;
        return puVar2 + 4;
      }
      *(uint **)(uVar1 + 0xc) = puVar2;
      puVar2[1] = 0;
      puVar2[2] = 0;
      return puVar2 + 4;
    }
  }
  return (uint *)0x0;
}
