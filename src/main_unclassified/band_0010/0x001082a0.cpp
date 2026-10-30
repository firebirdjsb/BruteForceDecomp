/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E22C2242AD9575910CBC1F539B4FE5504EF2E8FE33CA00FF95C0B4A8F2599C82
 * Entry: 0x001082a0, Ghidra index: 3384, label: FUN_001082a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_001082a0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  if (((param_2 != (int *)0x0) && (iVar2 = (**(code **)(*param_2 + 4))(), iVar2 == 1)) &&
     (param_2 != (int *)0x0)) {
    uVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1d4))();
    uStack_48 = 0;
    uStack_44 = 0x41a00000;
    cVar1 = FUN_00107e90(param_1,param_1 + 0x20,uVar3,0x14,&uStack_48);
    *(char *)(param_1 + 0x56) = '\x01' - (cVar1 != '\0');
    uStack_44 = 0xc288e26;
    uVar3 = FUN_001e97c0(uStack_48);
    FUN_002ea9a9(auStack_40,0x20,uVar3);
    FUN_0010a7d0();
  }
  return;
}
