/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 721C7EDCCCD1DE28506566FD6E5061A8F10C76BA9B304F246942D725B7934095
 * Entry: 0x000e49d0, Ghidra index: 2852, label: FUN_000e49d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000e49d0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_ESI;
  int *local_c;
  int *piStack_8;
  int *local_4;
  
  local_c = (int *)0x796c3b0;
  piVar3 = (int *)FUN_000a7770(&local_c);
  local_4 = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar3);
    piVar5 = *(int **)(unaff_ESI + 0xe4);
    puVar1 = (undefined4 *)(unaff_ESI + 0xe4);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
      *puVar1 = 0;
    }
    (**(code **)(*piVar3 + 0x30))(piVar3,0,puVar1);
    uVar4 = (**(code **)(*(int *)*puVar1 + 0x28))((int *)*puVar1);
    *(undefined4 *)(unaff_ESI + 0xf0) = uVar4;
  }
  local_c = (int *)0x575b9b9;
  piVar3 = (int *)FUN_000a7770(&local_c);
  piStack_8 = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar3);
    piVar5 = *(int **)(unaff_ESI + 0xe8);
    puVar1 = (undefined4 *)(unaff_ESI + 0xe8);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
      *puVar1 = 0;
    }
    (**(code **)(*piVar3 + 0x30))(piVar3,0,puVar1);
    uVar4 = (**(code **)(*(int *)*puVar1 + 0x28))((int *)*puVar1);
    *(undefined4 *)(unaff_ESI + 0xf4) = uVar4;
  }
  local_c = (int *)0x446a157;
  piVar5 = (int *)FUN_000a7770(&local_c);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(piVar5);
    piVar3 = *(int **)(unaff_ESI + 0xec);
    puVar1 = (undefined4 *)(unaff_ESI + 0xec);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      *puVar1 = 0;
    }
    (**(code **)(*piVar5 + 0x30))(piVar5,0,puVar1);
    uVar4 = (**(code **)(*(int *)*puVar1 + 0x28))((int *)*puVar1);
    *(undefined4 *)(unaff_ESI + 0xf8) = uVar4;
    piVar3 = piStack_8;
  }
  piStack_8 = (int *)0xef250533;
  piStack_8 = (int *)FUN_000a7770(&piStack_8);
  piVar2 = *(int **)(unaff_ESI + 0xb60);
  if (piVar2 != piStack_8) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined4 *)(unaff_ESI + 0xb60) = 0;
    }
    *(int **)(unaff_ESI + 0xb60) = piStack_8;
    if (piStack_8 != (int *)0x0) {
      (**(code **)(*piStack_8 + 4))(piStack_8);
    }
  }
  uVar4 = (**(code **)(**(int **)(unaff_ESI + 0xe4) + 0x14))(*(int **)(unaff_ESI + 0xe4));
  *(undefined4 *)(unaff_ESI + 4) = uVar4;
  uVar4 = (**(code **)(**(int **)(unaff_ESI + 0xe4) + 0x18))(*(int **)(unaff_ESI + 0xe4));
  *(undefined4 *)(unaff_ESI + 0x20) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x38) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x50) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x68) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 8) = uVar4;
  *(undefined4 *)(unaff_ESI + 0x74) = 0xbf800000;
  *(undefined4 *)(unaff_ESI + 0x78) = 0xbf800000;
  *(undefined4 *)(unaff_ESI + 0x8c) = 0xbf800000;
  *(undefined4 *)(unaff_ESI + 0xc0) = 0xbf800000;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  *(undefined4 *)(unaff_ESI + 0x44) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  *(undefined4 *)(unaff_ESI + 0x54) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0x58) = 0;
  *(undefined4 *)(unaff_ESI + 0x5c) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0x60) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 100) = 0;
  *(undefined4 *)(unaff_ESI + 0x6c) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0x70) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0x7c) = 0;
  *(undefined4 *)(unaff_ESI + 0x84) = 0;
  *(undefined4 *)(unaff_ESI + 0x88) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0x90) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0x94) = 0;
  *(undefined4 *)(unaff_ESI + 0x9c) = 0;
  *(undefined4 *)(unaff_ESI + 0xa0) = 0;
  *(undefined4 *)(unaff_ESI + 0xa4) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0xa8) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0xac) = 0;
  *(undefined4 *)(unaff_ESI + 0xb4) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0xb8) = 0;
  *(undefined4 *)(unaff_ESI + 0xbc) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0xc4) = 0;
  *(undefined4 *)(unaff_ESI + 0xcc) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0xd0) = 0x3f800000;
  *(undefined2 *)(unaff_ESI + 0xd4) = 0;
  *(undefined2 *)(unaff_ESI + 0xd6) = 1;
  *(undefined2 *)(unaff_ESI + 0xd8) = 2;
  *(undefined2 *)(unaff_ESI + 0xda) = 2;
  *(undefined2 *)(unaff_ESI + 0xdc) = 3;
  *(undefined2 *)(unaff_ESI + 0xde) = 0;
  *(undefined1 *)(unaff_ESI + 0x110) = 0;
  *(undefined4 *)(unaff_ESI + 0x114) = 2;
  *(undefined4 *)(unaff_ESI + 0x11c) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0x118) = 0x3f4ccccd;
  *(undefined4 *)(unaff_ESI + 0x120) = 0;
  FUN_000e47b0(unaff_ESI);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return 1;
}
