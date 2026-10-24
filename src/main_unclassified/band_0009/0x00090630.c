/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D8B197C8EB65089080225560ED2C9D0FF17D0ECA5B1EECEB1ED5DFA2AF45A4F
 * Entry: 0x00090630, Ghidra index: 1769, label: FUN_00090630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00090630(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  
  iVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  if ((iVar2 != 0) && (iVar7 = 0, 0 < iVar2)) {
    do {
      iVar3 = (**(code **)(*param_1 + 0x48))(param_1,iVar7);
      puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x8c))(iVar3);
      *puVar4 = *(undefined4 *)(iVar3 + 8);
      uVar1 = *(uint *)(iVar3 + 0xc);
      if (uVar1 < 0xe041e0ba) {
        if (uVar1 == 0xe041e0b9) {
          bVar5 = 1;
        }
        else if (uVar1 == 0x1533eb6f) {
          bVar5 = 3;
        }
        else {
          if (uVar1 != 0x18712765) goto LAB_000906a8;
          bVar5 = 2;
        }
      }
      else if ((uVar1 == 0xe3012d9e) || (uVar1 != 0xeb63b2e3)) {
LAB_000906a8:
        bVar5 = 0;
      }
      else {
        bVar5 = 4;
      }
      bVar5 = *(byte *)(puVar4 + 2) ^ (*(byte *)(puVar4 + 2) ^ bVar5) & 0xf;
      *(byte *)(puVar4 + 2) = bVar5;
      uVar1 = *(uint *)(iVar3 + 0x10);
      if (uVar1 < 0xe041e0ba) {
        if (uVar1 == 0xe041e0b9) {
          cVar6 = '\x01';
        }
        else if (uVar1 == 0x1533eb6f) {
          cVar6 = '\x03';
        }
        else {
          if (uVar1 != 0x18712765) goto LAB_000906f9;
          cVar6 = '\x02';
        }
      }
      else if ((uVar1 == 0xe3012d9e) || (uVar1 != 0xeb63b2e3)) {
LAB_000906f9:
        cVar6 = '\0';
      }
      else {
        cVar6 = '\x04';
      }
      iVar7 = iVar7 + 1;
      *(byte *)(puVar4 + 2) = bVar5 & 0xf | cVar6 << 4;
    } while (iVar7 < iVar2);
  }
  iVar2 = (**(code **)(*param_1 + 0x5c))(param_1);
  iVar7 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = (**(code **)(*param_1 + 100))(param_1,iVar7);
      /* 0x0009071D loads EBP=0x1D3E389E; 0x0009072F takes the
       * address of the caller's guest parameter DWORD; 0x00090736
       * overwrites that DWORD with EBP before virtual slot 0x70.
       * The original object pointer is already saved in EDI.
       * TODO: lifetime/aliasing of this guest stack slot across the
       * indirect call is not verified for a native host ABI. */
      uint32_t guest_constant_word = UINT32_C(0x1d3e389e);
      (**(code **)(*param_1 + 0x70))(param_1,iVar3,&guest_constant_word,*(undefined4 *)(iVar3 + 0x14));
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  return;
}
