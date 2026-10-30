/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27F1FA359FCF71C9A520DCAF7B2249A7C1062ED51B220D9111F233CC76CF022B
 * Entry: 0x0003a4a0, Ghidra index: 411, label: FUN_0003a4a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003a4a0(void)

{
  uint uVar1;
  char cVar2;
  int *in_EAX;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *in_ECX;
  undefined1 local_40 [8];
  undefined4 local_38;
  
  uVar1 = *in_ECX;
  if (uVar1 < 0xea874133) {
    if (uVar1 == 0xea874132) {
      *(byte *)(in_EAX + 0x119) = *(byte *)(in_EAX + 0x119) | 2;
      return;
    }
    if (uVar1 < 0x1676c5ad) {
      if (uVar1 == 0x1676c5ac) {
        piVar4 = (int *)FUN_000120f0();
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x15c))(0x1f,0);
          return;
        }
      }
      else if (uVar1 < 0xddca78b) {
        if (uVar1 == 0xddca78a) {
          iVar3 = (**(code **)(in_EAX[0x10] + 0x138))();
          if (iVar3 == 1) {
            *(ushort *)((int)in_EAX + 0x892) = *(ushort *)((int)in_EAX + 0x892) | 0x8000;
            return;
          }
          *(byte *)((int)in_EAX + 0x893) = *(byte *)((int)in_EAX + 0x893) & 0x7f;
          return;
        }
        if (uVar1 == 0x45bcd8b) {
          if (in_ECX[2] != 0x7f7fffff) {
            in_EAX[0x138] = in_ECX[2];
            return;
          }
        }
        else if (uVar1 == 0xb697d1b) {
          in_EAX[0x118] = 2;
          return;
        }
      }
      else {
        if (uVar1 == 0x1308c96d) {
          in_EAX[0xda] = in_ECX[2];
          return;
        }
        if ((uVar1 == 0x14dd9028) && (piVar4 = (int *)FUN_000120f0(), piVar4 != (int *)0x0)) {
          (**(code **)(*piVar4 + 0x15c))(0x20,0);
          return;
        }
      }
    }
    else if (uVar1 < 0xe1575d8e) {
      if (uVar1 == 0xe1575d8d) {
        *(byte *)(in_EAX + 0x119) = *(byte *)(in_EAX + 0x119) | 4;
        return;
      }
      if (uVar1 == 0x17b8a295) {
        iVar3 = FUN_000120f0();
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0x578) = 0x41a00000;
        }
        FUN_000124f0(0x40800000);
        return;
      }
      if (uVar1 == 0x1bdd6c69) {
        in_EAX[0xdb] = in_ECX[2];
        return;
      }
    }
    else {
      if (uVar1 == 0xe468c57d) {
        FUN_0003f0e0(0);
        return;
      }
      if (uVar1 == 0xe8820e91) {
        in_EAX[0x118] = 3;
        return;
      }
    }
  }
  else if (uVar1 < 0xf765fc46) {
    if (uVar1 == 0xf765fc45) {
      cVar2 = FUN_0001bb00();
      if ((cVar2 == '\0') && (piVar4 = (int *)FUN_0001ba10(), *(int *)(*piVar4 + 0xc) != 0)) {
        piVar4 = (int *)FUN_0001ba10();
        if ((*(int *)(*piVar4 + 0xc) != 0) &&
           (*(int *)(*(int *)(*(int *)(*piVar4 + 0xc) + 0xc) + 4) == 3)) {
          FUN_0001ba10();
          cVar2 = FUN_00039880(1);
          if ((cVar2 != '\0') && ((in_EAX[0xf1] & 0x20U) == 0)) {
            in_EAX[0xf1] = in_EAX[0xf1] | 0x20;
            FUN_0001ba10();
            FUN_00012320(0x58);
            FUN_000120f0();
            FUN_000120f0();
            FUN_000120f0();
            FUN_00012000(local_38,local_40);
            FUN_00012440();
            return;
          }
        }
      }
    }
    else if (uVar1 < 0xefc40f0f) {
      if (uVar1 == 0xefc40f0e) {
        if (in_ECX[2] != 0x7f7fffff) {
          in_EAX[0x139] = in_ECX[2];
          return;
        }
      }
      else {
        if (uVar1 == 0xebbb4132) {
          FUN_0003f0e0(1);
          return;
        }
        if (uVar1 == 0xecd616cf) {
          in_EAX[0xf1] = in_EAX[0xf1] ^
                         ((uint)(1.1920929e-07 < ABS((float)in_ECX[2])) << 9 ^ in_EAX[0xf1]) & 0x200
          ;
          return;
        }
      }
    }
    else {
      if (uVar1 == 0xf0233972) {
        *(byte *)(in_EAX + 0x119) = *(byte *)(in_EAX + 0x119) | 1;
        FUN_000124f0(0x41200000);
        return;
      }
      if (uVar1 == 0xf1789734) {
        piVar4 = (int *)(**(code **)(*in_EAX + 0x24))();
        uVar5 = (**(code **)(*piVar4 + 0xc))();
        iVar3 = FUN_000120f0();
        *(uint *)(iVar3 + 0x250) = *(uint *)(iVar3 + 0x250) | 1;
        FUN_000129f0(in_EAX + 0x7b,*(undefined4 *)(iVar3 + 0x24c),uVar5);
        return;
      }
    }
  }
  else if (uVar1 < 0xf9d7a416) {
    if (uVar1 == 0xf9d7a415) {
      in_EAX[0xd9] = in_ECX[2];
      return;
    }
    if (uVar1 == 0xf786d2cc) {
      *(uint *)(in_EAX[0x6a] + 0x10) = in_ECX[2];
      return;
    }
    if (uVar1 == 0xf84dc16b) {
      *(uint *)(in_EAX[0x6a] + 0xc) = in_ECX[2];
      return;
    }
  }
  else if (uVar1 == 0xfd0d3492) {
    in_EAX[0xd8] = in_ECX[2];
  }
  return;
}
