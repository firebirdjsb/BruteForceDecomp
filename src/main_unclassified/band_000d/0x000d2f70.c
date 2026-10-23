/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0825A2DA1D0AC0B9C45196B39835072E1CDB6BB1C1117F5C66D78DBBC406A928
 * Entry: 0x000d2f70, Ghidra index: 2626, label: FUN_000d2f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d2f70(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  int unaff_ESI;
  int iVar7;
  undefined1 local_c [12];
  
  *(int *)(unaff_ESI + 0xf0a8) = in_EAX;
  iVar2 = *(int *)(in_EAX + 0x1c);
  iVar3 = *(int *)(*(int *)(unaff_ESI + 0xf00c) + 0x8c);
  iVar7 = *(int *)(in_EAX + 0x18);
  do {
    if (iVar7 == iVar2) {
      return;
    }
    iVar5 = FUN_000e7320(2);
    if (((iVar5 != 0) || (*(int *)(iVar7 + 4) != 0)) && (0.0 <= *(float *)(iVar7 + 8))) {
      if ((*(byte *)(unaff_ESI + 0xf008) & 2) != 0) {
        FUN_000621c0();
        iVar5 = (**(code **)(*(int *)(iVar3 + 0x48) + 0x50))(local_c,*(undefined4 *)(iVar7 + 8));
        if (iVar5 < 3) goto LAB_000d30e5;
      }
      *(int *)(unaff_ESI + 0xf0ac) = iVar7;
      piVar4 = *(int **)(iVar7 + 4);
      if ((piVar4 == (int *)0x0) ||
         (uVar6 = (**(code **)(*piVar4 + 0x34))(piVar4), (uVar6 >> 2 & 1) == 0)) {
        puVar1 = (undefined4 *)(unaff_ESI + (*(int *)(unaff_ESI + 0xf000) + 0x200) * 0x14);
        *puVar1 = *(undefined4 *)(unaff_ESI + 0xf0a0);
        puVar1[2] = *(undefined4 *)(unaff_ESI + 0xf0a8);
        puVar1[3] = *(undefined4 *)(unaff_ESI + 0xf0ac);
        puVar1[1] = *(undefined4 *)(unaff_ESI + 0xf0a4);
        puVar1[4] = *(undefined4 *)(unaff_ESI + 0xf0b0);
        *(int *)(unaff_ESI + *(int *)(unaff_ESI + 0xf000) * 4) =
             unaff_ESI + (*(int *)(unaff_ESI + 0xf000) * 5 + 0xa00) * 4;
        *(int *)(unaff_ESI + 0xf000) = *(int *)(unaff_ESI + 0xf000) + 1;
      }
      else {
        puVar1 = (undefined4 *)(unaff_ESI + (0xbff - *(int *)(unaff_ESI + 0xf004)) * 0x14);
        *puVar1 = *(undefined4 *)(unaff_ESI + 0xf0a0);
        puVar1[2] = *(undefined4 *)(unaff_ESI + 0xf0a8);
        puVar1[3] = *(undefined4 *)(unaff_ESI + 0xf0ac);
        puVar1[1] = *(undefined4 *)(unaff_ESI + 0xf0a4);
        puVar1[4] = *(undefined4 *)(unaff_ESI + 0xf0b0);
        *(int *)(unaff_ESI + 0x27fc + *(int *)(unaff_ESI + 0xf004) * -4) =
             unaff_ESI + (*(int *)(unaff_ESI + 0xf004) * -5 + 0x3bfb) * 4;
        *(int *)(unaff_ESI + 0xf004) = *(int *)(unaff_ESI + 0xf004) + 1;
      }
    }
LAB_000d30e5:
    iVar7 = iVar7 + 0x2c;
  } while( true );
}
