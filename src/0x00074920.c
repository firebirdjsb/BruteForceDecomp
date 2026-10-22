/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A757BA912903D095EB52C5C8E1D5AA7011D9A0016229E0DDB094E0265E082534
 * Entry: 0x00074920, Ghidra index: 1329, label: FUN_00074920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00074920(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int in_EDX;
  uint *unaff_ESI;
  
  uVar1 = *unaff_ESI;
  if (uVar1 < 0xe737ba5c) {
    if (uVar1 != 0xe737ba5b) {
      if (uVar1 == 0xf90e638) {
        iVar2 = *(int *)(*(int *)(in_EDX + 0x20) + 0xc4c);
        if (iVar2 == 0) {
          return 0;
        }
        if (*(int *)(iVar2 + 0x14) == 0x62bd076) {
          if (*(int *)(iVar2 + 0x40) == 0) {
            return 1;
          }
          *unaff_ESI = *(uint *)(*(int *)(iVar2 + 0x40) + 8);
          return 1;
        }
        return 0;
      }
      if (uVar1 == 0x1221ecbe) {
        iVar2 = *(int *)(*(int *)(in_EDX + 0x20) + 0xc4c);
        if (iVar2 == 0) {
          return 0;
        }
        if (*(int *)(iVar2 + 0x14) == 0x62bd076) {
          if (*(int *)(iVar2 + 0x44) == 0) {
            return 1;
          }
          *unaff_ESI = *(uint *)(*(int *)(iVar2 + 0x44) + 8);
          return 1;
        }
        return 0;
      }
      if (uVar1 != 0x1e2f5069) {
        return 0;
      }
      iVar2 = *(int *)(*(int *)(in_EDX + 0x20) + 0xc4c);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(iVar2 + 0x14) != 0x62bd076) {
        return 0;
      }
      if (*(int *)(iVar2 + 0x44) == 0) {
        return 1;
      }
      *unaff_ESI = *(uint *)(*(int *)(iVar2 + 0x44) + 4);
      return 1;
    }
    iVar2 = *(int *)(*(int *)(in_EDX + 0x20) + 0xc4c);
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x14) != 0x62bd076) {
      return 0;
    }
    puVar3 = *(uint **)(iVar2 + 0x44);
  }
  else {
    if (uVar1 != 0xe7f12d44) {
      if (uVar1 != 0xf9279b0b) {
        return 0;
      }
      iVar2 = *(int *)(*(int *)(in_EDX + 0x20) + 0xc4c);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(iVar2 + 0x14) != 0x62bd076) {
        return 0;
      }
      if (*(int *)(iVar2 + 0x40) == 0) {
        return 1;
      }
      *unaff_ESI = *(uint *)(*(int *)(iVar2 + 0x40) + 4);
      return 1;
    }
    iVar2 = *(int *)(*(int *)(in_EDX + 0x20) + 0xc4c);
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x14) != 0x62bd076) {
      return 0;
    }
    puVar3 = *(uint **)(iVar2 + 0x40);
  }
  if (puVar3 != (uint *)0x0) {
    *unaff_ESI = *puVar3;
  }
  return 1;
}
