/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4E1E3EB6951B22FE60B2D4350262CAEB32A4C2583815A47487617C6EF2E2581
 * Entry: 0x00067d90, Ghidra index: 1144, label: FUN_00067d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
extern void FUN_0037834e(void);

void FUN_00067d90(undefined4 param_1,float param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  float10 fVar8;
  int local_300 [64];
  undefined1 auStack_200 [256];
  undefined1 auStack_100 [256];
  
  uVar4 = 0;
  do {
    fVar8 = (float10)thunk_FUN_002ebfbe();
    iVar1 = D3D8__D3D_g_pDevice;
    fVar8 = fVar8 + (float10)param_2;
    if ((float10)0.0 <= fVar8) {
      if ((float10)1.0 < fVar8) {
        fVar8 = (float10)1.0;
      }
    }
    else {
      fVar8 = (float10)0.0;
    }
    uVar2 = (undefined1)(int)(fVar8 * (float10)255.0);
    auStack_100[uVar4] = uVar2;
    auStack_200[uVar4] = uVar2;
    *(undefined1 *)((int)local_300 + uVar4) = uVar2;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x100);
  uVar4 = *(uint *)(D3D8__D3D_g_pDevice + 0x2018) & 1;
  iVar3 = 0xc0;
  bVar7 = true;
  piVar5 = (int *)(*(int *)(D3D8__D3D_g_pDevice + 0x1fac) * 0x300 + 0x1dc +
                  D3D8__D3D_g_pDevice + 0x17c8);
  piVar6 = local_300;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar7 = *piVar5 == *piVar6;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar7);
  if (!bVar7) {
    piVar5 = local_300;
    piVar6 = (int *)(uVar4 * 0x300 + 0x1dc + D3D8__D3D_g_pDevice + 0x17c8);
    for (iVar3 = 0xc0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    *(uint *)(iVar1 + 0x1fac) = uVar4;
    FUN_0037834e();
  }
  return;
}
