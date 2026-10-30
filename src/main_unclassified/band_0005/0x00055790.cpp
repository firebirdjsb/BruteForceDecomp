/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37808A096C0182242B8842131AD4D0F74D58B6EC3922B5B5B264F0A92A3AB92C
 * Entry: 0x00055790, Ghidra index: 815, label: FUN_00055790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00055790(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_EBX;
  
  *(undefined4 *)(unaff_EBX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(unaff_EBX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  uVar3 = *(uint *)(unaff_EBX + 0x88) ^
          (*(uint *)(unaff_EBX + 0x88) ^ *(uint *)(param_1 + 0x88)) & 0x1000;
  *(uint *)(unaff_EBX + 0x88) = uVar3;
  *(uint *)(unaff_EBX + 0x88) = (*(uint *)(param_1 + 0x88) ^ uVar3) & 0x2000 ^ uVar3;
  *(undefined4 *)(unaff_EBX + 100) = *(undefined4 *)(param_1 + 100);
  if (unaff_EBX + 0x1c != param_1 + 0x1c) {
    FUN_00055650();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(unaff_EBX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(unaff_EBX + 0x6c) = uVar2;
  *(undefined4 *)(unaff_EBX + 0x70) = uVar1;
  if (*(int *)(unaff_EBX + 0x58) != *(int *)(param_1 + 0x58)) {
    FUN_0008f6a0(*(int *)(param_1 + 0x58));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(unaff_EBX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(unaff_EBX + 0x78) = uVar2;
  *(undefined4 *)(unaff_EBX + 0x7c) = uVar1;
  *(undefined4 *)(unaff_EBX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  if (unaff_EBX != param_1) {
    FUN_00022ce0();
  }
  uVar3 = *(uint *)(unaff_EBX + 0x88) ^
          (*(uint *)(unaff_EBX + 0x88) ^ *(uint *)(param_1 + 0x88)) & 1;
  *(uint *)(unaff_EBX + 0x88) = uVar3;
  *(undefined1 *)(unaff_EBX + 0x18) = *(undefined1 *)(param_1 + 0x18);
  *(undefined4 *)(unaff_EBX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(unaff_EBX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(uint *)(unaff_EBX + 0x88) = uVar3 ^ (uVar3 ^ *(uint *)(param_1 + 0x88)) & 2;
  *(undefined4 *)(unaff_EBX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(unaff_EBX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  uVar3 = *(uint *)(unaff_EBX + 0x88) ^
          (*(uint *)(unaff_EBX + 0x88) ^ *(uint *)(param_1 + 0x88)) & 0xf8;
  *(uint *)(unaff_EBX + 0x88) = uVar3;
  uVar3 = (*(uint *)(param_1 + 0x88) ^ uVar3) & 4 ^ uVar3;
  *(uint *)(unaff_EBX + 0x88) = uVar3;
  uVar3 = (*(uint *)(param_1 + 0x88) ^ uVar3) & 0x100 ^ uVar3;
  *(uint *)(unaff_EBX + 0x88) = uVar3;
  uVar3 = (*(uint *)(param_1 + 0x88) ^ uVar3) & 0x200 ^ uVar3;
  *(uint *)(unaff_EBX + 0x88) = uVar3;
  *(undefined4 *)(unaff_EBX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  uVar3 = uVar3 ^ (uVar3 ^ *(uint *)(param_1 + 0x88)) & 0x8000;
  *(uint *)(unaff_EBX + 0x88) = uVar3;
  uVar3 = (*(uint *)(param_1 + 0x88) ^ uVar3) & 0x10000 ^ uVar3;
  *(uint *)(unaff_EBX + 0x88) = uVar3;
  uVar3 = (*(uint *)(param_1 + 0x88) ^ uVar3) & 0xe0000 ^ uVar3;
  *(uint *)(unaff_EBX + 0x88) = uVar3;
  uVar3 = (*(uint *)(param_1 + 0x88) ^ uVar3) & 0x700000 ^ uVar3;
  *(uint *)(unaff_EBX + 0x88) = uVar3;
  uVar3 = (*(uint *)(param_1 + 0x88) ^ uVar3) & 0x400 ^ uVar3;
  *(uint *)(unaff_EBX + 0x88) = uVar3;
  *(undefined1 *)(unaff_EBX + 0x19) = *(undefined1 *)(param_1 + 0x19);
  uVar3 = *(uint *)(unaff_EBX + 0x88) ^ (uVar3 ^ *(uint *)(param_1 + 0x88)) & 0x800;
  *(uint *)(unaff_EBX + 0x88) = uVar3;
  *(undefined4 *)(unaff_EBX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(uint *)(unaff_EBX + 0x88) = uVar3 ^ (uVar3 ^ *(uint *)(param_1 + 0x88)) & 0x4000;
  return;
}
