/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 259E0F08E2B4298D46702440FB51E6064C44F2EF127C046D03190D17CD36CE0D
 * Entry: 0x00224770, Ghidra index: 7619, label: FUN_00224770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00224770(undefined4 param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte *unaff_ESI;
  undefined4 *puVar5;
  undefined4 local_68;
  undefined4 local_60 [17];
  int local_1c;
  float local_14;
  
  if (*(int *)(unaff_ESI + 0x60) == 0) {
    return 0;
  }
  if (*(float *)(unaff_ESI + 0x2c) < 0.0 != (*(float *)(unaff_ESI + 0x2c) == 0.0)) {
    piVar1 = *(int **)(unaff_ESI + 0x5c);
    piVar2 = (int *)*piVar1;
    local_68 = 1;
    while (piVar2 != piVar1) {
      iVar4 = *(int *)(piVar2[4] + 0x1c);
      if (iVar4 == 0) {
LAB_002247d7:
        local_1c = 0;
        puVar5 = local_60;
        for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        local_14 = 0.0;
        FUN_00224510(unaff_ESI,local_60,*(undefined4 *)(piVar2[4] + 0x28),piVar2[4]);
        if ((*unaff_ESI & 0x10) != 0) {
          local_14 = local_14 * param_2;
        }
        (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x54) + 0x1d4) + 8))(param_1,local_60,local_68);
        local_68 = 0;
        if (local_1c != 0) {
          FUN_0008f6e0();
        }
      }
      else {
        piVar3 = *(int **)(iVar4 + 0x9c);
        iVar4 = *piVar3;
        if ((iVar4 == 0) || (iVar4 == 1)) {
          iVar4 = piVar3[1];
        }
        else {
          iVar4 = 0;
        }
        if (*(int *)(piVar2[4] + 0x28) == iVar4) goto LAB_002247d7;
      }
      FUN_0012aba0();
    }
  }
  FUN_00224950();
  return 1;
}
