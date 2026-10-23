/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E62698BDE1D3D98A2A6300D3BE526D8A386D38776BBE111D858D1E28D5538154
 * Entry: 0x002f21ca, Ghidra index: 10795, label: FUN_002f21ca
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f21ca(undefined2 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ushort local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined4 uStack_8;
  
  iVar3 = 0x3b7288;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar3 = 0x3b73e8;
    }
    if (param_3 == 0) {
      *param_1 = 0;
    }
    while (param_2 != 0) {
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      iVar3 = iVar3 + 0x54;
      param_2 = uVar1;
      if (uVar2 != 0) {
        puVar4 = (ushort *)(iVar3 + uVar2 * 0xc);
        if (0x7fff < *puVar4) {
          local_10 = (ushort)*(undefined4 *)puVar4;
          local_e._0_2_ = (undefined2)((uint)*(undefined4 *)puVar4 >> 0x10);
          local_e._2_2_ = (undefined2)*(undefined4 *)(puVar4 + 2);
          uStack_a = (undefined2)((uint)*(undefined4 *)(puVar4 + 2) >> 0x10);
          uStack_8 = *(undefined4 *)(puVar4 + 4);
          local_e = CONCAT22(local_e._2_2_,(undefined2)local_e) + -1;
          puVar4 = &local_10;
        }
        FUN_002f1fa8(param_1,puVar4);
      }
    }
  }
  return;
}
