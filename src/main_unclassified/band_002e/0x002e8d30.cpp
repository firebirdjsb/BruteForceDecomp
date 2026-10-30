/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D9AB62BBDB612B19468B780266333DA5042AD8E0456BB225C1B95B3CE0B6AF85
 * Entry: 0x002e8d30, Ghidra index: 10545, label: FUN_002e8d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e8d30(int *param_1)

{
  int in_ECX;
  uint uVar1;
  int iVar2;
  uint32_t guest_read_word; /* x86 overwrites an argument stack DWORD */
  
  (**(code **)(*param_1 + 0x20))((uint *)(in_ECX + 8));
  (**(code **)(*param_1 + 0x20))(in_ECX + 0xc);
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x10);
  (**(code **)(*param_1 + 0x20))((int *)(in_ECX + 0x14));
  iVar2 = *(int *)(in_ECX + 0x14);
  if (iVar2 != 0) {
    uVar1 = *(uint *)(in_ECX + 8);
    do {
      if (param_1[1] == 0) {
        (**(code **)(*param_1 + 0x38))(*(undefined4 *)(*(int *)(in_ECX + 4) + uVar1 * 4));
      }
      else {
        guest_read_word = 0; /* MOV DWORD PTR [ESP+0x20],0 */
        FUN_002e8b40(param_1,&guest_read_word,1);
        *(undefined4 *)(*(int *)(in_ECX + 4) + uVar1 * 4) = guest_read_word;
      }
      uVar1 = uVar1 + 1;
      if (*(uint *)(in_ECX + 0x10) <= uVar1) {
        uVar1 = 0;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1[3];
}
