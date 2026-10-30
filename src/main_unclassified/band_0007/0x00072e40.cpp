/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D07F5CC8491290D3AE50530A6DB6D8DAAFE9F1577EB2679CF6BE4011B2BCC2B
 * Entry: 0x00072e40, Ghidra index: 1291, label: FUN_00072e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00072e40(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iVar2 = 0;
  do {
    if (*(int *)(unaff_ESI + 0x38 + iVar2 * 8) != 0) {
      if ((iVar2 == 0) && (*(float *)(unaff_ESI + 0x78) != 0.0)) {
        iVar1 = (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x38) + 0x48) + 0x18))();
        if (*(int *)(unaff_ESI + 0x18) < *(int *)(iVar1 + 4)) {
          if (*(int *)(iVar1 + 0xc) < *(int *)(unaff_ESI + 0x20)) {
            uStack_20 = *(undefined4 *)(unaff_ESI + 0x14);
            uStack_18 = *(undefined4 *)(unaff_ESI + 0x1c);
            iStack_1c = *(int *)(unaff_ESI + 0x18);
            iStack_14 = *(int *)(iVar1 + 4);
            uStack_10 = uStack_20;
            iStack_c = *(int *)(iVar1 + 0xc);
            uStack_8 = uStack_18;
            iStack_4 = *(int *)(unaff_ESI + 0x20);
            FUN_002386d0();
            D3D8LTCG__D3DDevice_Clear(2,&uStack_20,0xf3,0,0,0);
          }
        }
      }
      (**(code **)(**(int **)(unaff_ESI + 0x38 + iVar2 * 8) + 0x11c))(param_1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  return;
}
