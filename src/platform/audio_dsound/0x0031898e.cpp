/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69CA44A9789D553B96744529C7CD63B6DD364A1B2478DF253421887BA8088BE2
 * Entry: 0x0031898e, Ghidra index: 12205, label: CMcpxVoiceClient_Commit3dSettings
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint DSOUND__CMcpxVoiceClient_Commit3dSettings(void)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  undefined4 local_8;
  
  uVar4 = 0;
  FUN_0031193a();
  if ((*(byte *)(in_ECX + 0x12) & 3) == 3) {
    local_8 = 0;
    iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x78) + 0xb4) + 0x3c);
    uVar3 = 0;
    if (*(int *)(in_ECX + 0x7c) != iVar2) {
      if ((iVar2 == 2) == (*(int *)(in_ECX + 0x7c) == 2)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x3f;
        local_8 = 0xf;
      }
      *(int *)(in_ECX + 0x7c) = iVar2;
      puVar1 = (ushort *)(*(int *)(*(int *)(in_ECX + 0x78) + 0xb4) + 0x78);
      *puVar1 = *puVar1 | 0x1ff;
    }
    iVar2 = *(int *)(*(int *)(in_ECX + 0x78) + 0xb4);
    uVar4 = *(uint *)(iVar2 + 0x78);
    if (*(int *)(iVar2 + 0x3c) != 2) {
      FUN_00314e06(uVar4);
      uVar3 = uVar3 | *(uint *)(*(int *)(in_ECX + 0x70) + 0x1c);
      if ((uVar4 & 0x100) != 0) {
        FUN_00319f88(*(undefined4 *)(*(int *)(in_ECX + 0x70) + 0xc));
        local_8 = local_8 | **(uint **)(in_ECX + 0x74);
      }
    }
    FUN_003187a2(uVar3,local_8);
  }
  FUN_0031195f();
  return uVar4;
}
