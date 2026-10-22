/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5D24702E6C2E107D26BA480B12F606EC4641FA53F96F292B933F5C848C2941D
 * Entry: 0x00353621, Ghidra index: 13089, label: FUN_00353621
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00353621(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  
  if (*(int *)(param_2 + 0x24) < 2) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    if ((param_3 != 0) && (3 < ((byte)*(undefined4 *)(param_2 + 8) & 7))) {
      iVar3 = FUN_00348661(param_2,*(undefined4 *)(param_1 + 0x44));
      if (iVar3 == 0) goto LAB_00353714;
    }
    puVar4 = (uint *)FUN_0034cc49();
    *(byte *)(puVar4 + 2) = (*(char *)(param_2 + 0x33) + '\x03') * '\x04' & 0xf0;
    FUN_0034c865(*(undefined2 *)(param_1 + 0x4a),*(undefined2 *)(param_1 + 0x48));
    uVar5 = *(uint *)(param_2 + 0x28);
    *puVar4 = (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8 | (uVar5 & 0xff00 | uVar5 << 0x10) << 8;
    uVar5 = *(uint *)(param_1 + 0xc4);
    puVar4[1] = (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8 | (uVar5 & 0xff00 | uVar5 << 0x10) << 8;
    *(undefined1 *)((int)puVar4 + 9) = *(undefined1 *)(param_2 + 0x32);
    *(ushort *)((int)puVar4 + 10) =
         CONCAT11((char)*(undefined2 *)(param_1 + 200),
                  (char)((ushort)*(undefined2 *)(param_1 + 200) >> 8));
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    FUN_0034a7ce(param_2,*(undefined4 *)(param_1 + 0x44),6,param_1 + 0x4c);
  }
LAB_00353714:
  piVar1 = *(int **)(param_1 + 0x34);
  if (param_2 == (-(uint)(piVar1 != (int *)(param_1 + 0x34)) & (uint)(piVar1 + -5))) {
    if ((*(byte *)(param_1 + 0xd) & 2) == 0) {
      bVar2 = *(byte *)(in_ECX + 0x35);
    }
    else {
      bVar2 = *(byte *)(in_ECX + 0x37);
    }
    uVar5 = *(int *)(param_1 + 0xdc) << (*(byte *)(param_2 + 0x30) & 0x1f);
    *(uint *)(param_1 + 0x90) = uVar5;
    if (uVar5 < (uint)bVar2 * 5) {
      *(uint *)(param_1 + 0x90) = (uint)bVar2 * 5;
    }
    uVar5 = (uint)*(byte *)(in_ECX + 0x36) * 5;
    if (uVar5 < *(uint *)(param_1 + 0x90)) {
      *(uint *)(param_1 + 0x90) = uVar5;
    }
    uVar6 = FUN_0034c3bf(param_1 + 0x6c,*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = uVar6;
  }
  *(short *)(param_2 + 0x30) = *(short *)(param_2 + 0x30) + 1;
  return;
}
